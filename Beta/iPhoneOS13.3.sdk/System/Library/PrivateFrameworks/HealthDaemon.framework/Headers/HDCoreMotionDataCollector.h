/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

#import <HealthDaemon/Swift-Protocol.h>

@class HDDataCollectorMultiplexer, HDDataCollectorState, HDProfile, NSMutableDictionary, NSSet, NSString;

@protocol HDCoreMotionDataSource, OS_dispatch_queue;

@interface HDCoreMotionDataCollector : NSObject <Swift>

{
    NSSet *_quantityTypes;
    HDDataCollectorMultiplexer *_multiplexer;
    NSMutableDictionary *_lastCMDatumByType;
    id <HDCoreMotionDataSource> _dataSource;
    HDDataCollectorState *_state;
    long long _errorCount;
    NSObject<OS_dispatch_queue> *_queue;
    HDProfile *_profile;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic, readonly) HDProfile *profile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)persistentIdentifier;
- (id)initWithProfile:(id)arg1;
- (void)beginCollectionForDataAggregator:(id)arg1 lastPersistedSensorDatum:(id)arg2;
- (void)dataAggregator:(id)arg1 wantsCollectionWithConfiguration:(id)arg2;
- (id)sourceForDataAggregator:(id)arg1;
- (id)identifierForDataAggregator:(id)arg1;
- (void)registerWithAggregators;
- (Class)sensorDatumClassForAggregator:(id)arg1;
- (Class)coreMotionDatumClass;
- (id)collectedTypes;
- (id)queue_newDataSource;
- (double)queue_differenceFromDatum:(id)arg1 toDatum:(id)arg2 type:(id)arg3;
- (void)_accessToFitnessDataDidChange:(id)arg1;
- (unsigned long long)queue_targetCollectionTypeForRequestedCollectionType:(unsigned long long)arg1;
- (id)_queue_diagnosticDescription;
- (void)_queue_beginUpdatesWithTargetCollectionType:(unsigned long long)arg1;
- (void)_queue_updateCollectionType:(unsigned long long)arg1;
- (id)coreMotionDatumFromSensorDatum:(id)arg1;
- (void)_queue_forwardCoreMotionData:(id)arg1 forType:(id)arg2;
- (void)_queue_forwardCoreMotionData:(id)arg1;
- (void)queue_recomputeCurrentState;
- (id)_migrateDataCollectionContextForType:(id)arg1 error:(id *)arg2;
- (id)_queue_lastPersistedSensorDatumForType:(id)arg1;
- (void)_queue_populateLastDatumDictionary;
- (void)didReceiveCoreMotionData:(id)arg1 startingDatum:(id)arg2 error:(id)arg3;

@end
