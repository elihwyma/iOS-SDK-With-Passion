/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <MediaRemote/MRCryptoPairingSession.h>

@class MRPasscodeCredentials, NSArray, NSData, NSMutableData, NSMutableDictionary, NSObject, NSString, _MRDeviceInfoMessageProtobuf;

@protocol OS_dispatch_queue;

@interface MRCoreUtilsPairingSession : MRCryptoPairingSession

{
    MRPasscodeCredentials *_credentials;
    struct PairingSessionPrivate *_pairingSession;
    struct {
        void *context;
        CDUnknownFunctionPointerType showSetupCode_f;
        CDUnknownFunctionPointerType hideSetupCode_f;
        CDUnknownFunctionPointerType promptForSetupCode_f;
        CDUnknownFunctionPointerType copyIdentity_f;
        CDUnknownFunctionPointerType findPeer_f;
        CDUnknownFunctionPointerType savePeer_f;
        CDUnknownFunctionPointerType resumeRequest_f;
        CDUnknownFunctionPointerType resumeResponse_f;
    } _pairingDelegate;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _hasExchangedMessage;
    unsigned int _pairingFlags;
    unsigned long long _state;
    NSData *_inputKey;
    NSMutableData *_inputNonce;
    NSData *_outputKey;
    NSMutableData *_outputNonce;
}

@property (retain, nonatomic) NSData *inputKey;
@property (retain, nonatomic) NSMutableData *inputNonce;
@property (retain, nonatomic) NSData *outputKey;
@property (retain, nonatomic) NSMutableData *outputNonce;
@property (nonatomic, readonly) _MRDeviceInfoMessageProtobuf *pairedPeerDevice;
@property (nonatomic, readonly) NSArray *pairedPeerDevices;
@property (nonatomic, readonly) NSMutableDictionary *mediaRemotePairedDevices;
@property (nonatomic, readonly) NSString *peerIdentifier;
@property (nonatomic, readonly) unsigned long long state;
@property (nonatomic, readonly) _Bool hasExchangedMessage;
@property (nonatomic) unsigned int pairingFlags;

- (void)dealloc;
- (_Bool)isValid;
- (void)open;
- (void)close;
- (void)retry;
- (_Bool)isPaired;
- (id)pairedDevices;
- (_Bool)shouldAutoRetry;
- (id)initWithRole:(unsigned long long)arg1 device:(id)arg2;
- (id)removePeer;
- (id)updatePeer;
- (id)initializePairingSession:(struct PairingSessionPrivate *)arg1;
- (_Bool)shouldAutoRetryPairingExchange:(id)arg1;
- (id)addPeer;
- (void)handlePairingExchangeData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handlePairingFailureWithStatus:(int)arg1;
- (id)encryptData:(id)arg1 withError:(id *)arg2;
- (id)decryptData:(id)arg1 withError:(id *)arg2;
- (_Bool)deleteIdentityWithError:(id *)arg1;
- (void)openInState:(unsigned long long)arg1;
- (void)_handlePairingFailureWithError:(id)arg1;
- (id)_onQueuePerformPairingExchangeWithInputData:(id)arg1 error:(id *)arg2;
- (id)_onQueueInitializePairingSessionWithState:(unsigned long long)arg1;
- (id)extendedPeerInfo;
- (id)_createPeerDeviceFromPeer:(id)arg1;
- (void *)_createDeviceFromPeer:(id)arg1;
- (void)_delegateDidEnterPasscode:(id)arg1;
- (void)_handlePairingCompleteWithError:(id)arg1;
- (void)_handleSetupExchangeComplete;
- (void)_onQueueDeriveEncryptionKeys;
- (id)_generateSetupCodeWithMaximumLength:(unsigned long long)arg1;
- (int)_displaySetupCode:(id)arg1;
- (void)_hideSetupCode;
- (int)_promptForSetupCodeWithDelay:(double)arg1;

@end
