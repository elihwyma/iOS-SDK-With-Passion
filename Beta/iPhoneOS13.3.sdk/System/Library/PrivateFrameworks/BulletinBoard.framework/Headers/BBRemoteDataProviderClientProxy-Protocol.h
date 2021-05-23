/*
 Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import <BulletinBoard/Swift-Protocol.h>

@protocol BBRemoteDataProviderClientProxy <Swift>

- (unsigned short)dataProviderDidLoad;
- (unsigned short)bulletinsWithRequestParameters:lastCleared:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)clearedInfoForBulletins:lastClearedInfo:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)clearedInfoForClearingAllBulletinsWithLastClearedInfo:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)clearedInfoForClearingBulletinsFromDate:toDate:lastClearedInfo:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)deliverBulletinActionResponse:withCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)getDataForAttachmentUUID:recordID:isPrimary:withHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)getPNGDataForAttachmentUUID:recordID:isPrimary:sizeConstraints:withHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)getAspectRatioForAttachmentUUID:recordID:isPrimary:withHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)noteSectionInfoDidChange: /* Error: Ran out of types for this method. */;
- (unsigned short)deliverMessageWithName:userInfo: /* Error: Ran out of types for this method. */;

@end
