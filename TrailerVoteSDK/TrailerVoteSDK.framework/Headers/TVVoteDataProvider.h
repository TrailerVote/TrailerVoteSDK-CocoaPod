//////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////
////TVVoteDataProvider.h//////////////////////////////////
//////////////////////////////////////////////////////////
////TrailerVoteSDK////////////////////////////////////////
//////////////////////////////////////////////////////////
////Copyright © 2019 TrailerVote. All rights reserved.////
//////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////


#import <Foundation/Foundation.h>
#import "TVUserInterestSubmitType.h"


/**
 Use this class to get the voting data on previously voted movies
 */
__attribute__((visibility("default")))
@interface TVVoteDataProvider : NSObject

/**
 :nodoc:
 */
- (nonnull instancetype)init NS_UNAVAILABLE;

/**
 :nodoc:
 */
+ (nonnull TVVoteDataProvider *)new NS_UNAVAILABLE;

/**
 Returns the vote for a given audio fragment URL

 @param audioFragmentURL An audio fragment URL that the user has voted on previouly
 @param completion Completion block that will receive the vote data or an error
 */
- (void)getVoteForAudioFragmentURL:(nonnull NSURL *)audioFragmentURL
                        completion:(void (^ _Nonnull)(TVUserInterestSubmitType vote,
                                                      NSError * _Nullable error))completion;

/**
 Returns the vote for a given product URL

 @param productURL A product URL that the user has voted on previously
 @param completion Completion block that will receive the vote data or an error
 */
- (void)getVoteForProductURL:(nonnull NSURL *)productURL
                  completion:(void (^ _Nonnull)(TVUserInterestSubmitType vote,
                                                NSError * _Nullable error))completion;

@end
