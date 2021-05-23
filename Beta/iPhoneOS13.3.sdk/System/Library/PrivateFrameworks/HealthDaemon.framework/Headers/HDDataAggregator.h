/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDDataAggregatorConfiguration, HDDataCollectionManager, HKObjectType, NSLock, NSMapTable, NSString;

@interface HDDataAggregator : NSObject

{
    NSLock *_lock;
    NSMapTable *_lock_collectorRegistry;
    HDDataAggregatorConfiguration *_lock_configuration;
    _Atomic _Bool _hasStartedCollectors;
    _Bool _lock_canStartCollectors;
    HDDataCollectionManager *_dataCollectionManager;
}

@property (weak, nonatomic, readonly) HDDataCollectionManager *dataCollectionManager;
@property (copy) HDDataAggregatorConfiguration *configuration;
@property (copy, nonatomic, readonly) HKObjectType *objectType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)resume;
- (id)_keyValueDomain;
- (id)diagnosticDescription;
- (void)daemonReady:(id)arg1;
- (id)initWithDataCollectionManager:(id)arg1;
- (void)unregisterDataCollector:(id)arg1;
- (void)registerDataCollector:(id)arg1 state:(id)arg2;
- (void)dataCollector:(id)arg1 didCollectSensorDatum:(id)arg2 device:(id)arg3;
- (_Bool)persistForCollector:(id)arg1 usedDatums:(id)arg2 source:(id)arg3 device:(id)arg4 error:(id *)arg5 persistenceHandler:(CDUnknownBlockType)arg6;
- (_Bool)didPersistObjects:(id)arg1 lastDatum:(id)arg2 collector:(id)arg3 error:(id *)arg4;
- (id)allCollectors;
- (void)requestAggregationThroughDate:(id)arg1 mode:(long long)arg2 freezeSeries:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)recomputeCollectorConfiguration;
- (void)dataCollector:(id)arg1 didCollectSensorData:(id)arg2 device:(id)arg3;
- (id)configurationForCollector:(id)arg1;
- (void)dataCollector:(id)arg1 didChangeState:(id)arg2;
- (_Bool)persistObjects:(id)arg1 usedDatums:(id)arg2 collector:(id)arg3 source:(id)arg4 device:(id)arg5 error:(id *)arg6;
- (void)_considerStartingCollectors;
- (void)_startCollector:(id)arg1;

@end
