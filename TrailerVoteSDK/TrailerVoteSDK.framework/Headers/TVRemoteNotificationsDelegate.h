//////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////
////TVRemoteNotificationsDelegate.h///////////////////////
//////////////////////////////////////////////////////////
////TrailerVoteSDK////////////////////////////////////////
//////////////////////////////////////////////////////////
////Copyright © 2019 TrailerVote. All rights reserved.////
//////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////


#import <Foundation/Foundation.h>


/**
 Protocol for communicating with the source app after remote notification payload processing
 */
@protocol TVRemoteNotificationsDelegate <NSObject>

/**
 Called when the received remote notification's action is the showtimes page launch

 @param movieID A movie ID for which to show the showtimes page
 */
- (void)openShowtimesForMovie:(nonnull NSDictionary<NSString *, NSString *> *)movieIdentifiers;

/**
 Called when the received remote notification's action is the trailer recongition screen launch
 */
- (void)openTrailerRecognition;

/// Called when the received remote notification's action requires a web view to be shown for the given url
/// @param url Url to show in web view
- (void)presentWebViewForURL:(nonnull NSURL *)url;

@end
