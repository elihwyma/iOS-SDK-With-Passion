/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class HKHealthStore, HKTaskServerProxyProvider, NSString, NSUUID;

@interface HKHealthKitControlTaskClient : NSObject

{
    HKHealthStore *_healthStore;
    NSUUID *_identifier;
    HKTaskServerProxyProvider *_proxyProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)serverInterface;

- (void)invalidate;
- (id)exportedInterface;
- (void)connectionInvalidated;
- (id)remoteInterface;
- (id)initWithHealthStore:(id)arg1;
- (void)condenseWorkoutsForReason:(long long)arg1 workoutBatchLimit:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)condenseWorkoutWithUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)condensedWorkoutsWithCompletion:(CDUnknownBlockType)arg1;
- (void)condensableWorkoutsWithCompletion:(CDUnknownBlockType)arg1;

@end
