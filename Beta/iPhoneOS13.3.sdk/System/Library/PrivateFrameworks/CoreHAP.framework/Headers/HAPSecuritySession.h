/*
 Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

#import <HMFoundation/HMFObject.h>

@class HAPSecuritySessionEncryption, NSData, NSObject, NSString;

@protocol HAPSecuritySessionDelegate, HMFLocking, OS_dispatch_queue;

@interface HAPSecuritySession : HMFObject

{
    id <HMFLocking> _lock;
    unsigned long long _state;
    unsigned long long _resumeSessionID;
    NSData *_broadcastKey;
    id <HAPSecuritySessionDelegate> _delegate;
    unsigned long long _role;
    NSObject<OS_dispatch_queue> *_queue;
    struct PairingSessionPrivate *_pairingSession;
    HAPSecuritySessionEncryption *_encryption;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property unsigned long long state;
@property (nonatomic) struct PairingSessionPrivate *pairingSession;
@property (retain, nonatomic) HAPSecuritySessionEncryption *encryption;
@property (weak, readonly) id <HAPSecuritySessionDelegate> delegate;
@property (nonatomic, readonly) unsigned long long role;
@property (readonly, getter=isOpen) _Bool open;
@property (readonly, getter=isOpening) _Bool opening;
@property (nonatomic, readonly) unsigned long long resumeSessionID;
@property (readonly) NSData *broadcastKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)logCategory;

- (void)dealloc;
- (void)open;
- (void)close;
- (void)closeWithError:(id)arg1;
- (void)_handleSetupExchangeComplete;
- (id)_inputInfo;
- (void)_closeWithError:(id)arg1;
- (void)setBroadcastKey:(id)arg1;
- (id)initWithRole:(unsigned long long)arg1 resumeSessionID:(unsigned long long)arg2 delegate:(id)arg3;
- (void)receivedSetupExchangeData:(id)arg1 error:(id)arg2;
- (id)encryptData:(id)arg1 additionalAuthenticatedData:(id)arg2 error:(id *)arg3;
- (id)decryptData:(id)arg1 additionalAuthenticatedData:(id)arg2 error:(id *)arg3;
- (_Bool)_initializeSetupSession:(unsigned long long)arg1;
- (void)_notifyOpening;
- (void)_processSetupExchangeData:(id)arg1 error:(id)arg2;
- (id)_outputInfo;
- (void)setResumeSessionID:(unsigned long long)arg1;
- (id)_broadcastInfo;
- (id)_handleLocalPairingIdentityRequestWithStatus:(int *)arg1;
- (void)_notifyOpened;
- (void)reallyOpen;
- (void)_initiateClientSessionSetupExchange;
- (id)_handlePeerPairingIdentityRequestWithIdentifier:(id)arg1 status:(int *)arg2;

@end
