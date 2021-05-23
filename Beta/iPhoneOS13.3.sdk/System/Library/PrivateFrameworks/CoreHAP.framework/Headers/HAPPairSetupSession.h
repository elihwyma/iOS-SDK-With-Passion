/*
 Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

#import <HMFoundation/HMFObject.h>

@class HMFTimer, NSData, NSMutableData, NSObject, NSString;

@protocol HAPPairSetupSessionDelegate, OS_dispatch_queue;

@interface HAPPairSetupSession : HMFObject

{
    id <HAPPairSetupSessionDelegate> _delegate;
    long long _role;
    NSObject<OS_dispatch_queue> *_clientQueue;
    unsigned long long _state;
    struct PairingSessionPrivate *_pairingSession;
    HMFTimer *_backoffTimer;
    unsigned long long _pairSetupType;
    NSData *_sessionReadKey;
    NSData *_sessionWriteKey;
    NSMutableData *_sessionReadNonce;
    NSMutableData *_sessionWriteNonce;
    NSData *_certificate;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic) unsigned long long state;
@property (nonatomic, readonly) struct PairingSessionPrivate *pairingSession;
@property (retain, nonatomic) HMFTimer *backoffTimer;
@property (nonatomic) unsigned long long pairSetupType;
@property (retain, nonatomic) NSData *sessionReadKey;
@property (retain, nonatomic) NSData *sessionWriteKey;
@property (retain, nonatomic) NSMutableData *sessionReadNonce;
@property (retain, nonatomic) NSMutableData *sessionWriteNonce;
@property (retain, nonatomic) NSData *certificate;
@property (weak, readonly) id <HAPPairSetupSessionDelegate> delegate;
@property (nonatomic, readonly) long long role;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;
+ (_Bool)isValidSetupCode:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)_invalidate;
- (void)stop;
- (void)start;
- (id)shortDescription;
- (void)timerDidFire:(id)arg1;
- (id)descriptionWithPointer:(_Bool)arg1;
- (void)stopWithError:(id)arg1;
- (void)_stopWithError:(id)arg1;
- (void)receivedSetupExchangeData:(id)arg1 error:(id)arg2;
- (id)encryptData:(id)arg1 additionalAuthenticatedData:(id)arg2 error:(id *)arg3;
- (id)decryptData:(id)arg1 additionalAuthenticatedData:(id)arg2 error:(id *)arg3;
- (void)_processSetupExchangeData:(id)arg1 error:(id)arg2;
- (id)_handleLocalPairingIdentityRequestWithStatus:(int *)arg1;
- (id)initWithRole:(long long)arg1 pairSetupType:(unsigned long long)arg2 delegate:(id)arg3;
- (void)generateSessionKeys;
- (id)getCertificate;
- (_Bool)isSecureSession;
- (_Bool)_initializeSession;
- (void)_handlePairSetupExchangeComplete;
- (void)_processSetupCode:(id)arg1 error:(id)arg2;
- (void)handleInvalidSetupCode;
- (void)handleSetupCodeRequest;
- (void)_initiateClientPairSetupExchange;
- (void)_handleBackoffExpiration;
- (void)handleBackoffRequestWithTimeout:(double)arg1;
- (_Bool)handleSavePeerRequestWithPeerIdentity:(id)arg1 error:(id *)arg2;

@end
