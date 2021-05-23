/*
 Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

#import <CoreHAP/HAPAccessory.h>

@class HAPCharacteristic, HAPSecuritySession, HAPService, HMFExponentialBackoffTimer, HMFTimer, NSMutableArray, NSNumber, NSOperationQueue, NSString;

@protocol HAPKeyStore, HMFLocking;

@interface HAPTunneledAccessoryBTLE : HAPAccessory

{
    id <HMFLocking> _lock;
    _Bool _verified;
    _Bool _securitySessionOpen;
    _Bool _securitySessionOpening;
    _Bool _verifying;
    NSNumber *_stateNumber;
    id <HAPKeyStore> _keyStore;
    HAPService *_tunneledBTLEAccessoryService;
    HAPService *_pairingService;
    HAPCharacteristic *_pairVerifyCharacteristic;
    HAPCharacteristic *_pairingsCharacteristic;
    HAPCharacteristic *_advertisingCharacteristic;
    HAPSecuritySession *_securitySession;
    NSOperationQueue *_pairVerifyOperationQueue;
    NSNumber *_sessionLifetimeTimeout;
    HMFTimer *_connectionIdleTimer;
    NSOperationQueue *_clientOperationQueue;
    NSMutableArray *_pendingRequests;
    NSOperationQueue *_requestOperationQueue;
    NSMutableArray *_pendingResponses;
    HMFExponentialBackoffTimer *_verificationBackoffTimer;
}

@property (copy, nonatomic) NSNumber *stateNumber;
@property (weak, nonatomic) id <HAPKeyStore> keyStore;
@property (weak, nonatomic) HAPService *tunneledBTLEAccessoryService;
@property (weak, nonatomic) HAPService *pairingService;
@property (weak, nonatomic) HAPCharacteristic *pairVerifyCharacteristic;
@property (weak, nonatomic) HAPCharacteristic *pairingsCharacteristic;
@property (weak, nonatomic) HAPCharacteristic *advertisingCharacteristic;
@property (retain, nonatomic) HAPSecuritySession *securitySession;
@property (nonatomic, getter=isSecuritySessionOpen) _Bool securitySessionOpen;
@property (nonatomic, getter=isSecuritySessionOpening) _Bool securitySessionOpening;
@property (nonatomic, readonly) NSOperationQueue *pairVerifyOperationQueue;
@property (retain, nonatomic) NSNumber *sessionLifetimeTimeout;
@property (retain, nonatomic) HMFTimer *connectionIdleTimer;
@property (nonatomic, readonly) NSOperationQueue *clientOperationQueue;
@property (nonatomic, readonly) NSMutableArray *pendingRequests;
@property (nonatomic, readonly) NSOperationQueue *requestOperationQueue;
@property (nonatomic, readonly) NSMutableArray *pendingResponses;
@property (nonatomic, getter=isVerifying) _Bool verifying;
@property (retain, nonatomic) HMFExponentialBackoffTimer *verificationBackoffTimer;
@property (nonatomic, getter=isVerified) _Bool verified;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)shouldVerifyCharacteristic:(id)arg1;

- (void)invalidate;
- (id)uniqueIdentifier;
- (id)shortDescription;
- (unsigned long long)_outstandingRequests;
- (void)_enqueueRequest:(id)arg1;
- (void)timerDidFire:(id)arg1;
- (void)setReachable:(_Bool)arg1;
- (_Bool)mergeObject:(id)arg1;
- (_Bool)isPaired;
- (void)accessoryServer:(id)arg1 didUpdateValueForCharacteristic:(id)arg2;
- (id)initWithServer:(id)arg1 instanceID:(id)arg2 parsedServices:(id)arg3;
- (id)initWithServer:(id)arg1 instanceID:(id)arg2 parsedServices:(id)arg3 keyStore:(id)arg4;
- (void)verify;
- (void)readCharacteristicValues:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)writeCharacteristicValues:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)addPairing:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)removePairing:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)listPairingsWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)_parseServices;
- (void)_sanitizeAllTunneledCharacteristics;
- (void)_registerForTunnelCharacteristicNotifications;
- (_Bool)__isAdvertising;
- (void)_tearDownSessionWithError:(id)arg1;
- (void)_suspendConnectionIdleTimer;
- (void)_verifyServiceSignature:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_verifyCharacteristicSignature:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_sendRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_readValueForCharacteristic:(id)arg1 options:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_writeValue:(id)arg1 toCharacteristic:(id)arg2 authorizationData:(id)arg3 options:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_performTimedWriteValue:(id)arg1 toCharacteristic:(id)arg2 authorizationData:(id)arg3 options:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_performWriteValue:(id)arg1 toCharacteristic:(id)arg2 authorizationData:(id)arg3 options:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_markNotifyingCharacteristicUpdatedForCharacteristic:(id)arg1;
- (void)_performTimedWriteExecuteForCharacteristic:(id)arg1 value:(id)arg2 options:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_performTimedWritePrepareWithValue:(id)arg1 toCharacteristic:(id)arg2 authorizationData:(id)arg3 options:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_sendPairingRequestData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_cancelAllQueuedOperationsWithError:(id)arg1;
- (void)_resumeAllOperations;
- (void)_requestResponseForRequest:(id)arg1;
- (void)_reallySendRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_pendingResponseForRequest:(id)arg1;
- (void)_resumeConnectionIdleTimer;
- (id)_encryptDataAndGenerateAuthTag:(id)arg1 error:(id *)arg2;
- (void)_kickConnectionIdleTimer;
- (void)writeCharacteristicValue:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)_decryptData:(id)arg1 error:(id *)arg2;
- (void)readValueForCharacteristic:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_suspendAllOperations;
- (_Bool)_establishSecureSessionWithError:(id *)arg1;
- (_Bool)_parseTunneledBTLEAccessoryService:(id)arg1;
- (_Bool)_parsePairingService:(id)arg1;
- (void)_updateOnStateNumberChange;
- (void)_readUpdatedCharacteristics:(id)arg1 queue:(id)arg2;
- (void)_sendControlPacket:(id)arg1 forRequest:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)getLocalPairingIdentityAndAllowCreation:(_Bool)arg1 error:(id *)arg2;
- (void)_handleSecuritySession:(id)arg1 setupExchangeData:(id)arg2;
- (void)_handleConnectionIdleTimeout;
- (void)controlOutputStream:(id)arg1 didReceiveRequestToSendControlPacket:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)controlOutputStreamDidOpen:(id)arg1;
- (void)controlOutputStream:(id)arg1 didCloseWithError:(id)arg2;
- (void)controlOutputStreamDidComplete:(id)arg1;
- (id)securitySession:(id)arg1 didReceiveLocalPairingIdentityRequestWithError:(id *)arg2;
- (id)securitySession:(id)arg1 didReceiveRequestForPeerPairingIdentityWithIdentifier:(id)arg2 error:(id *)arg3;
- (void)securitySession:(id)arg1 didReceiveSetupExchangeData:(id)arg2;
- (void)securitySessionIsOpening:(id)arg1;
- (void)securitySessionDidOpen:(id)arg1;
- (void)securitySession:(id)arg1 didCloseWithError:(id)arg2;
- (void)removePairingForCurrentControllerWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_pendingRequestForCharacteristic:(id)arg1;

@end
