/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@protocol OS_dispatch_queue;

@interface CSUserVoiceProfileStore : NSObject

{
    unsigned long long _numberOfBaseProfileUtterancesToUpload;
    NSMutableArray *_voiceProfileArray;
    NSString *_languageCode;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain) NSMutableArray *voiceProfileArray;
@property (retain, nonatomic) NSString *languageCode;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) unsigned long long numberOfBaseProfileUtterancesToUpload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)userVoiceProfileForVoiceProfileID:(id)arg1;
- (void)CSVoiceTriggerAssetDownloadMonitor:(id)arg1 didInstallNewAsset:(_Bool)arg2;
- (id)initStore;
- (void)_loadVoiceProfilesForLocale:(id)arg1;
- (void)resyncVoiceProfilesOnboardedThroughCloud;
- (void)_retrainLiveOnOnboardedProfilesForLanguage:(id)arg1 withForceRetrain:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)_logVoiceProfileConfusionForAsset:(id)arg1 withCleanup:(_Bool)arg2;
- (id)_trainedUsersForLocale:(id)arg1;
- (id)_cleanupInvalidProfilesWithDryRun:(_Bool)arg1;
- (_Bool)_checkIfRetrainingRequiredForAsset:(id)arg1;
- (_Bool)_didReturnMultiUserNotFoundErrorCode:(id)arg1;
- (id)_deleteUserVoiceProfile:(id)arg1;
- (id)scoreSpeakerVector:(id)arg1 withVectorSize:(unsigned long long)arg2 withSatAnalyzers:(id)arg3;
- (id)evaluateScores:(id)arg1 forProfile:(id)arg2 withBaseThreshold:(unsigned long long)arg3 withImplicitThreshold:(unsigned long long)arg4 withDeltaThreshold:(unsigned long long)arg5;
- (id)_prepareImplicitUtterance:(id)arg1 withType:(id)arg2 toProfile:(id)arg3 withTriggerSource:(id)arg4 withAudioInput:(id)arg5 withMetaData:(id)arg6 withUploadFlag:(_Bool)arg7;
- (void)_updateTrainedUsersWithAction:(unsigned long long)arg1 UserVoiceProfile:(id)arg2;
- (id)_saveImplicitUtterance:(id)arg1 asUtterance:(id)arg2 withType:(id)arg3 withTriggerSource:(id)arg4 withAudioInput:(id)arg5;
- (void)_logSpeakerConfusionWithExplicitScores:(id)arg1 withImplicitScores:(id)arg2 withPurgeUtterances:(unsigned long long)arg3 forProfile:(id)arg4 forAsset:(id)arg5;
- (id)_getTopScoringProfileIdFromScores:(id)arg1;
- (id)_composeSpeakerConfusionWithScores:(id)arg1 forProfiles:(id)arg2;
- (id)_logSpeakerConfusion:(id)arg1 forProfileArray:(id)arg2 withPrependString:(id)arg3;
- (id)userVoiceProfileForSiriProfileId:(id)arg1;
- (id)_prepareVoiceProfileAtPath:(id)arg1 forImportToProfile:(id)arg2;
- (id)_importVoiceProfile:(id)arg1 forModelType:(unsigned long long)arg2 withContentsOfDirectory:(id)arg3 withAsset:(id)arg4;
- (id)_retrainVoiceProfile:(id)arg1 forModelType:(unsigned long long)arg2 withUtterances:(id)arg3 withForceRetrain:(_Bool)arg4;
- (void)_updateHomeUserId:(id)arg1 forProfileWithSiriProfileId:(id)arg2;
- (id)userVoiceProfilesForLocale:(id)arg1;
- (void)_retrainVoiceProfile:(id)arg1 withForceRetrain:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)_retrainVoiceProfile:(id)arg1 forModelType:(unsigned long long)arg2 withForceRetrain:(_Bool)arg3;
- (id)_retrainExplicitOnlyModelForVoiceProfile:(id)arg1 withForceRetrain:(_Bool)arg2;
- (void)_saveTrainedUsers:(id)arg1 forLocale:(id)arg2;
- (id)copyAudioFiles:(id)arg1 toProfile:(id)arg2 forModelType:(unsigned long long)arg3;
- (void)CSLanguageCodeUpdateMonitor:(id)arg1 didReceiveLanguageCodeChanged:(id)arg2;
- (id)userVoiceProfileForSharedSiriDebugID:(id)arg1;
- (id)cleanupInvalidCloudOnBoardedProfilesWithDryRun:(_Bool)arg1;
- (void)addImplicitUtterance:(id)arg1 toVoiceProfile:(id)arg2 withTriggerSource:(id)arg3 withAudioInput:(id)arg4 withCompletion:(CDUnknownBlockType)arg5;
- (void)logVoiceProfileConfusionWithCleanup:(_Bool)arg1;
- (void)addUserVoiceProfile:(id)arg1 fromUtteranceCache:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)deleteUserVoiceProfile:(id)arg1;
- (_Bool)checkIfVoiceProfile:(id)arg1 needsUpdatedWith:(id)arg2 withCategory:(unsigned long long)arg3;
- (void)retrainVoiceProfilesForLanguage:(id)arg1 withForceRetrain:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)_migrationAssistantForUserVoiceProfilesForLocale:(id)arg1;
- (void)addiTunesAccountForVoiceProfile:(id)arg1 withMultiUserToken:(id)arg2 withDsid:(id)arg3 withAltDsid:(id)arg4 withHomeId:(id)arg5 withHomeUserId:(id)arg6 withCompletionBlock:(CDUnknownBlockType)arg7;

@end
