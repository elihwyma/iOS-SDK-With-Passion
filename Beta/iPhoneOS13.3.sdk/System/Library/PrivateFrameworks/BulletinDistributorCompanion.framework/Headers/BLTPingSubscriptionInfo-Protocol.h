/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <BulletinDistributorCompanion/Swift-Protocol.h>

@class NSString;

@protocol BLTPingSubscriptionInfo <Swift>

@property (copy, nonatomic, readonly) NSString *sectionID;
@property (nonatomic, readonly) _Bool forBulletin;
@property (nonatomic, readonly) _Bool canAck;
@property (nonatomic, readonly) _Bool canAckOnLocalConnection;

@end
