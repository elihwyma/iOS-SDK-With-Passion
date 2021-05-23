/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <BulletinDistributorCompanion/Swift-Protocol.h>

@protocol BLTCompanionServer <Swift>

- (unsigned short)handleAction: /* Error: Ran out of types for this method. */;
- (unsigned short)removeBulletinWithPublisherBulletinID:recordID:sectionID: /* Error: Ran out of types for this method. */;
- (unsigned short)handleDidPlayLightsAndSirens:forBulletin:inPhoneSection:transmissionDate:receptionDate:replyToken: /* Error: Ran out of types for this method. */;
- (unsigned short)shouldSuppressLightsAndSirensNow;
- (unsigned short)willSendLightsAndSirensWithPublisherBulletinID:recordID:inPhoneSection:systemApp:completion: /* Error: Ran out of types for this method. */;

@end
