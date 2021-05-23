/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDStandardTaskServer.h>

#import <HealthDaemon/Swift-Protocol.h>

@class HDDataAggregator, HDDataCollectorState, HKDataCollectorCollectionConfiguration, HKDataCollectorTaskServerConfiguration, HKDevice, NSError, NSMutableDictionary, NSObject, NSString, NSUUID;

@protocol OS_dispatch_queue;

@interface HDClientDataCollectionTaskServer : HDStandardTaskServer <Swift>

{
    NSObject<OS_dispatch_queue> *_queue;
    HDDataCollectorState *_dataCollectorState;
    HKDevice *_device;
    NSError *_fatalError;
    HKDataCollectorTaskServerConfiguration *_configuration;
    NSUUID *_registrationUUID;
    HDDataAggregator *_aggregator;
    HKDataCollectorCollectionConfiguration *_collectionConfiguration;
    NSMutableDictionary *_lastDatumByDevice;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)taskIdentifier;
+ (Class)configurationClass;
+ (id)requiredEntitlements;
+ (_Bool)validateConfiguration:(id)arg1 client:(id)arg2 error:(id *)arg3;

- (id)exportedInterface;
- (void)connectionInvalidated;
- (id)remoteInterface;
- (void)connectionConfigured;
- (void)remote_registerWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_insertDatums:(id)arg1 device:(id)arg2 metadata:(id)arg3 batchUUID:(id)arg4 registrationUUID:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)remote_synchronizeWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;
- (void)beginCollectionForDataAggregator:(id)arg1 lastPersistedSensorDatum:(id)arg2;
- (void)dataAggregator:(id)arg1 wantsCollectionWithConfiguration:(id)arg2;
- (id)sourceForDataAggregator:(id)arg1;
- (id)identifierForDataAggregator:(id)arg1;
- (Class)sensorDatumClassForAggregator:(id)arg1;
- (void)dataAggregator:(id)arg1 didPersistDatums:(id)arg2 success:(_Bool)arg3 error:(id)arg4;
- (void)dataAggregator:(id)arg1 requestsCollectionThroughDate:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_queue_insertDatums:(id)arg1 device:(id)arg2 metadata:(id)arg3 batchUUID:(id)arg4 registrationUUID:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (id)_loggingClientProxy;
- (_Bool)_validateMetadata:(id)arg1 error:(id *)arg2;
- (void)_didFinishPersistenceForBatch:(id)arg1 error:(id)arg2;

@end
