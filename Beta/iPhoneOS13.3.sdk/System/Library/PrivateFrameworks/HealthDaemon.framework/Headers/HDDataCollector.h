/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDDeviceEntity, HDPrimaryProfile, HDProfile, HDSourceEntity, HKObjectType, NSString;

@protocol OS_dispatch_queue;

@interface HDDataCollector : NSObject

{
    HDPrimaryProfile *_primaryProfile;
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    HKObjectType *_observedType;
    HDDeviceEntity *_deviceEntity;
    long long _state;
    double _collectionInterval;
    long long _failureRetryCount;
    _Bool _disabled;
    HDSourceEntity *_sourceEntity;
}

@property (readonly) HDSourceEntity *sourceEntity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property _Bool disabled;

+ (id)domain;
+ (Class)sensorDatumClass;
+ (id)observedType;
+ (double)defaultCollectionInterval;
+ (id)_retrieveContextForKey:(id)arg1 domain:(id)arg2 profile:(id)arg3;
+ (id)_sensorDatumFromContext:(id)arg1;
+ (id)secondaryContextClasses;
+ (_Bool)_primaryContextExistsForDomain:(id)arg1 profile:(id)arg2;
+ (id)_lastReceivedSensorDatumForProfile:(id)arg1;

- (id)initWithProfile:(id)arg1;
- (void)_performAsync:(CDUnknownBlockType)arg1;
- (void)setCollectionInterval:(double)arg1;
- (double)collectionInterval;
- (id)deviceEntity;
- (_Bool)_persistContext:(id)arg1 forKey:(id)arg2;
- (id)_retrieveContextForKey:(id)arg1;
- (id)_sensorDatumFromContext:(id)arg1;
- (void)_queue_resetFailureRetryCounter;
- (void)_performSync:(CDUnknownBlockType)arg1;
- (_Bool)_queue_disabled;
- (void)stopPerformingUpdatesWithErrorEncountered:(_Bool)arg1;
- (void)_queue_beginStreamingIfNecessary;
- (_Bool)_queue_streaming;
- (void)_queue_transitionToStreaming;
- (void)_queue_beginStreaming;
- (void)_queue_retryFromFailure;
- (void)_queue_updateCollectionInterval:(double)arg1;
- (void)_queue_transitionToIdle;
- (void)updateHistoricalDataForcedUpdate:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_queue_shouldRetryFromFailure;
- (void)_queue_incrementFailureRetryCounter;
- (void)collectionStartedForType:(id)arg1 collectionInterval:(double)arg2;
- (void)updateCollectionInterval:(double)arg1 forType:(id)arg2;
- (void)collectionStoppedForType:(id)arg1;
- (void)updateHistoricalData;
- (void)updateHistoricalDataWithCompletion:(CDUnknownBlockType)arg1;
- (id)dataCollectorDiagnosticDescription;
- (id)initWithPrimaryProfile:(id)arg1;
- (_Bool)_persistPrimaryContext:(id)arg1;
- (_Bool)_persistSecondaryContext:(id)arg1;
- (id)_retrievePrimaryContext;
- (id)_retrieveSecondaryContext;
- (id)_contextFromSensorDatum:(id)arg1;
- (id)_contextFromDictionary:(id)arg1;
- (id)_dictionaryFromContext:(id)arg1;
- (void)_queue_receivedData;
- (id)_queue_deviceEntity;
- (void)_queue_transitionToFailure;

@end
