/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class CEMCredentialSCEPDeclaration_SCEPSubjectAltName, NSArray, NSData, NSNumber, NSString;

@interface CEMCredentialSCEPDeclaration_SCEP : CEMPayloadBase

{
    NSString *_payloadURL;
    NSString *_payloadName;
    NSArray *_payloadSubject;
    NSNumber *_payloadKeysize;
    NSString *_payloadKeyType;
    NSNumber *_payloadKeyUsage;
    NSData *_payloadCAFingerprint;
    NSNumber *_payloadRetries;
    NSNumber *_payloadRetryDelay;
    CEMCredentialSCEPDeclaration_SCEPSubjectAltName *_payloadSubjectAltName;
    NSNumber *_payloadKeyIsExtractable;
    NSString *_payloadChallengeCredential;
    NSNumber *_payloadAllowAllAppsAccess;
}

@property (copy, nonatomic) NSString *payloadURL;
@property (copy, nonatomic) NSString *payloadName;
@property (copy, nonatomic) NSArray *payloadSubject;
@property (copy, nonatomic) NSNumber *payloadKeysize;
@property (copy, nonatomic) NSString *payloadKeyType;
@property (copy, nonatomic) NSNumber *payloadKeyUsage;
@property (copy, nonatomic) NSData *payloadCAFingerprint;
@property (copy, nonatomic) NSNumber *payloadRetries;
@property (copy, nonatomic) NSNumber *payloadRetryDelay;
@property (copy, nonatomic) CEMCredentialSCEPDeclaration_SCEPSubjectAltName *payloadSubjectAltName;
@property (copy, nonatomic) NSNumber *payloadKeyIsExtractable;
@property (copy, nonatomic) NSString *payloadChallengeCredential;
@property (copy, nonatomic) NSNumber *payloadAllowAllAppsAccess;

+ (id)allowedPayloadKeys;
+ (id)buildWithURL:(id)arg1 withName:(id)arg2 withSubject:(id)arg3 withKeysize:(id)arg4 withKeyType:(id)arg5 withKeyUsage:(id)arg6 withCAFingerprint:(id)arg7 withRetries:(id)arg8 withRetryDelay:(id)arg9 withSubjectAltName:(id)arg10 withKeyIsExtractable:(id)arg11 withChallengeCredential:(id)arg12 withAllowAllAppsAccess:(id)arg13;
+ (id)buildRequiredOnlyWithURL:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
