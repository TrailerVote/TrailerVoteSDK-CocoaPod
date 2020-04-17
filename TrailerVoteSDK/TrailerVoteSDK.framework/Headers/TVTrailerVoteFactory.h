//////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////
////TVTrailerVoteFactory.h////////////////////////////////
//////////////////////////////////////////////////////////
////TrailerVoteSDK////////////////////////////////////////
//////////////////////////////////////////////////////////
////Copyright © 2019 TrailerVote. All rights reserved.////
//////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////


#import <Foundation/Foundation.h>
#import "TVRemoteNotificationsDelegate.h"
#import "TVAudioRecognitionViewControllerDelegate.h"
#import "TVPreloadMode.h"


@class TVMoviesFeedProvider;
@class TVUserInterestSubmitter;
@class TVAudioRecognizer;
@class TVProductCarouselViewController;
@class TVVotedTrailersFeedViewController;
@class TVRateViewController;
@class TVVoteDataProvider;


/**
 Main access point to the SDK functionality. Contains methods for embedding ready to use UI components as well as presenting full screen view controllers
 */
__attribute__((visibility("default")))
@interface TVTrailerVoteFactory : NSObject

/**
 The remote notifications delegate object
 */
@property (nonatomic, weak, nullable) id<TVRemoteNotificationsDelegate> remoteNotificationsDelegate;

@property (nonatomic) BOOL releaseAndTicketsNotificationStatus;
@property (nonatomic) BOOL movieStartingNotificationStatus;

/**
 :nodoc:
 */
- (nonnull instancetype)init NS_UNAVAILABLE;

/**
 :nodoc:
 */
+ (nonnull TVTrailerVoteFactory *)new NS_UNAVAILABLE;

/**
 Use this method to set the pre-load mode for loading images. The default value is TVPreloadModeNormal which loads all images during the pre-load process.

 @param preloadMode Preload mode to set
 */
+ (void)setPreloadMode:(TVPreloadMode)preloadMode;

/**
 Call this method to get the singleton object of the factory

 @return The factory singleton object
 */
+ (nonnull TVTrailerVoteFactory *)sharedFactory;

/**
 Call this method in your app's delegate -application:didFinishLaunchingWithOptions: so the sdk can infer the app launch method in order to collect metrics events. This method should be called prior to -sharedFactory!

 @param application An application instance
 @param launchOptions Launch options dictionary
 */
+ (void)application:(nonnull UIApplication *)application didFinishLaunchingWithOptions:(nonnull NSDictionary *)launchOptions;

/**
 Call this method to set the place URL being used in analytics/metrics events

 @param placeURL Place URL to set
 */
- (void)setPlaceURL:(nonnull NSURL *)placeURL;

/**
 Triggers the data preload process, call it as soon as possible for the sdk to prepare the data needed for movie recognition and voting
 */
- (void)launchDataPreload;

/// Sets the remote notifications device token to use for registering to remote notifications
/// @param token Device registration token
- (void)setRemoteNotificationsDeviceToken:(nonnull NSString *)token;

/**
 Turns off the push notifications capability for the current device
 */
- (void)disablePushNotifications;

/**
 Sets the partner logo image to use on movie trailer recognition cards as well as on the loyalty program screen

 @param logoImage Your logo image to use
 */
- (void)setPartnerLogoImage:(nullable UIImage *)logoImage;

/**
 Call this method after receiving a push notification payload either in -[UIApplicationDelegate application:didFinishLaunchingWithOptions:] or -[UIApplicationDelegate application:didReceiveRemoteNotification:fetchCompletionHandler:] in order for the SDK to process the data in the payload. Upon processing the `remoteNotificationsDelegate` will be called asked for performing a specific action.

 @param payload Notification's payload
 @param fetchCompletion Background fetch completion handler to call when the notification processing is done
 */
- (void)processPushNotificationPayload:(nonnull NSDictionary *)payload fetchCompletion:(void (^ _Nonnull)(UIBackgroundFetchResult result))fetchCompletion;

/**
 Returns a provider class for getting the user votes

 @return An initialized provider class
 */
- (nonnull TVVoteDataProvider *)voteDataProvider;

/// Returns a ready-to-use button for launching the In-Cinema Experience screen
/// @param hostViewController View controller to use for presenting the screen
/// @param recognitionDelegate Audio recognition delegate
- (nonnull UIButton *)inCinemaExperienceButtonWithHostViewController:(nonnull UIViewController *)hostViewController recognitionDelegate:(nullable id<TVAudioRecognitionViewControllerDelegate>)recognitionDelegate;

/**
 Presents the video player screen for specified movie trailer url

 @param hostViewController View controller to use for presenting the modal screen
 @param movieTrailerURL Movie trailer url
 */
- (void)presentVideoPlayerViewController:(nonnull UIViewController *)hostViewController movieTrailerURL:(nonnull NSURL *)movieTrailerURL;

/**
 Presents the trailer recognition screen from specified host view controller

 @param hostViewController View controller to use for presenting the modal screen
 @param recognitionDelegate Audio recognition delegate
 */
- (void)presentTrailerRecognitionViewController:(nonnull UIViewController *)hostViewController recognitionDelegate:(nullable id<TVAudioRecognitionViewControllerDelegate>)recognitionDelegate;


/**
 Logs the showtimes page shown analytics event

 @param movieIdentifier Your cinema identifier
 @param authority Authority to use for movie lookup by id
 */
- (void)logShowtimesPageShownEventWithIdentifier:(nonnull NSString *)movieIdentifier authority:(nonnull NSString *)authority;

/**
 Logs the ticket purchased analytics event

 @param movieID Movie identifier
 @param authority Authority to use for movie lookup by id
 @param showtimeDate Showtime date for purchased movie ticket
 @param ticketCount Ticket count
 @param totalPrice Total price
 */
- (void)logTicketPurchasedEventWithMovieID:(nonnull NSString *)movieID authority:(nonnull NSString *)authority showtimeDate:(nonnull NSDate *)showtimeDate ticketCount:(NSUInteger)ticketCount totalPrice:(double)totalPrice;

/// Use this method to get the your system movie ID using the TrailerVoteSDK product URL
/// @param productURL Product URL of the movie
/// @param completion Completion block
- (void)getMovieIDsFromProductURL:(nonnull NSURL *)productURL completion:(void (^_Nonnull)(NSDictionary<NSString *, NSString *> * _Nonnull movieIds))completion;

@end
