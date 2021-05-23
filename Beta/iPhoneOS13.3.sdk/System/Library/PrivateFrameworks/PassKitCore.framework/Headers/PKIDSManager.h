/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class IDSService, NSArray, NSHashTable, NSLock, NSMutableArray, NSMutableDictionary, NSString, PKProximityAdvertiser;

@protocol OS_dispatch_queue, PKIDSManagerDataSource;

@interface PKIDSManager : NSObject

{
    NSMutableArray *_remoteDevices;
    NSMutableArray *_paymentRequests;
    NSMutableDictionary *_completionHandlers;
    NSMutableDictionary *_thumbnailCompletionHandlers;
    PKProximityAdvertiser *_proximityAdvertiser;
    NSHashTable *_delegates;
    NSLock *_delegatesLock;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    int _requestCLTMThrottleUncapToken;
    id <PKIDSManagerDataSource> _dataSource;
    NSMutableArray *_pendingCancellations;
    NSMutableDictionary *_pendingDiscoveries;
    IDSService *_service;
    NSMutableDictionary *_recentlySeenUUIDs;
    NSObject<OS_dispatch_queue> *_internalQueue;
}

@property (retain, nonatomic) NSMutableArray *pendingCancellations;
@property (retain, nonatomic) NSMutableDictionary *pendingDiscoveries;
@property (retain, nonatomic) IDSService *service;
@property (retain, nonatomic) NSMutableDictionary *recentlySeenUUIDs;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (weak, nonatomic, readonly) NSArray *remoteDevices;
@property (nonatomic, readonly) NSArray *paymentRequests;
@property (nonatomic, readonly) NSArray *delegates;
@property (nonatomic) id <PKIDSManagerDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)addDelegate:(id)arg1;
- (void)removeDelegate:(id)arg1;
- (void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;
- (void)service:(id)arg1 devicesChanged:(id)arg2;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 hasBeenDeliveredWithContext:(id)arg4;
- (id)initWithTargetQueue:(id)arg1;
- (id)sendRemotePaymentRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)sendPaymentResult:(id)arg1 forRemotePaymentRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)sendPaymentHostUpdate:(id)arg1 forRemotePaymentRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)sendPaymentClientUpdate:(id)arg1 forRemotePaymentRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)sendPayment:(id)arg1 forRemotePaymentRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)sendPaymentStatus:(long long)arg1 forRemotePaymentRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)requestInstrumentThumbnail:(id)arg1 forRemoteDevice:(id)arg2 size:(struct CGSize)arg3 completion:(CDUnknownBlockType)arg4;
- (id)cancelRemotePaymentRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)hasRemoteDevices;
- (void)promptDetailsForVirtualCard:(id)arg1 showNotification:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithIDSService:(id)arg1;
- (void)_registerCTLMThrottleUncapNotification;
- (void)_registerListeners;
- (void)_createThumbnailCacheDirectory;
- (id)_remoteDevicesWithArchive;
- (void)_populateDevicesIfNeeded;
- (void)_unregisterCTLMThrottleUncapNotification;
- (_Bool)_queue_hasRemoteDevices;
- (void)discoverRemoteDevicesWithProximity:(_Bool)arg1;
- (_Bool)_queue_hasRegisteredAccounts;
- (void)_queue_sendDeviceDiscoveryRequestToAllDevicesWithProximity:(_Bool)arg1;
- (void)_queue_logCloudPairingState;
- (id)_queue_cancelRemotePaymentRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_queue_addThumbnailCompletionHandler:(CDUnknownBlockType)arg1 forKey:(id)arg2;
- (id)_queue_requestForIdentifier:(id)arg1;
- (void)_postCTLMThrottleUncapNotification;
- (_Bool)_queue_deviceIsRegistered:(id)arg1;
- (void)_queue_sendDiscoveryResponse:(id)arg1 toDeviceWithFromID:(id)arg2;
- (id)_preparePaymentDeviceResponseForRequestingDevice:(id)arg1 userDisabled:(_Bool)arg2;
- (void)_archiveDevicesToDisk;
- (void)_queue_removeThumbnailCompletionHandlersForKeys:(id)arg1;
- (void)_queue_sendDeviceDiscoveryRequestWithProximity:(_Bool)arg1 devices:(id)arg2;
- (void)_paymentDiscoveryResponseReceived:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)_paymentResponseReceived:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)_paymentHostUpdateReceived:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)_thumbnailResponseReceived:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)_paymentDiscoveryRequestReceived:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)_paymentRequestReceived:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)_paymentResultReceived:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)_paymentCancellationReceived:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)_paymentClientUpdateReceived:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)_paymentSetupRequestReceived:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)_thumbnailRequestReceived:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)_promptDetailsForVirtualCardRequestReceived:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (id)_fetchPaymentInstrumentsForRequestingDevice:(id)arg1;
- (void)discoverRemoteDevices;
- (id)sendSetupRequest:(id)arg1 appDisplayName:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)invalidateMessage:(id)arg1;
- (id)requestForIdentifier:(id)arg1;
- (void)deleteArchivedDevices;

@end
