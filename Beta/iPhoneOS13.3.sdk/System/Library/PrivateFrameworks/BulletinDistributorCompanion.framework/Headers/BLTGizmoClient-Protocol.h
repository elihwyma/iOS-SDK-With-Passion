/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <BulletinDistributorCompanion/Swift-Protocol.h>

@protocol BLTGizmoClient <Swift>

- (unsigned short)removeBulletinWithPublisherBulletinID:recordID:sectionID: /* Error: Ran out of types for this method. */;
- (unsigned short)addBulletin:playLightsAndSirens:updateType:transmissionDate:receptionDate: /* Error: Ran out of types for this method. */;
- (unsigned short)cancelBulletinWithPublisherMatchID:universalSectionID:feed:transmissionDate:receptionDate: /* Error: Ran out of types for this method. */;
- (unsigned short)addBulletinSummary: /* Error: Ran out of types for this method. */;
- (unsigned short)updateBulletinList: /* Error: Ran out of types for this method. */;

@end
