/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDURLRequest.h>

@class CKPublicKey, NSURL;

__attribute__((visibility("hidden")))
@interface CKDSignedServerPublicKeyURLRequest : CKDURLRequest

{
    CKPublicKey *_verifiedPublicKey;
    NSURL *_plistURL;
    struct __SecPolicy *_certificateTrustPolicy;
}

@property (nonatomic, readonly) NSURL *plistURL;
@property (nonatomic, readonly) struct __SecPolicy *certificateTrustPolicy;
@property (retain) CKPublicKey *verifiedPublicKey;

+ (_Bool)serverResponseIsComplete:(id)arg1;
+ (id)certificateListServerPlist:(id)arg1;
+ (struct __SecTrust *)createTrustEvalFromCertificateList:(id)arg1 verifiedWithPolicy:(struct __SecPolicy *)arg2;
+ (id)nearestExpirationInCertificateList:(id)arg1;
+ (_Bool)verifyData:(id)arg1 withSignature:(id)arg2 usingKey:(struct __SecKey *)arg3;
+ (_Bool)verifyInteger:(long long)arg1 withSignature:(id)arg2 usingKey:(struct __SecKey *)arg3;

- (void)dealloc;
- (id)url;
- (long long)partitionType;
- (id)httpMethod;
- (void)requestDidParsePlistObject:(id)arg1;
- (long long)serverType;
- (_Bool)allowsAnonymousAccount;
- (_Bool)requiresConfiguration;
- (_Bool)requiresDeviceID;
- (_Bool)requiresTokenRegistration;
- (_Bool)hasRequestBody;
- (_Bool)canVerifySignedPlistValues:(id)arg1 withKey:(struct __SecKey *)arg2;
- (id)initWithPlistURL:(id)arg1 verifyWithPolicy:(struct __SecPolicy *)arg2;

@end
