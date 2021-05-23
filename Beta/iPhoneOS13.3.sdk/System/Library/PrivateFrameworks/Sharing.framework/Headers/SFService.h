/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@class CUAppleIDClient, NSData, NSDictionary, NSString, NSUUID, NSXPCConnection, NSXPCListenerEndpoint;

@protocol OS_dispatch_queue;

@interface SFService : NSObject

{
    _Bool _activateCalled;
    _Bool _activateInProgress;
    _Bool _activateCompleted;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    struct NSMutableDictionary *_requestQueue;
    struct NSMutableDictionary *_sessions;
    struct LogCategory *_ucatCore;
    struct LogCategory *_ucatCrypto;
    NSXPCConnection *_xpcCnx;
    unsigned char _deviceActionType;
    _Bool _duetSync;
    _Bool _needsAWDL;
    _Bool _needsKeyboard;
    _Bool _needsSetup;
    _Bool _overrideScreenOff;
    _Bool _pairSetupDisabled;
    _Bool _hasProblem;
    _Bool _supportsAirPlayReceiver;
    _Bool _wakeDevice;
    _Bool _autoUnlockEnabled;
    _Bool _autoUnlockWatch;
    unsigned char _deviceClassCode;
    unsigned char _deviceColorCode;
    unsigned char _deviceModelCode;
    unsigned char _serviceType;
    _Bool _touchRemoteEnabled;
    _Bool _watchLocked;
    _Bool _wifiP2P;
    unsigned int _pinType;
    unsigned int _sessionFlags;
    long long _advertiseRate;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_fixedPIN;
    NSString *_identifier;
    NSString *_label;
    NSDictionary *_pairSetupACL;
    NSDictionary *_pairVerifyACL;
    NSString *_myAppleID;
    CUAppleIDClient *_myAppleIDInfoClient;
    NSString *_peerAppleID;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
    CDUnknownBlockType _showPINHandlerEx;
    CDUnknownBlockType _showPINHandler;
    CDUnknownBlockType _hidePINHandler;
    CDUnknownBlockType _receivedObjectHandler;
    CDUnknownBlockType _receivedRequestHandler;
    CDUnknownBlockType _sessionStartedHandler;
    CDUnknownBlockType _sessionEndedHandler;
    CDUnknownBlockType _sessionSecuredHandler;
    CDUnknownBlockType _errorHandler;
    CDUnknownBlockType _eventMessageHandler;
    CDUnknownBlockType _requestMessageHandler;
    NSData *_authTagOverride;
    CDUnknownBlockType _pairSetupCompletionHandler;
    CDUnknownBlockType _peerDisconnectedHandler;
    unsigned long long _problemFlags;
    CDUnknownBlockType _receivedFramePeerHandler;
    NSString *_requestSSID;
    CDUnknownBlockType _responseMessageInternalHandler;
    CDUnknownBlockType _sendFramePeerHandler;
    NSUUID *_serviceUUID;
    NSXPCListenerEndpoint *_testListenerEndpoint;
}

@property (copy, nonatomic) NSData *authTagOverride;
@property (nonatomic) _Bool autoUnlockEnabled;
@property (nonatomic) _Bool autoUnlockWatch;
@property (nonatomic) unsigned char deviceClassCode;
@property (nonatomic) unsigned char deviceColorCode;
@property (nonatomic) unsigned char deviceModelCode;
@property (copy, nonatomic) CDUnknownBlockType pairSetupCompletionHandler;
@property (copy, nonatomic) CDUnknownBlockType peerDisconnectedHandler;
@property (nonatomic) unsigned long long problemFlags;
@property (copy, nonatomic) CDUnknownBlockType receivedFramePeerHandler;
@property (copy, nonatomic) NSString *requestSSID;
@property (copy, nonatomic) CDUnknownBlockType responseMessageInternalHandler;
@property (copy, nonatomic) CDUnknownBlockType sendFramePeerHandler;
@property (nonatomic) unsigned char serviceType;
@property (copy, nonatomic) NSUUID *serviceUUID;
@property (retain, nonatomic) NSXPCListenerEndpoint *testListenerEndpoint;
@property (nonatomic) _Bool touchRemoteEnabled;
@property (nonatomic) _Bool watchLocked;
@property (nonatomic) _Bool wifiP2P;
@property (nonatomic) long long advertiseRate;
@property (nonatomic) unsigned char deviceActionType;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) _Bool duetSync;
@property (copy, nonatomic) NSString *fixedPIN;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *label;
@property (nonatomic) _Bool needsAWDL;
@property (nonatomic) _Bool needsKeyboard;
@property (nonatomic) _Bool needsSetup;
@property (nonatomic) _Bool overrideScreenOff;
@property (copy, nonatomic) NSDictionary *pairSetupACL;
@property (nonatomic) _Bool pairSetupDisabled;
@property (copy, nonatomic) NSDictionary *pairVerifyACL;
@property (nonatomic) unsigned int pinType;
@property (nonatomic) unsigned int sessionFlags;
@property (copy, nonatomic) NSString *myAppleID;
@property (retain, nonatomic) CUAppleIDClient *myAppleIDInfoClient;
@property (copy, nonatomic) NSString *peerAppleID;
@property (copy, nonatomic) CDUnknownBlockType interruptionHandler;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property (copy, nonatomic) CDUnknownBlockType showPINHandlerEx;
@property (copy, nonatomic) CDUnknownBlockType showPINHandler;
@property (copy, nonatomic) CDUnknownBlockType hidePINHandler;
@property (copy, nonatomic) CDUnknownBlockType receivedObjectHandler;
@property (copy, nonatomic) CDUnknownBlockType receivedRequestHandler;
@property (copy, nonatomic) CDUnknownBlockType sessionStartedHandler;
@property (copy, nonatomic) CDUnknownBlockType sessionEndedHandler;
@property (copy, nonatomic) CDUnknownBlockType sessionSecuredHandler;
@property (copy, nonatomic) CDUnknownBlockType errorHandler;
@property (copy, nonatomic) CDUnknownBlockType eventMessageHandler;
@property (nonatomic) _Bool hasProblem;
@property (copy, nonatomic) CDUnknownBlockType requestMessageHandler;
@property (nonatomic) _Bool supportsAirPlayReceiver;
@property (nonatomic) _Bool wakeDevice;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)invalidate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_cleanup;
- (void)_invalidated;
- (void)_interrupted;
- (void)_activated;
- (void)sendResponse:(id)arg1;
- (void)sendEvent:(id)arg1;
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_ensureXPCStarted;
- (void)serviceError:(id)arg1;
- (void)servicePeerDisconnected:(id)arg1 error:(id)arg2;
- (void)serviceReceivedEvent:(id)arg1;
- (void)serviceReceivedFrameType:(unsigned char)arg1 data:(id)arg2 peer:(id)arg3;
- (void)serviceReceivedRequest:(id)arg1;
- (void)serviceReceivedResponse:(id)arg1;
- (void)sendToPeer:(id)arg1 flags:(unsigned int)arg2 object:(id)arg3;
- (void)sendRequest:(id)arg1;
- (void)_performActivateSafeChange:(CDUnknownBlockType)arg1;
- (void)_sendToPeer:(id)arg1 type:(unsigned char)arg2 unencryptedObject:(id)arg3;
- (void)_sendToPeer:(id)arg1 type:(unsigned char)arg2 data:(id)arg3;
- (int)setEncryptionReadKey:(const char *)arg1 readKeyLen:(unsigned long long)arg2 writeKey:(const char *)arg3 writeKeyLen:(unsigned long long)arg4 peer:(id)arg5;
- (void)clearEncryptionInfoForPeer:(id)arg1;
- (void)updateWithService:(id)arg1;
- (void)sendToPeer:(id)arg1 type:(unsigned char)arg2 data:(id)arg3;
- (void)serviceSessionFailed:(id)arg1 error:(id)arg2;

@end
