/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

#import <HealthDaemon/Swift-Protocol.h>

@class CMFitnessMachine, HDDataCollectorConfiguration, HDProfile, HKDevice, HKObserverSet, HKSource, NSDate, NSMapTable, NSMutableArray, NSMutableDictionary, NSSet, NSString;

@protocol OS_dispatch_queue;

@interface HDFitnessMachineDataCollector : NSObject <Swift>

{
    unsigned long long _fitnessMachineType;
    NSMapTable *_aggregators;
    NSObject<OS_dispatch_queue> *_queue;
    HDDataCollectorConfiguration *_configuration;
    NSMutableDictionary *_previousDatums;
    NSMutableDictionary *_previousWorkoutMetrics;
    NSDate *_approximatedStartDate;
    NSMutableArray *_bufferedCharacteristics;
    NSSet *_localDevicePreferredObjectTypes;
    NSMutableDictionary *_bufferedMetrics;
    NSString *_machineBrand;
    HKDevice *_device;
    HKSource *_source;
    CMFitnessMachine *_cmFitnessMachine;
    HDProfile *_profile;
    HKObserverSet *_metricsCollectorObservers;
    NSDate *_machinePreferredUntilDate;
}

@property (retain, nonatomic) NSDate *machinePreferredUntilDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)tearDown;
- (void)handleDataCharacteristic:(id)arg1;
- (void)setMachineStartDate:(id)arg1;
- (void)setMachineBrand:(id)arg1;
- (id)initWithFitnessMachineType:(unsigned long long)arg1 profile:(id)arg2;
- (void)configureCollectorsAndAggregators;
- (void)_queue_processBufferedCharacteristics;
- (void)_queue_handleDataCharacteristic:(id)arg1;
- (void)_queue_processDataCharacteristic:(id)arg1;
- (void)_queue_processDatumsByMetric:(id)arg1 timestamp:(id)arg2;
- (_Bool)_queue_shouldApplyDatum:(id)arg1 toAggregator:(id)arg2;
- (id)_queue_calculateDatumForAggregatorType:(id)arg1 currentDatum:(id)arg2 previousDatum:(id)arg3;
- (id)workoutMetricsFromDatums:(id)arg1;
- (id)_cmFitnessMachineDataFromDatums:(id)arg1 timestamp:(id)arg2;
- (void)_queue_fitnessMachineSumForType:(id)arg1 dateInterval:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_filterForFitnessMachineSamplesWithStartDate:(id)arg1 endDate:(id)arg2;
- (void)_queue_handleConfigurationChanged:(id)arg1;
- (void)_deliverBufferedMetrics;
- (double)_getDoubleFromDatum:(id)arg1 unitString:(id)arg2 defaultValue:(double)arg3;
- (long long)_getLongFromDatum:(id)arg1 unitString:(id)arg2 defaultValue:(long long)arg3;
- (void)beginCollectionForDataAggregator:(id)arg1 lastPersistedSensorDatum:(id)arg2;
- (void)dataAggregator:(id)arg1 wantsCollectionWithConfiguration:(id)arg2;
- (id)sourceForDataAggregator:(id)arg1;
- (id)identifierForDataAggregator:(id)arg1;
- (double)preferredAggregationIntervalForAggregator:(id)arg1;
- (void)unitTest_processDatumsByMetric:(id)arg1;

@end
