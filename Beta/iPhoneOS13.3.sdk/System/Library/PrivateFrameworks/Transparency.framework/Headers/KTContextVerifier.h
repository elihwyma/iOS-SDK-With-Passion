/*
 Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

#import <Foundation/NSObject.h>

@class KTApplicationPublicKeyStore, KTLogClient, NSString, TransparencyManagedDataStore;

@interface KTContextVerifier : NSObject

{
    KTApplicationPublicKeyStore *_applicationKeyStore;
    TransparencyManagedDataStore *_dataStore;
    NSString *_applicationID;
    KTLogClient *_logClient;
}

@property (retain) KTApplicationPublicKeyStore *applicationKeyStore;
@property (retain) TransparencyManagedDataStore *dataStore;
@property (retain) NSString *applicationID;
@property (retain) KTLogClient *logClient;

+ (_Bool)verifyServerLoggableDatas:(id)arg1 againstSyncedLoggableDatas:(id)arg2 error:(id *)arg3;
+ (void)addDeviceIdVRFOutput:(id)arg1 toLoggableDatas:(id)arg2 forDeviceId:(id)arg3;
+ (void)addClientDataVRFOutput:(id)arg1 toLoggableDatas:(id)arg2 forClientData:(id)arg3;
+ (long long)verifyMutation:(id)arg1 record:(id)arg2;
+ (_Bool)verifyReceivedWitnessesForLoggableDatas:(id)arg1 error:(id *)arg2;

- (id)initWithApplicationKeyStore:(id)arg1 dataStore:(id)arg2 applicationID:(id)arg3;
- (_Bool)verifyDeviceWitnesses:(id)arg1 requestDevices:(id)arg2 loggableDatas:(id)arg3 uriVRFOutput:(id)arg4 error:(id *)arg5;
- (_Bool)verifyUriWitness:(id)arg1 uri:(id)arg2 error:(id *)arg3;
- (_Bool)verifyResponseAccountId:(id)arg1 requestAccountId:(id)arg2 error:(id *)arg3;
- (_Bool)verifyInclusionProof:(id)arg1 mapLeaf:(id *)arg2 error:(id *)arg3;
- (void)verifyKTSMTsMerged:(id)arg1 queryResponse:(id)arg2 uri:(id)arg3 accountId:(id)arg4;
- (_Bool)verifySMTs:(id)arg1 request:(id)arg2 error:(id *)arg3;
- (_Bool)verifyDeviceWitness:(id)arg1 deviceId:(id)arg2 uriVRFOutput:(id)arg3 error:(id *)arg4;
- (_Bool)verifyClientDataWitness:(id)arg1 clientData:(id)arg2 uriVRFOutput:(id)arg3 error:(id *)arg4;
- (void)failSMTsIfOverMMD:(id)arg1 proof:(id)arg2 underlyingError:(id)arg3 errorCode:(long long)arg4;
- (void)verifyKTSMTs:(id)arg1;
- (void)reportVerifySMTFailure:(id)arg1 error:(id)arg2;
- (void)deleteSMT:(id)arg1 error:(id)arg2;
- (_Bool)verifyClientDataWitnesses:(id)arg1 clientDatas:(id)arg2 loggableDatas:(id)arg3 uriVRFOutput:(id)arg4 error:(id *)arg5;

@end
