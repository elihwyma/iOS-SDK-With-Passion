/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class HKHealthStore, HKQuantitySample, HKTaskServerProxyProvider, NSMutableSet, NSString, NSUUID;

@interface HKQuantitySeriesSampleEditor : NSObject

{
    HKHealthStore *_healthStore;
    NSUUID *_identifier;
    HKTaskServerProxyProvider *_proxyProvider;
    struct os_unfair_lock_s _lock;
    long long _state;
    NSMutableSet *_datesIntervalsToRemove;
    HKQuantitySample *_quantitySample;
}

@property (nonatomic, readonly) long long unitTest_state;
@property (copy, readonly) HKQuantitySample *quantitySample;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)serverInterface;

- (void)dealloc;
- (id)exportedInterface;
- (void)connectionInvalidated;
- (id)remoteInterface;
- (void)discard;
- (_Bool)_performWithError:(id *)arg1 stateValidator:(CDUnknownBlockType)arg2 lockedBlock:(CDUnknownBlockType)arg3;
- (id)initWithHealthStore:(id)arg1 quantitySample:(id)arg2;
- (_Bool)removeQuantityForDateInterval:(id)arg1 error:(id *)arg2;
- (void)commitWithCompletion:(CDUnknownBlockType)arg1;

@end
