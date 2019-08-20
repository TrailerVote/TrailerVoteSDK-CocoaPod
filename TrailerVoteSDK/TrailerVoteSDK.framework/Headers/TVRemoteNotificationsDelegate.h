//////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////
////TVRemoteNotificationsDelegate.h///////////////////////
//////////////////////////////////////////////////////////
////TrailerVoteSDK////////////////////////////////////////
//////////////////////////////////////////////////////////
////Copyright © 2018 TrailerVote. All rights reserved.////
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
- (void)openShowtimesForMovieID:(NSInteger)movieID;

/**
 Called when the received remote notification's action is the trailer recongition screen launch
 */
- (void)openTrailerRecognition;

@end
