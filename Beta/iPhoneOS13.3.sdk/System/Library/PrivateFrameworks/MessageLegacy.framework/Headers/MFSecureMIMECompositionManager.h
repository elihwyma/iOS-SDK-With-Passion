/*
 Image: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
 */

#import <Foundation/NSObject.h>

@class MFError, MailAccount, NSLock, NSMutableDictionary, NSMutableSet, NSSet, NSString;

@protocol MFSecureMIMECompositionManagerDelegate, OS_dispatch_queue;

@interface MFSecureMIMECompositionManager : NSObject

{
    id <MFSecureMIMECompositionManagerDelegate> _delegate;
    NSLock *_lock;
    NSObject<OS_dispatch_queue> *_queue;
    MailAccount *_sendingAccount;
    NSString *_sendingAddress;
    struct __SecIdentity *_signingIdentity;
    MFError *_signingIdentityError;
    struct __SecIdentity *_encryptionIdentity;
    MFError *_encryptionIdentityError;
    NSMutableSet *_recipients;
    NSMutableDictionary *_errorsByRecipient;
    NSMutableDictionary *_certificatesByRecipient;
    int _signingPolicy;
    int _encryptionPolicy;
    int _signingStatus;
    int _encryptionStatus;
    unsigned long long _encryptionStatusSemaphore;
    unsigned long long _signingStatusSemaphore;
    _Bool _invalidated;
}

@property id <MFSecureMIMECompositionManagerDelegate> delegate;
@property (copy) NSString *sendingAddress;
@property (readonly) MailAccount *sendingAccount;
@property (readonly) int signingPolicy;
@property (readonly) int encryptionPolicy;
@property (readonly) int signingStatus;
@property (readonly) int encryptionStatus;
@property (readonly) NSSet *recipients;

+ (struct __SecIdentity *)copySigningIdentityForAccount:(id)arg1 sendingAddress:(id)arg2 error:(id *)arg3;
+ (struct __SecIdentity *)copyEncryptionIdentityForAccount:(id)arg1 sendingAddress:(id)arg2 error:(id *)arg3;
+ (_Bool)isRevokedCertificate:(struct __SecCertificate *)arg1 sendingAddress:(id)arg2;
+ (id)copyEncryptionCertificatesForAccount:(id)arg1 recipientAddress:(id)arg2 error:(id *)arg3;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)addRecipients:(id)arg1;
- (id)compositionSpecification;
- (id)initWithSendingAccount:(id)arg1 signingPolicy:(int)arg2 encryptionPolicy:(int)arg3;
- (_Bool)_updateSigningStatus_nts;
- (_Bool)_updateEncryptionStatus_nts;
- (void)_notifyDelegateEncryptionStatusDidChange:(int)arg1 certsByRecipient:(id)arg2 errorsByRecipient:(id)arg3 identity:(struct __SecIdentity *)arg4 error:(id)arg5;
- (void)_determineEncryptionStatusWithNewRecipients:(id)arg1;
- (void)_notifyDelegateSigningStatusDidChange:(int)arg1 identity:(struct __SecIdentity *)arg2 error:(id)arg3;
- (void)_determineIdentitiesWithSendingAddress:(id)arg1 forSigning:(_Bool)arg2 encryption:(_Bool)arg3;
- (void)_determineSigningStatusWithSendingAddress:(id)arg1;
- (void)_determineEncryptionStatusWithSendingAddress:(id)arg1;
- (void)_nts_setSigningIdentity:(struct __SecIdentity *)arg1 error:(id)arg2;
- (void)_nts_setEncryptionIdentity:(struct __SecIdentity *)arg1 error:(id)arg2;
- (void)_nts_copySigningIdentity:(struct __SecIdentity **)arg1 error:(id *)arg2;
- (void)_nts_copyEncryptionIdentity:(struct __SecIdentity **)arg1 error:(id *)arg2 certificatesByRecipient:(id *)arg3 errorsByRecipient:(id *)arg4;
- (_Bool)_shouldAllowSend_nts;
- (_Bool)_shouldSign_nts;
- (_Bool)_shouldEncrypt_nts;
- (id)initWithSigningPolicy:(int)arg1 encryptionPolicy:(int)arg2;
- (void)removeRecipients:(id)arg1;
- (_Bool)shouldAllowSend;
- (void)_determineRevocationStatusWithIdentity:(struct __SecIdentity *)arg1 sendingAddress:(id)arg2;

@end
