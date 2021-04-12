//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKitDaemon/CKDURLRequest.h>

@class CKPublicKey, NSURL;

__attribute__((visibility("hidden")))
@interface CKDSignedServerPublicKeyURLRequest : CKDURLRequest
{
    CKPublicKey *_verifiedPublicKey;
    NSURL *_plistURL;
    struct __SecPolicy _certificateTrustPolicy;
}

+ (BOOL)verifyData:(id)arg1 withSignature:(id)arg2 usingKey:(struct __SecKey )arg3;
+ (BOOL)verifyInteger:(long long)arg1 withSignature:(id)arg2 usingKey:(struct __SecKey )arg3;
+ (struct __SecTrust )createTrustEvalFromCertificateList:(id)arg1 verifiedWithPolicy:(struct __SecPolicy )arg2;
+ (id)nearestExpirationInCertificateList:(id)arg1;
+ (id)certificateListServerPlist:(id)arg1;
+ (BOOL)serverResponseIsComplete:(id)arg1;
@property(readonly, nonatomic) struct __SecPolicy certificateTrustPolicy; // @synthesize certificateTrustPolicy=_certificateTrustPolicy;
@property(readonly, nonatomic) NSURL *plistURL; // @synthesize plistURL=_plistURL;
@property(retain) CKPublicKey *verifiedPublicKey; // @synthesize verifiedPublicKey=_verifiedPublicKey;
// - (void).cxx_destruct;
- (BOOL)canVerifySignedPlistValues:(id)arg1 withKey:(struct __SecKey )arg2;
- (void)requestDidParsePlistObject:(id)arg1;
- (id)url;
- (BOOL)hasRequestBody;
- (id)httpMethod;
- (long long)partitionType;
- (long long)serverType;
- (BOOL)allowsAnonymousAccount;
- (BOOL)requiresTokenRegistration;
- (BOOL)requiresDeviceID;
- (BOOL)requiresConfiguration;
- (void)dealloc;
- (id)initWithPlistURL:(id)arg1 verifyWithPolicy:(struct __SecPolicy )arg2;

@end

