//////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////
////TVAudioRecognitionViewControllerNewDelegate.h/////////
//////////////////////////////////////////////////////////
////TrailerVoteSDK////////////////////////////////////////
//////////////////////////////////////////////////////////
////Copyright © 2018 TrailerVote. All rights reserved.////
//////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////


#import <UIKit/UIKit.h>

@class TVAudioRecognitionViewControllerNew;


/**
 Delegate protocol used to notify the client app durirng the trailier recognition process
 */
__attribute__((visibility("default")))
@protocol TVAudioRecognitionViewControllerNewDelegate

/**
 Called when a special promo clip is recognized after the user has been presented with a social login screen and tapped on Facebook login button
 
 @param viewController Trailer recognition view controller that called this method
 @param subscriptionEnabled Whether or not the user has checked the Subscription checkbox
 @param hostViewController A host view controller to present your own modal screen from
 */
- (void)                audioRecognitionViewController:(nonnull UIViewController *)viewController
userDidTapOnFacebookLoginButtonWithSubscriptionEnabled:(BOOL)subscriptionEnabled
                                    hostViewController:(nonnull __kindof UIViewController *)hostViewController;

/**
 Called when a special promo clip is recognized after the user has been presented with a social login screen and tapped on Twitter login button
 
 @param viewController Trailer recognition view controller that called this method
 @param subscriptionEnabled Whether or not the user has checked the Subscription checkbox
 @param hostViewController A host view controller to present your own modal screen from
 */
- (void)               audioRecognitionViewController:(nonnull UIViewController *)viewController
userDidTapOnTwitterLoginButtonWithSubscriptionEnabled:(BOOL)subscriptionEnabled
                                   hostViewController:(nonnull __kindof UIViewController *)hostViewController;

@end

