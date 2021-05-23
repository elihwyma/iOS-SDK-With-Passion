/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSDictionary, NSString;

@protocol OS_dispatch_queue;

@interface MCProfile : NSObject

{
    int _trustQueueTrustLevel;
    _Bool _trustQueueTrustHasBeenEvaluated;
    NSObject<OS_dispatch_queue> *_trustEvaluationQueue;
    NSString *_signerQueueSignerSummary;
    NSArray *_signerQueueSignerCertificates;
    NSObject<OS_dispatch_queue> *_signerEvaluationQueue;
    _Bool _encrypted;
    _Bool _isLocked;
    _Bool _needsReboot;
    _Bool _isStub;
    _Bool _mustInstallNonInteractively;
    NSString *_profileDescription;
    NSString *_displayName;
    NSString *_identifier;
    NSString *_UUID;
    NSString *_organization;
    long long _version;
    NSDate *_installDate;
    NSDate *_expiryDate;
    unsigned long long _targetDeviceType;
    NSString *_removalPasscode;
    NSString *_productVersion;
    NSString *_productBuildVersion;
    NSDate *_removalDate;
    NSDictionary *_installOptions;
    NSString *_localizedConsentText;
}

@property (retain, nonatomic, readonly) NSString *stubFileName;
@property (retain, nonatomic, readonly) NSString *profileIDHashFileName;
@property (retain, nonatomic, readonly) NSString *profileDataFileName;
@property (retain, nonatomic, readonly) NSString *friendlyName;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic, readonly) NSString *profileDescription;
@property (retain, nonatomic, readonly) NSString *identifier;
@property (retain, nonatomic, readonly) NSString *UUID;
@property (retain, nonatomic, readonly) NSString *organization;
@property (nonatomic, readonly) long long version;
@property (retain, nonatomic) NSDate *installDate;
@property (retain, nonatomic) NSDictionary *installOptions;
@property (nonatomic) _Bool mustInstallNonInteractively;
@property (nonatomic, getter=isEncrypted) _Bool encrypted;
@property (nonatomic, readonly) _Bool isSigned;
@property (nonatomic, readonly) int trustLevel;
@property (nonatomic, readonly) NSString *signerSummary;
@property (nonatomic, readonly) struct __SecCertificate *signerCertificate;
@property (retain, nonatomic) NSArray *signerCertificates;
@property (nonatomic, readonly) _Bool isStub;
@property (retain, nonatomic, readonly) NSString *productBuildVersion;
@property (retain, nonatomic, readonly) NSString *productVersion;
@property (nonatomic, getter=isLocked) _Bool locked;
@property (retain, nonatomic) NSString *removalPasscode;
@property (nonatomic, readonly) _Bool needsReboot;
@property (nonatomic, readonly) long long installType;
@property (nonatomic, readonly) _Bool isInstalledForSystem;
@property (nonatomic, readonly) _Bool isInstalledForUser;
@property (nonatomic, readonly) _Bool shouldHaveFullSSLTrust;
@property (retain, nonatomic, readonly) NSArray *payloads;
@property (retain, nonatomic, readonly) NSArray *managedPayloads;
@property (retain, nonatomic, readonly) NSArray *localizedPayloadSummaryByType;
@property (retain, nonatomic, readonly) NSArray *localizedManagedPayloadSummaryByType;
@property (retain, nonatomic, readonly) NSDate *earliestCertificateExpiryDate;
@property (retain, nonatomic, readonly) NSDate *expiryDate;
@property (nonatomic, readonly) unsigned long long targetDeviceType;
@property (nonatomic, readonly) _Bool isManagedByProfileService;
@property (retain, nonatomic, readonly) NSArray *installationWarnings;
@property (nonatomic, readonly) NSString *localizedConsentText;
@property (nonatomic, readonly) NSDate *removalDate;
@property (nonatomic, readonly) _Bool isManagedByMDM;

+ (id)badFieldTypeErrorWithField:(id)arg1;
+ (id)removeRequiredObjectInDictionary:(id)arg1 key:(id)arg2 type:(Class)arg3 errorDomain:(id)arg4 missingDataCode:(long long)arg5 missingDataErrorString:(id)arg6 invalidDataCode:(long long)arg7 invalidDataErrorString:(id)arg8 outError:(id *)arg9;
+ (id)removeOptionalObjectInDictionary:(id)arg1 key:(id)arg2 type:(Class)arg3 errorDomain:(id)arg4 invalidDataCode:(long long)arg5 invalidDataErrorString:(id)arg6 outError:(id *)arg7;
+ (id)profileWithData:(id)arg1 outError:(id *)arg2;
+ (id)removeRequiredNonZeroLengthStringInDictionary:(id)arg1 key:(id)arg2 errorDomain:(id)arg3 missingDataCode:(long long)arg4 missingDataErrorString:(id)arg5 invalidDataCode:(long long)arg6 invalidDataErrorString:(id)arg7 outError:(id *)arg8;
+ (id)removeOptionalNonZeroLengthStringInDictionary:(id)arg1 key:(id)arg2 errorDomain:(id)arg3 invalidDataCode:(long long)arg4 invalidDataErrorString:(id)arg5 outError:(id *)arg6;
+ (id)profileWithDictionary:(id)arg1 options:(id)arg2 signerCerts:(id)arg3 fileName:(id)arg4 allowEmptyPayload:(_Bool)arg5 outError:(id *)arg6;
+ (int)evaluateTrustOfCertificateChain:(id)arg1 signatureVersion:(id)arg2 outIsAllowedToWriteDefaults:(_Bool *)arg3;
+ (_Bool)checkString:(id)arg1 isOneOfStrings:(id)arg2 key:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5 errorString:(id)arg6 outError:(id *)arg7;
+ (id)stringForDeviceType:(unsigned long long)arg1;
+ (int)evaluateTrustOfCertificateChain:(id)arg1 signatureVersion:(id)arg2 outIsAllowedToInstallUnsupportedPayloads:(_Bool *)arg3 outIsAllowedToWriteDefaults:(_Bool *)arg4 outIsAllowedToInstallSupervisedRestrictionsOnUnsupervisedDevices:(_Bool *)arg5;
+ (id)missingFieldErrorWithField:(id)arg1;
+ (int)evaluateTrustOfCertificateChain:(id)arg1 signatureVersion:(id)arg2;
+ (id)signerSummaryOfCertificate:(struct __SecCertificate *)arg1;
+ (id)profileWithData:(id)arg1 options:(id)arg2 fileName:(id)arg3 allowEmptyPayload:(_Bool)arg4 outError:(id *)arg5;
+ (id)profileWithData:(id)arg1 fileName:(id)arg2 outError:(id *)arg3;
+ (id)_malformedProfileError;
+ (id)profileDictionaryFromProfileData:(id)arg1 outSignerCerts:(id *)arg2 outError:(id *)arg3;
+ (id)dataFromCMSEncodedData:(id)arg1 outSignerCertificates:(id *)arg2;
+ (int)evaluateTrustOfCertificateChain:(id)arg1 signatureVersion:(id)arg2 outIsAllowedToInstallUnsupportedPayloads:(_Bool *)arg3 outIsAllowedToWriteDefaults:(_Bool *)arg4;
+ (int)evaluateTrust:(struct __SecTrust *)arg1;
+ (id)newProfileSignatureVersion;
+ (id)profileWithData:(id)arg1 fileName:(id)arg2 allowEmptyPayload:(_Bool)arg3 outError:(id *)arg4;
+ (id)profileWithData:(id)arg1 options:(id)arg2 outError:(id *)arg3;

- (id)description;
- (id)stubDictionary;
- (id)payloadsWithClass:(Class)arg1;
- (_Bool)isUserEnrollmentProfile;
- (struct __SecCertificate *)copyCertificateWithPersistentID:(id)arg1;
- (id)payloadWithUUID:(id)arg1;
- (struct __SecCertificate *)copyCertificateFromPayloadWithUUID:(id)arg1;
- (id)initWithDictionary:(id)arg1 signerCerts:(id)arg2 allowEmptyPayload:(_Bool)arg3 outError:(id *)arg4;
- (id)malformedProfileErrorWithError:(id)arg1;
- (id)installationWarningsIncludeUnsignedProfileWarning:(_Bool)arg1;
- (id)subjectSummaryFromCertificatePayloadWithUUID:(id)arg1;
- (id)subjectSummaryFromCertificateWithPersistentID:(id)arg1;
- (void)replacePayloadWithUUID:(id)arg1 withPayload:(id)arg2;
- (id)signatureVersion;
- (_Bool)containsPayloadOfClass:(Class)arg1;
- (_Bool)isProfileUIInstallationEffectivelyAllowed;
- (void)evaluateSignerTrust;
- (_Bool)doesSigningAllowReplacementWithProfile:(id)arg1 useOriginalCheck:(_Bool)arg2;
- (void)evaluateSignerTrustAsynchronouslyWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)doesSigningAllowReplacementWithProfile:(id)arg1;
- (_Bool)mayInstallWithOptions:(id)arg1 hasInteractionClient:(_Bool)arg2 outError:(id *)arg3;
- (id)restrictionsWithHeuristicsAppliedOutError:(id *)arg1;
- (id)appAccessibilityParameters;
- (_Bool)writeStubToPath:(id)arg1;
- (_Bool)writeStubToDirectory:(id)arg1;
- (_Bool)containsAnyPayloadOfClasses:(id)arg1;
- (_Bool)containsOnlyPayloadsOfClasses:(id)arg1;
- (unsigned long long)countOfPayloadsOfClass:(Class)arg1;

@end
