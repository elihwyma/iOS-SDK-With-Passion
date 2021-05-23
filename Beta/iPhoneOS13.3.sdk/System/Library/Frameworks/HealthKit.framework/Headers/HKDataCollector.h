/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class HKDataCollectorCollectionConfiguration, HKDevice, HKHealthStore, HKQuantityType, HKRetryableOperation, HKTaskServerProxyProvider, NSMutableArray, NSMutableDictionary, NSString, NSUUID;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface HKDataCollector : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    long long _state;
    HKDevice *_device;
    HKHealthStore *_healthStore;
    NSUUID *_identifier;
    HKTaskServerProxyProvider *_proxyProvider;
    NSString *_bundleIdentifier;
    HKRetryableOperation *_retryableOperation;
    NSUUID *_registrationUUID;
    HKDataCollectorCollectionConfiguration *_collectionConfiguration;
    double _unitTest_maxDatumAgeOverride;
    CDUnknownBlockType _unitTest_registrationCompleteHandler;
    _Bool _shouldFlushAll;
    NSMutableArray *_flushRequests;
    NSMutableArray *_pendingBatches;
    NSMutableDictionary *_unconfirmedBatchesByUUID;
    NSMutableDictionary *_unpersistedBatchesByUUID;
    NSObject<OS_dispatch_source> *_reconsiderationSource;
    _Bool _requiresRegistration;
    _Bool _invalidated;
    CDUnknownBlockType _finishCompletion;
    HKQuantityType *_quantityType;
}

@property (copy, readonly) HKQuantityType *quantityType;
@property (copy, readonly) HKDevice *device;
@property (copy, readonly) NSString *bundleIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)serverInterface;
+ (id)clientInterface;

- (id)exportedInterface;
- (void)connectionInvalidated;
- (void)connectionInterrupted;
- (id)remoteInterface;
- (void)clientRemote_synchronizeWithCompletion:(CDUnknownBlockType)arg1;
- (void)_requestRegistration;
- (_Bool)_validateDatums:(id)arg1 error:(out id *)arg2;
- (void)_queue_insertBatchForDatums:(id)arg1 device:(id)arg2 metadata:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_queue_considerSendingBatches;
- (CDUnknownBlockType)_combineCompletion:(CDUnknownBlockType)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_queue_requestRegistration;
- (void)_queue_sendBatch:(id)arg1;
- (void)_queue_considerCompletingFlushRequests;
- (void)_queue_updateReconsiderationTimer;
- (void)_queue_taskServer_insertDatums:(id)arg1 device:(id)arg2 metadata:(id)arg3 batchUUID:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)clientRemote_beginCollectionWithConfiguration:(id)arg1 lastPersistedDatum:(id)arg2 registrationUUID:(id)arg3;
- (void)clientRemote_collectionConfigurationDidChange:(id)arg1;
- (void)clientRemote_finishedPersistenceForBatch:(id)arg1 error:(id)arg2;
- (void)clientRemote_receivedBatch:(id)arg1 error:(id)arg2;
- (void)clientRemote_collectThroughDate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_datumsInDateOrder:(id)arg1 secondDatum:(id)arg2;
- (id)initWithHealthStore:(id)arg1 bundleIdentifier:(id)arg2 quantityType:(id)arg3;
- (void)insertDatums:(id)arg1 device:(id)arg2 metadata:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)finishWithCompletion:(CDUnknownBlockType)arg1;
- (void)unitTest_setMaxDatumAgeOverride:(double)arg1;
- (void)unitTest_setRegistrationCompleteHandler:(CDUnknownBlockType)arg1;
- (id)unitTest_pendingBatches;
- (id)unitTest_unconfirmedBatches;
- (id)unitTest_unpersistedBatches;

@end
