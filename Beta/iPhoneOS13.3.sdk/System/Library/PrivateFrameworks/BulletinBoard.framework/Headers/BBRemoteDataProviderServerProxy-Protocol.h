/*
 Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import <BulletinBoard/Swift-Protocol.h>

@protocol BBRemoteDataProviderServerProxy <Swift>

- (unsigned short)invalidateBulletins;
- (unsigned short)addBulletin:forDestinations: /* Error: Ran out of types for this method. */;
- (unsigned short)modifyBulletin: /* Error: Ran out of types for this method. */;
- (unsigned short)withdrawBulletinsWithRecordID: /* Error: Ran out of types for this method. */;
- (unsigned short)withdrawBulletinWithPublisherBulletinID: /* Error: Ran out of types for this method. */;
- (unsigned short)reloadSectionParameters: /* Error: Ran out of types for this method. */;
- (unsigned short)reloadDefaultSectionInfo: /* Error: Ran out of types for this method. */;
- (unsigned short)getClearedInfoWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)setClearedInfo: /* Error: Ran out of types for this method. */;
- (unsigned short)getSectionInfoWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)setSectionInfo: /* Error: Ran out of types for this method. */;

@end
