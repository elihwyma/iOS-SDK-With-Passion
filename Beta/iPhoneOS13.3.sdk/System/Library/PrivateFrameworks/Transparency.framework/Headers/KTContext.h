/*
 Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

#import <Foundation/NSObject.h>

@class KTApplicationPublicKeyStore, KTContextVerifier, KTLogClient, NSString, TransparencyManagedDataStore, TransparencyTranscript;

@interface KTContext : NSObject

{
    NSString *_applicationID;
    TransparencyTranscript *_transcript;
    KTApplicationPublicKeyStore *_applicationKeyStore;
    TransparencyManagedDataStore *_dataStore;
    KTLogClient *_logClient;
    KTContextVerifier *_verifier;
}

@property (retain) NSString *applicationID;
@property (retain) KTApplicationPublicKeyStore *applicationKeyStore;
@property (retain) TransparencyManagedDataStore *dataStore;
@property (retain) KTLogClient *logClient;
@property (retain) KTContextVerifier *verifier;
@property (retain) TransparencyTranscript *transcript;

- (id)initWithApplicationKeyStore:(id)arg1 dataStore:(id)arg2 logClient:(id)arg3 applicationID:(id)arg4;
- (unsigned long long)validatePeerWithAnalytics:(id)arg1 transparentData:(id *)arg2 error:(id *)arg3;
- (unsigned long long)validateSelfWithAnalytics:(id)arg1 transparentData:(id *)arg2 error:(id *)arg3;
- (unsigned long long)validateEnrollmentWithAnalytics:(id)arg1 transparentData:(id *)arg2 error:(id *)arg3;
- (_Bool)runDutyCycleForActivity:(id)arg1;
- (void)clearState:(CDUnknownBlockType)arg1;
- (unsigned long long)writeFailureForRequest:(id)arg1 proof:(id)arg2 error:(id *)arg3;
- (_Bool)ready:(id *)arg1;
- (unsigned long long)verifyDeviceWitnesses:(id)arg1 request:(id)arg2 loggableDatas:(id)arg3 uriVRFOutput:(id)arg4 error:(id *)arg5;
- (unsigned long long)handleVerifyPeerResponse:(id)arg1 request:(id)arg2 transparentData:(id *)arg3 error:(id *)arg4;
- (id)analyticsForRequestValidation:(id)arg1 initialResult:(unsigned long long)arg2 result:(unsigned long long)arg3;
- (unsigned long long)validatePeer:(id)arg1 queryResponse:(id)arg2 transparentData:(id *)arg3 error:(id *)arg4;
- (void)fetchQueryForKTRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (unsigned long long)validatePeer:(id)arg1 transparentData:(id *)arg2 error:(id *)arg3;
- (unsigned long long)handleVerifySelfResponse:(id)arg1 request:(id)arg2 transparentData:(id *)arg3 error:(id *)arg4;
- (unsigned long long)validateSelf:(id)arg1 queryResponse:(id)arg2 transparentData:(id *)arg3 error:(id *)arg4;
- (unsigned long long)validateSelf:(id)arg1 transparentData:(id *)arg2 error:(id *)arg3;
- (unsigned long long)validateEnrollment:(id)arg1 queryResponse:(id)arg2 transparentData:(id *)arg3 error:(id *)arg4;
- (unsigned long long)handleVerifyInsertResponse:(id)arg1 request:(id)arg2 transparentData:(id *)arg3 error:(id *)arg4;
- (unsigned long long)validateEnrollment:(id)arg1 transparentData:(id *)arg2 error:(id *)arg3;
- (void)logStartEvent:(id)arg1;
- (void)logFinishSuccessEvent:(id)arg1;
- (_Bool)checkDeferActivity:(id)arg1;
- (unsigned long long)handleKTRequest:(id)arg1 queryResponse:(id)arg2 error:(id *)arg3;
- (void)validateKTSMTsMerged:(id)arg1 uri:(id)arg2 uuid:(id)arg3 accountId:(id)arg4;
- (void)handleGarbageCollection:(id)arg1 error:(id *)arg2;
- (void)logFinishFailureEvent:(id)arg1 error:(id)arg2;
- (void)handleSMTsWithUnverifiedSignature:(id *)arg1;
- (void)handleURIsWithPendingSMTs:(id)arg1 error:(id *)arg2;
- (void)handlePendingQueryRequests:(id)arg1 error:(id *)arg2;
- (id)copyState;

@end
