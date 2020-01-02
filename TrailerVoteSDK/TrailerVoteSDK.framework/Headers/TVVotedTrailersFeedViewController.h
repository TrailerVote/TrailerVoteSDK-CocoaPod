//////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////
////TVVotedTrailersFeedViewController.h///////////////////
//////////////////////////////////////////////////////////
////TrailerVoteSDK////////////////////////////////////////
//////////////////////////////////////////////////////////
////Copyright © 2019 TrailerVote. All rights reserved.////
//////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////


#import <UIKit/UIKit.h>


/**
 View controller that presents the voted trailers feed
 */
__attribute__((visibility("default")))
@interface TVVotedTrailersFeedViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>

/**
 Provides access to the collection view insets in case you need it
 */
@property (nonatomic) UIEdgeInsets collectionViewContentInset;

/**
 :nodoc:
 */
- (nonnull instancetype)init NS_UNAVAILABLE;

/**
 :nodoc:
 */
- (nonnull TVVotedTrailersFeedViewController *)new NS_UNAVAILABLE;

/**
 Reloads the feed
 */
- (void)reloadFeed;

@end
