/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDStandardTaskServer.h>

@class HKDataFlowLink, NSLock, NSMutableDictionary, NSString, NSUUID;

@interface HDGymKitMetricsDataSource : HDStandardTaskServer

{
    HKDataFlowLink *_workoutDataFlowLink;
    NSLock *_lock;
    NSMutableDictionary *_accumulatedMetadata;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) HKDataFlowLink *workoutDataFlowLink;
@property (copy, readonly) NSUUID *workoutDataProcessorUUID;

+ (id)taskIdentifier;
+ (id)requiredEntitlements;
+ (_Bool)validateConfiguration:(id)arg1 client:(id)arg2 error:(id *)arg3;

- (void)dealloc;
- (id)exportedInterface;
- (void)connectionInvalidated;
- (id)remoteInterface;
- (void)remote_startTaskServerIfNeeded;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;
- (void)workoutDataDestination:(id)arg1 requestsDataFrom:(id)arg2 to:(id)arg3;
- (void)workoutDataDestination:(id)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)workoutDataDestination:(id)arg1 requestsFinalDataFrom:(id)arg2 to:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)metricsCollector:(id)arg1 didCollectMetrics:(id)arg2;
- (void)_stopObservingMetrics;
- (void)_startObservingMetrics;
- (id)_metadataFromMetrics:(id)arg1;

@end
