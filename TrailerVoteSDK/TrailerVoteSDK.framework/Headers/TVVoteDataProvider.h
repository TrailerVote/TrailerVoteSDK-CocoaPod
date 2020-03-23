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

@class TVVotedMoviesListItem;


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

/// Returns the list of previously voted movies
/// @param completion Completion block that will receive the list
- (void)getVotedMoviesListWithCompletion:(void (^ _Nonnull)(NSArray<TVVotedMoviesListItem *> * _Nonnull list))completion;

@end
