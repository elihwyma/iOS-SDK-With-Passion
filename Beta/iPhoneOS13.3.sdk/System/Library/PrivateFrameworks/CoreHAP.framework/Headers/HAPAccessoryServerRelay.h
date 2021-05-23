/*
 Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

#import <CoreHAP/HAPAccessoryServer.h>

@class HAPCharacteristic, HAPFragmentationStream, HAPRelayStream, HAPSecuritySession, HMFExponentialBackoffTimer, NSMapTable, NSMutableArray, NSOperationQueue, NSString;

@interface HAPAccessoryServerRelay : HAPAccessoryServer

{
    _Bool _securitySessionOpening;
    _Bool _discovered;
    _Bool _shouldDiscover;
    unsigned short _nextRequestTransactionIdentifier;
    NSMutableArray *_pendingRequests;
    NSMapTable *_pendingResponses;
    NSOperationQueue *_requestOperationQueue;
    NSOperationQueue *_clientOperationQueue;
    HAPFragmentationStream *_fragmentationStream;
    HAPSecuritySession *_securitySession;
    NSOperationQueue *_pairVerifyOperationQueue;
    HMFExponentialBackoffTimer *_reachabilityProbeTimer;
    unsigned long long _configurationNumber;
    HAPCharacteristic *_pairingsCharacteristic;
    HAPRelayStream *_stream;
}

@property (nonatomic, readonly) NSMutableArray *pendingRequests;
@property (nonatomic, readonly) NSMapTable *pendingResponses;
@property (nonatomic, readonly) NSOperationQueue *requestOperationQueue;
@property (nonatomic, readonly) NSOperationQueue *clientOperationQueue;
@property (nonatomic, readonly) HAPFragmentationStream *fragmentationStream;
@property (nonatomic, readonly) unsigned short nextRequestTransactionIdentifier;
@property (retain, nonatomic) HAPSecuritySession *securitySession;
@property (nonatomic, getter=isSecuritySessionOpening) _Bool securitySessionOpening;
@property (nonatomic, readonly) NSOperationQueue *pairVerifyOperationQueue;
@property (retain, nonatomic) HMFExponentialBackoffTimer *reachabilityProbeTimer;
@property (nonatomic) unsigned long long configurationNumber;
@property (nonatomic, getter=hasDiscovered) _Bool discovered;
@property (nonatomic) _Bool shouldDiscover;
@property (weak, nonatomic) HAPCharacteristic *pairingsCharacteristic;
@property (nonatomic, readonly) HAPRelayStream *stream;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)_enqueueRequest:(id)arg1;
- (long long)linkType;
- (void)timerDidFire:(id)arg1;
- (_Bool)isPaired;
- (_Bool)hasPairings;
- (void)continuePairingAfterAuthPrompt;
- (_Bool)removePairingForCurrentControllerOnQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)startPairingWithConsentRequired:(_Bool)arg1 config:(id)arg2 ownershipToken:(id)arg3;
- (void)enableEvents:(_Bool)arg1 forCharacteristics:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3 queue:(id)arg4;
- (void)discoverAccessories;
- (_Bool)tryPairingPassword:(id)arg1 error:(id *)arg2;
- (_Bool)stopPairingWithError:(id *)arg1;
- (void)readCharacteristicValues:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)writeCharacteristicValues:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)addPairing:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)removePairing:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)listPairingsWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)identifyWithCompletion:(CDUnknownBlockType)arg1;
- (void)_tearDownSessionWithError:(id)arg1;
- (void)_sendRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_cancelAllQueuedOperationsWithError:(id)arg1;
- (void)_resumeAllOperations;
- (id)_decryptData:(id)arg1 error:(id *)arg2;
- (void)_suspendAllOperations;
- (id)getLocalPairingIdentityAndAllowCreation:(_Bool)arg1 error:(id *)arg2;
- (id)securitySession:(id)arg1 didReceiveLocalPairingIdentityRequestWithError:(id *)arg2;
- (id)securitySession:(id)arg1 didReceiveRequestForPeerPairingIdentityWithIdentifier:(id)arg2 error:(id *)arg3;
- (void)securitySession:(id)arg1 didReceiveSetupExchangeData:(id)arg2;
- (void)securitySessionIsOpening:(id)arg1;
- (void)securitySessionDidOpen:(id)arg1;
- (void)securitySession:(id)arg1 didCloseWithError:(id)arg2;
- (void)_handleSecuritySessionSetupExchangeData:(id)arg1;
- (void)_establishSecuritySession;
- (void)_parseAttributeDatabase:(id)arg1 configurationNumber:(id)arg2;
- (void)_parseServicesFromPrimaryAccessory:(id)arg1;
- (void)_readCharacteristicValues:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_handleCharacteristicReadResponse:(id)arg1 characteristics:(id)arg2 error:(id)arg3 completionQueue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_writeCharacteristicValues:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_performTimedWriteValues:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_performWriteValues:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_handleCharacteristicWriteResponse:(id)arg1 characteristicWriteRequestTuples:(id)arg2 error:(id)arg3 completionQueue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_handleCharacteristicPrepareWriteResponse:(id)arg1 characteristicWriteRequestTuples:(id)arg2 prepareIdentifier:(id)arg3 error:(id)arg4 timeout:(double)arg5 completionQueue:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)_performExecuteWriteValues:(id)arg1 prepareIdentifier:(id)arg2 timeout:(double)arg3 completionQueue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_startAddPairingWithIdentifier:(id)arg1 publicKey:(id)arg2 admin:(_Bool)arg3 pairingsCharacteristic:(id)arg4 queue:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)_removePairingWithIdentifier:(id)arg1 publicKey:(id)arg2 pairingsCharacteristic:(id)arg3 queue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_listPairingWithCompletionQueue:(id)arg1 pairingsCharacteristic:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_encryptData:(id)arg1 error:(id *)arg2;
- (unsigned short)_nextTransactionIdentifier;
- (void)_handleNotificationResponse:(id)arg1;
- (void)_handleReceivedMessageData:(id)arg1 withIdentifier:(id)arg2 error:(id)arg3;
- (void)_startReachabilityProbe;
- (void)_endReachabilityProbe;
- (void)_handleFragmentedResponse:(id)arg1 transactionIdentifier:(unsigned short)arg2 error:(id)arg3;
- (void)_handleReachabilityProbeFire;
- (void)fragmentationStream:(id)arg1 didCloseWithError:(id)arg2;
- (void)fragmentationStream:(id)arg1 didReceiveData:(id)arg2 transactionIdentifier:(unsigned short)arg3 error:(id)arg4;
- (void)streamDidSuspend:(id)arg1;
- (void)streamDidResume:(id)arg1;
- (void)stream:(id)arg1 didCloseWithError:(id)arg2;
- (void)stream:(id)arg1 didFailToWriteDataWithIdentifier:(id)arg2 error:(id)arg3;
- (void)stream:(id)arg1 didReceiveData:(id)arg2 withIdentifier:(id)arg3;
- (id)initWithStream:(id)arg1 name:(id)arg2 identifier:(id)arg3 keyStore:(id)arg4;

@end
