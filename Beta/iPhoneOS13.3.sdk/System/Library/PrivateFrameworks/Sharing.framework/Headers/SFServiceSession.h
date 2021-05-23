/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Sharing/SFSession.h>

@class CUPairingSession, SFService;

__attribute__((visibility("hidden")))
@interface SFServiceSession : SFSession

{
    CUPairingSession *_pairSetupSession;
    unsigned int _pairSetupXID;
    CUPairingSession *_pairVerifySession;
    unsigned long long _sendLastTicks;
    SFService *_service;
}

@property (nonatomic) unsigned long long sendLastTicks;
@property (retain, nonatomic) SFService *service;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)activate;
- (void)sendRequestWithFlags:(unsigned int)arg1 object:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (void)sendWithFlags:(unsigned int)arg1 object:(id)arg2;
- (void)sessionReceivedFrameType:(unsigned char)arg1 data:(id)arg2;
- (void)_receivedObject:(id)arg1 flags:(unsigned int)arg2;
- (id)pairingDeriveKeyForIdentifier:(id)arg1 keyLength:(unsigned long long)arg2;
- (void)_hearbeatTimer;
- (int)setEncryptionReadKey:(const char *)arg1 readKeyLen:(unsigned long long)arg2 writeKey:(const char *)arg3 writeKeyLen:(unsigned long long)arg4;
- (void)clearEncryptionInfo;
- (void)sendEncryptedObject:(id)arg1;
- (void)receivedStartRequest:(id)arg1;
- (void)pairSetup:(id)arg1 start:(_Bool)arg2;
- (void)pairVerify:(id)arg1 start:(_Bool)arg2;
- (void)_receivedRequestID:(id)arg1 object:(id)arg2 flags:(unsigned int)arg3;
- (void)_receivedResponseID:(id)arg1 object:(id)arg2 flags:(unsigned int)arg3;
- (void)_sendFrameType:(unsigned char)arg1 data:(id)arg2;
- (void)_sendRequestWithFlags:(unsigned int)arg1 object:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (void)_sendWithFlags:(unsigned int)arg1 object:(id)arg2;
- (void)_sendFrameType:(unsigned char)arg1 unencryptedObject:(id)arg2;
- (void)receivedEncryptedData:(id)arg1 type:(unsigned char)arg2;
- (void)receivedUnencryptedData:(id)arg1 type:(unsigned char)arg2;
- (int)_pairSetupCompleted:(int)arg1;
- (int)_pairVerifyCompleted:(int)arg1;
- (void)sendFrameType:(unsigned char)arg1 data:(id)arg2;
- (_Bool)pairingContainsACL:(id)arg1;

@end
