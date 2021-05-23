/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class HKHealthStore, HKTaskServerProxyProvider, NSString, NSUUID;

@interface HKGymKitDataSource : NSObject

{
    NSUUID *_identifier;
    HKTaskServerProxyProvider *_proxyProvider;
    HKHealthStore *_healthStore;
}

@property (retain, nonatomic) NSUUID *identifier;
@property (retain, nonatomic) HKTaskServerProxyProvider *proxyProvider;
@property (retain, nonatomic) HKHealthStore *healthStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)serverInterface;
+ (id)clientInterface;
+ (id)defaultConfigurationWithWorkoutConfiguration:(id)arg1;

- (id)exportedInterface;
- (void)connectionInvalidated;
- (void)connectionInterrupted;
- (id)remoteInterface;
- (void)_startTaskServerIfNeeded;
- (void)workoutBuilderDidFinish;
- (id)initWithHealthStore:(id)arg1 workoutConfiguration:(id)arg2;

@end
