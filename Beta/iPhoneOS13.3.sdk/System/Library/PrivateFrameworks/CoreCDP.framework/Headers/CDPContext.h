/*
 Image: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
 */

#import <Foundation/NSObject.h>

@class AKCircleRequestContext, CUMessageSession, KCAESGCMDuplexSession, NSDictionary, NSMutableArray, NSNumber, NSString;

@protocol CDPAuthProviderInternal;

@interface CDPContext : NSObject

{
    NSMutableArray *_signInMetricsStack;
    _Bool _isHSA2Account;
    _Bool _isFederatedAccount;
    _Bool _didUseSMSVerification;
    _Bool _guestMode;
    _Bool _supportsSkipSignIn;
    _Bool __useSecureBackupCachedPassphrase;
    _Bool __alwaysCreateEscrowRecord;
    _Bool __ignoreLockAssertErrors;
    _Bool _idmsRecovery;
    _Bool _idmsMasterKeyRecovery;
    NSDictionary *_authenticationResults;
    NSString *_appleID;
    NSString *_password;
    NSString *_passwordEquivToken;
    NSNumber *_dsid;
    NSString *_altDSID;
    long long _type;
    NSString *_cachedLocalSecret;
    unsigned long long _cachedLocalSecretType;
    NSString *_findMyiPhoneUUID;
    id <CDPAuthProviderInternal> __authProvider;
    KCAESGCMDuplexSession *_duplexSession;
    AKCircleRequestContext *_resumeContext;
    CUMessageSession *_sharingChannel;
    NSString *__recoveryToken;
}

@property (retain, nonatomic) id <CDPAuthProviderInternal> _authProvider;
@property (retain, nonatomic) KCAESGCMDuplexSession *duplexSession;
@property (retain, nonatomic) AKCircleRequestContext *resumeContext;
@property (retain, nonatomic) CUMessageSession *sharingChannel;
@property (nonatomic) _Bool _useSecureBackupCachedPassphrase;
@property (nonatomic) _Bool _alwaysCreateEscrowRecord;
@property (copy, nonatomic) NSString *_recoveryToken;
@property (nonatomic) _Bool _ignoreLockAssertErrors;
@property (nonatomic) _Bool idmsRecovery;
@property (nonatomic) _Bool idmsMasterKeyRecovery;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSDictionary *authenticationResults;
@property (copy, nonatomic) NSString *appleID;
@property (copy, nonatomic) NSString *password;
@property (copy, nonatomic) NSString *passwordEquivToken;
@property (copy, nonatomic) NSNumber *dsid;
@property (copy, nonatomic) NSString *altDSID;
@property (nonatomic) _Bool isHSA2Account;
@property (nonatomic) _Bool isFederatedAccount;
@property (nonatomic) _Bool didUseSMSVerification;
@property (copy, nonatomic) NSString *cachedLocalSecret;
@property (nonatomic) unsigned long long cachedLocalSecretType;
@property (nonatomic) _Bool guestMode;
@property (copy) NSString *findMyiPhoneUUID;
@property _Bool supportsSkipSignIn;

+ (_Bool)supportsSecureCoding;
+ (id)_metricsQueue;
+ (id)preflightContext:(id)arg1;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAuthenticationResults:(id)arg1;
- (id)topLevelMetric;
- (void)purgeResumeData;
- (_Bool)desiresAllRecords;
- (void)updateWithAuthenticationResults:(id)arg1;
- (void)augmentWithCredentialsFromContext:(id)arg1;
- (id)startMetricForEventName:(id)arg1;
- (void)stopMetric:(id)arg1 withAttributes:(id)arg2;
- (struct __CFData *)encodedTopLevelMetric;
- (id)cliqueConfiguration;

@end
