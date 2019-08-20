//////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////
////TVUserInterestSubmitType.h////////////////////////////
//////////////////////////////////////////////////////////
////TrailerVoteSDK////////////////////////////////////////
//////////////////////////////////////////////////////////
////Copyright © 2018 TrailerVote. All rights reserved.////
//////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////


#import <Foundation/Foundation.h>


/**
 Submitted user vote

 - TVUserInterestSubmitTypeYes: User has voted YES
 - TVUserInterestSubmitTypeNo: User has voted NO
 - TVUserInterestSubmitTypeMaybe: User has voted MAYBE
 - TVUserInterestSubmitTypeSkip: User hasn't voted (e.g. skipped the voting card)
 */
typedef NS_ENUM(NSUInteger, TVUserInterestSubmitType)
{
    /**
     User has voted YES
     */
    TVUserInterestSubmitTypeYes,
    /**
     User has voted NO
     */
    TVUserInterestSubmitTypeNo,
    /**
     User has voted MAYBE
     */
    TVUserInterestSubmitTypeMaybe,
    /**
     User hasn't voted (e.g. skipped the voting card)
     */
    TVUserInterestSubmitTypeSkip
};
