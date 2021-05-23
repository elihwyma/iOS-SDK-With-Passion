/*
 Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

#import <Foundation/NSObject.h>

@class KTLogClient, KTPublicKeyStore, NSMutableDictionary, TransparencyManagedDataStore;

@interface KTContextStore : NSObject

{
    NSMutableDictionary *_contexts;
    TransparencyManagedDataStore *_dataStore;
    KTPublicKeyStore *_keyStore;
    KTLogClient *_configClient;
}

@property (retain) KTPublicKeyStore *keyStore;
@property (retain) KTLogClient *configClient;
@property (retain) TransparencyManagedDataStore *dataStore;
@property (retain) NSMutableDictionary *contexts;

- (void)configure:(CDUnknownBlockType)arg1;
- (void)forcedConfigure:(_Bool)arg1 logClient:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)createContextForApplication:(id)arg1 dataStore:(id)arg2 logClient:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)contextForApplication:(id)arg1 logClient:(id)arg2 fetchState:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)configureWithClient:(id)arg1 force:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)logSharedMetrics;
- (void)runDutyCycleProcessingStepForActivity:(id)arg1 context:(id)arg2 logClient:(id)arg3;
- (void)runDutyCycleConfigurationStepForActivity:(id)arg1 logClient:(id)arg2 resumptionWorkloop:(id)arg3;
- (id)initWithDataStore:(id)arg1 keyStore:(id)arg2 configClient:(id)arg3;
- (void)configureWithClient:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)validatePeer:(id)arg1 application:(id)arg2 logClient:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)validateSelf:(id)arg1 application:(id)arg2 logClient:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)validateEnrollment:(id)arg1 application:(id)arg2 logClient:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)updateRequest:(id)arg1 serverDatas:(id)arg2 syncedDatas:(id)arg3 queryRequest:(id)arg4 queryResponse:(id)arg5 error:(id *)arg6;
- (void)clearApplicationState:(id)arg1 logClient:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (_Bool)runDutyCycleForActivity:(id)arg1 logClient:(id)arg2 resumptionWorkloop:(id)arg3;
- (id)serializeTranscripts;

@end
