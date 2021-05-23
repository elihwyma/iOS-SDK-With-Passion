/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/Swift-Protocol.h>

@class HKQuantity;

@protocol _HDDemoDataModuleDelegate <Swift>

@property (nonatomic, readonly) long long activityType;
@property (nonatomic, readonly) HKQuantity *speed;

- (unsigned short)demoDataModule:didProduceDataObject: /* Error: Ran out of types for this method. */;

@end
