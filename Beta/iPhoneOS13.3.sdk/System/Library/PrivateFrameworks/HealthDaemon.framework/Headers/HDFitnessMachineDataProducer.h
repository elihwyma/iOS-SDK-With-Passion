/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDEurotasData, HDHealthServiceManager, HDProfile, HKQuantity, NSString, _HDFTMProducerMetricTracker;

@protocol OS_dispatch_queue;

@interface HDFitnessMachineDataProducer : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _sessionIdentifier;
    HKQuantity *_totalActiveEnergy;
    HKQuantity *_totalBasalEnergy;
    HKQuantity *_latestHeartRate;
    HKQuantity *_averageHeartRate;
    _HDFTMProducerMetricTracker *_heartRateTracker;
    _Bool _heartRateEnabled;
    HDEurotasData *_previousEurotasData;
    HDProfile *_profile;
}

@property (weak, nonatomic) HDProfile *profile;
@property (nonatomic, readonly) HDHealthServiceManager *healthServiceManager;
@property (nonatomic, readonly) _Bool attached;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithProfile:(id)arg1;
- (void)resumeCurrentSession;
- (void)pauseCurrentSession;
- (void)sendInitialValues;
- (void)attachHealthServiceSession:(unsigned long long)arg1;
- (void)detachHealthServiceSession;
- (void)deliverFinalValuesAndDetachWithCompletion:(CDUnknownBlockType)arg1;
- (void)_readHeartRateEnabledPreference;
- (void)_queue_updateFitnessMachine;
- (void)_queue_updateFitnessMachineWithCompletion:(CDUnknownBlockType)arg1 forcing:(_Bool)arg2;
- (void)_queue_detachHealthServiceSession;
- (void)_queue_workoutDataAccumulator:(id)arg1 didUpdateStatistics:(id)arg2;
- (id)_queue_generateEurotasData;
- (void)_queue_sendEurotasData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)workoutDataAccumulator:(id)arg1 didUpdateStatistics:(id)arg2;

@end
