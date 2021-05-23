/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class HKHealthStore, HKTaskServerProxyProvider, HKWorkoutConfiguration, NSMutableDictionary, NSMutableSet, NSSet, NSString, NSUUID;

@protocol OS_dispatch_queue;

@interface HKLiveWorkoutDataSource : NSObject

{
    HKWorkoutConfiguration *_workoutConfiguration;
    HKTaskServerProxyProvider *_proxyProvider;
    HKHealthStore *_healthStore;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_mutableSampleTypesToCollect;
    NSMutableDictionary *_mutableFiltersBySampleType;
    NSUUID *_identifier;
}

@property (retain, nonatomic) HKTaskServerProxyProvider *proxyProvider;
@property (retain, nonatomic) HKHealthStore *healthStore;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableSet *mutableSampleTypesToCollect;
@property (retain, nonatomic) NSMutableDictionary *mutableFiltersBySampleType;
@property (nonatomic, readonly) NSUUID *identifier;
@property (copy, readonly) NSSet *typesToCollect;
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
- (id)_queue_dataSourceConfiguration;
- (void)enableCollectionForType:(id)arg1 predicate:(id)arg2;
- (void)disableCollectionForType:(id)arg1;

@end
