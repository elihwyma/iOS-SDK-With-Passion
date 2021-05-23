/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@class ICDelegationServiceSecuritySettings, NSData, NSMutableArray, NSMutableData;

@protocol ICDelegationServicePairingSessionDelegate, OS_dispatch_queue;

@interface ICDelegationServicePairingSession : NSObject

{
    NSObject<OS_dispatch_queue> *_accessSerialQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSMutableArray *_existingPairingCompletionHandlers;
    NSData *_inputKey;
    NSMutableData *_inputNonce;
    NSData *_outputKey;
    NSMutableData *_outputNonce;
    struct PairingSessionPrivate *_pairingSession;
    long long _state;
    id <ICDelegationServicePairingSessionDelegate> _delegate;
    long long _role;
    ICDelegationServiceSecuritySettings *_securitySettings;
}

@property (weak, nonatomic) id <ICDelegationServicePairingSessionDelegate> delegate;
@property (nonatomic, readonly) long long role;
@property (nonatomic, readonly) ICDelegationServiceSecuritySettings *securitySettings;

- (void)dealloc;
- (void)_receivedData:(id)arg1;
- (void)receievedData:(id)arg1;
- (void)getDecryptedDataForEncryptedData:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)initWithRole:(long long)arg1 securitySettings:(id)arg2;
- (void)prepareEncryptedSessionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getEncryptedDataForData:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_handlePairingSessionCompletionWithError:(id)arg1;
- (id)_encryptedDataForData:(id)arg1;
- (_Bool)_deriveEncryptionKeysReturningError:(id *)arg1;
- (void)_sendData:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;

@end
