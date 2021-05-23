/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <Foundation/NSObject.h>

@interface BLTBulletinDistributorSubscriptionInfo : NSObject

{
    _Bool _fullBulletins;
    _Bool _ack;
    _Bool _ackAllowedOnLocalConnection;
}

@property (nonatomic) _Bool fullBulletins;
@property (nonatomic) _Bool ack;
@property (nonatomic) _Bool ackAllowedOnLocalConnection;

@end
