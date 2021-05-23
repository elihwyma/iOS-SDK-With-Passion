/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class HKHealthStore, HKTaskServerProxyProvider, HKWorkoutConfiguration, NSString, NSUUID;

@protocol HKGymKitMetricsDataSourceDelegate;

@interface HKGymKitMetricsDataSource : NSObject

{
    HKHealthStore *_healthStore;
    HKWorkoutConfiguration *_workoutConfiguration;
    id <HKGymKitMetricsDataSourceDelegate> _delegate;
    NSUUID *_identifier;
    HKTaskServerProxyProvider *_proxyProvider;
}

@property (retain, nonatomic) NSUUID *identifier;
@property (retain, nonatomic) HKTaskServerProxyProvider *proxyProvider;
@property (weak, nonatomic) id <HKGymKitMetricsDataSourceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)serverInterface;
+ (id)clientInterface;

- (id)exportedInterface;
- (void)connectionInvalidated;
- (void)connectionInterrupted;
- (id)remoteInterface;
- (void)workoutBuilderDidFinish;
- (id)initWithHealthStore:(id)arg1 workoutConfiguration:(id)arg2;
- (void)_startTaskServerIfNeededWithCompletion:(CDUnknownBlockType)arg1;
- (void)clientRemote_didReceiveMetrics:(id)arg1;

@end
