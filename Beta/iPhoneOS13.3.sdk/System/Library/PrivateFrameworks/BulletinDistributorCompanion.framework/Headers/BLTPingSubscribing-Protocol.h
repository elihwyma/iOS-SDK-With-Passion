/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <BulletinDistributorCompanion/Swift-Protocol.h>

@protocol BLTPingSubscribing <Swift>

- (unsigned short)subscriptionInfos;
- (unsigned short)sectionIDs;
- (unsigned short)pingWithBulletin:ack: /* Error: Ran out of types for this method. */;
- (unsigned short)pingWithBulletin: /* Error: Ran out of types for this method. */;
- (unsigned short)pingWithRecordID:forSectionID:ack: /* Error: Ran out of types for this method. */;
- (unsigned short)pingWithRecordID:forSectionID: /* Error: Ran out of types for this method. */;
- (unsigned short)pingSubscriberDidLoad;
- (unsigned short)sectionIDsForBulletins;

@end
