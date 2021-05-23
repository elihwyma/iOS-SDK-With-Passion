/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDClientDataCollectionObservationStateMonitor, HDDataCollectionAssertion, HDHealthStoreClient, HDProfile, HKDataFlowLink, HKWorkoutConfiguration, NSLock, NSSet, NSString, NSUUID;

@interface HDWorkoutBasicDataSource : NSObject

{
    HDProfile *_profile;
    HDHealthStoreClient *_client;
    NSLock *_lock;
    HKDataFlowLink *_workoutDataFlowLink;
    NSUUID *_workoutDataProcessorUUID;
    HKWorkoutConfiguration *_workoutConfiguration;
    NSSet *_sampleTypesToCollect;
    HDDataCollectionAssertion *_collectionAssertion;
    HDClientDataCollectionObservationStateMonitor *_clientStateMonitor;
}

@property (copy, nonatomic) NSSet *sampleTypesToCollect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) HKDataFlowLink *workoutDataFlowLink;
@property (copy, readonly) NSUUID *workoutDataProcessorUUID;

- (void)dealloc;
- (double)_collectionInterval;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)samplesJournaled:(id)arg1 type:(id)arg2;
- (void)workoutDataDestination:(id)arg1 requestsDataFrom:(id)arg2 to:(id)arg3;
- (void)workoutDataDestination:(id)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)workoutDataDestination:(id)arg1 requestsFinalDataFrom:(id)arg2 to:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initWithConfiguration:(id)arg1 client:(id)arg2;
- (void)_stopCollection;
- (void)_stopObservingSampleTypes:(id)arg1;
- (void)_startObservingSampleTypes:(id)arg1;
- (_Bool)_enumerateSamplesOfType:(id)arg1 from:(id)arg2 to:(id)arg3 error:(id *)arg4 handler:(CDUnknownBlockType)arg5;
- (id)_initialMetadata;
- (void)_forwardSamples:(id)arg1;
- (void)dataCollectionObservationStateDidChangeForClient:(id)arg1;

@end
