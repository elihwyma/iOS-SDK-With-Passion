/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@class AFVoiceInfo, NSArray, NSXPCConnection;

@protocol AFSettingsDelegate, OS_dispatch_queue;

@interface AFSettingsConnection : NSObject

{
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_voicesQueue;
    NSArray *_voices;
    AFVoiceInfo *_selectedVoice;
    id <AFSettingsDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property (weak, nonatomic, setter=_setDelegate:) id <AFSettingsDelegate> _delegate;

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (id)_connection;
- (id)accounts;
- (void)setLanguage:(id)arg1;
- (void)fetchSupportedLanguageCodes:(CDUnknownBlockType)arg1;
- (void)setSiriDataSharingOptInStatus:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setOutputVoice:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)setOutputVoice:(id)arg1;
- (void)getSiriDataSharingOptInStatusWithCompletion:(CDUnknownBlockType)arg1;
- (void)homeOnboardingFlowInvoked:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchSupportedMultiUserLanguageCodes:(CDUnknownBlockType)arg1;
- (void)_clearConnection;
- (void)setAssistantEnabled:(_Bool)arg1;
- (void)stopAudioPlaybackRequest:(id)arg1 immediately:(_Bool)arg2;
- (void)stopAllAudioPlaybackRequests:(_Bool)arg1;
- (void)startUIRequestWithText:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)startRemoteRequest:(id)arg1 onPeer:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)deleteAccountWithIdentifier:(id)arg1;
- (void)setActiveAccountIdentifier:(id)arg1;
- (void)setDictationEnabled:(_Bool)arg1;
- (void)_setSyncNeededForReason:(id)arg1;
- (void)_clearSyncNeededForKey:(id)arg1;
- (void)_fetchPeerData:(CDUnknownBlockType)arg1;
- (void)_setSyncVerificationNeededAndFullReportNeeded:(_Bool)arg1 shouldPostNotification:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_startDeepSyncVerificationForKeys:(id)arg1;
- (void)_runServiceMaintenance;
- (void)setLanguage:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)setLanguage:(id)arg1 outputVoice:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)getOfflineDictationStatusWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateOfflineSpeechProfileWithLanguage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)createOfflineSpeechProfileWithLanguage:(id)arg1 JSONData:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setOfflineDictationProfileOverridePath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)startUIRequestWithSpeechAudioFileURL:(id)arg1;
- (void)dismissUI;
- (void)startUIMockServerRequestWithReplayFileURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getPeerIdentifiers:(CDUnknownBlockType)arg1;
- (void)startAudioPlaybackRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setSupplementalLanguageDictionary:(id)arg1 forProduct:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setSupplementalLanguages:(id)arg1 forProduct:(id)arg2 forBuildVersion:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)getSupplementalLanguagesDictionary:(CDUnknownBlockType)arg1;
- (void)getSupplementalLanguagesModificationDate:(CDUnknownBlockType)arg1;
- (void)getSupplementalLanguageDictionaryForProduct:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getSupplementalLanguagesForProduct:(id)arg1 forBuildVersion:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchEventRecordsFromAnalyticsStoreAtPath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)purgeAnalyticsStoreWithCompletion:(CDUnknownBlockType)arg1;
- (void)resetAnalyticsStoreWithCompletion:(CDUnknownBlockType)arg1;
- (void)sendMetricsToServerWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchExperimentConfigurationsWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchExperimentContextWithCompletion:(CDUnknownBlockType)arg1;
- (void)disableAndDeleteCloudSyncWithCompletion:(CDUnknownBlockType)arg1;
- (void)getDevicesWithAvailablePHSAssetsForLanguage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getDevicesWithAvailablePHSAssetsOnDeviceCheck:(CDUnknownBlockType)arg1;
- (void)getMeCard:(CDUnknownBlockType)arg1;
- (void)getStereoPartnerLastMyriadWinDate:(CDUnknownBlockType)arg1;
- (void)getStereoPairState:(CDUnknownBlockType)arg1;
- (void)setConfigOverrides:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)configOverrides:(CDUnknownBlockType)arg1;
- (void)getSiriOutputVolumeForAudioRoute:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setSiriOutputVolume:(float)arg1 forAudioRoute:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getBluetoothDeviceInfoWithAddress:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getBluetoothDeviceInfoWithUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getConnectedBluetoothDeviceInfoArrayWithCompletion:(CDUnknownBlockType)arg1;
- (void)getPairedBluetoothDeviceInfoArrayWithCompletion:(CDUnknownBlockType)arg1;
- (void)getBluetoothWirelessSplitterSessionInfoWithCompletion:(CDUnknownBlockType)arg1;
- (void)addMultiUserUser:(id)arg1 sharedId:(id)arg2 loggableSharedId:(id)arg3 enrollmentName:(id)arg4 isPrimary:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
- (void)removeMultiUserUser:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showMultiUsers:(CDUnknownBlockType)arg1;
- (void)forceMultiUserSync:(_Bool)arg1 download:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getHomeUserIdForSharedUserId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getSharedUserIdForHomeUserId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchMultiUserVoiceIdentificationSetting:(CDUnknownBlockType)arg1;
- (void)setNanoAssistantEnabled:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)setNanoDictationEnabled:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)setNanoPhraseSpotterEnabled:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)setNanoRaiseToSpeakEnabled:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)setNanoUseDeviceSpeakerForTTS:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)setNanoTTSSpeakerVolume:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)setNanoOutputVoice:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)setNanoLanguage:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)setNanoCrownActivationEnabled:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)setNanoSiriDataSharingOptInStatus:(long long)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)getSpokenNotificationTemporarilyDisabledEndDateWithCompletion:(CDUnknownBlockType)arg1;
- (void)setSpokenNotificationTemporarilyDisabledUntil:(id)arg1;
- (void)clearSpokenNotificationTemporarilyDisabledStatus;
- (void)getSpokenNotificationTemporarilyDisabledEndDateForApp:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setSpokenNotificationTemporarilyDisabledForApp:(id)arg1 until:(id)arg2;
- (void)getSpokenNotificationShouldAlwaysSpeakNotificationsWithCompletion:(CDUnknownBlockType)arg1;
- (void)setSpokenNotificationShouldAlwaysSpeakNotifications:(_Bool)arg1;
- (void)getSpokenNotificationShouldSkipTriggerlessRepliesWithCompletion:(CDUnknownBlockType)arg1;
- (void)setSpokenNotificationShouldSkipTriggerlessReplies:(_Bool)arg1;
- (void)setOpportuneSpeakingEdgeDetectorSignalOverride:(long long)arg1;
- (void)clearOpportuneSpeakingEdgeDetectorSignalOverride;
- (void)setSiriDataSharingOptInAlertPresented:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteSiriHistoryWithContext:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)setSiriDesignModeEnabled:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)siriDesignModeIsEnabled:(CDUnknownBlockType)arg1;
- (void)barrier;
- (void)setLanguage:(id)arg1 outputVoice:(id)arg2;
- (void)startObservingWirelessSplitterSession;
- (id)_settingsServiceWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)fetchAccountsWithCompletion:(CDUnknownBlockType)arg1;
- (id)_settingsService;
- (void)_setVoices:(id)arg1;
- (void)getAvailableVoicesForRecognitionLanguage:(id)arg1 includeAssetInfo:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getAvailableVoicesForLanguage:(id)arg1 includeAssetInfo:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_voices;
- (id)_filterVoices:(id)arg1 forLanguage:(id)arg2;
- (void)_updateVoicesIncludingAssetInfo:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)startUIRequestWithText:(id)arg1;
- (void)setXPCConnectionManagementQueue:(id)arg1;
- (void)saveAccount:(id)arg1 setActive:(_Bool)arg2;
- (void)setAssistantLoggingEnabled:(_Bool)arg1;
- (void)killDaemon;
- (void)shutdownSessionIfIdle;
- (void)getAvailableVoicesForRecognitionLanguage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getAvailableVoicesForSynthesisLanguage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)startUIRequest:(id)arg1;
- (void)getHorsemanSupplementalLanguageDictionary:(CDUnknownBlockType)arg1;
- (void)setHorsemanSupplementalLanguageDictionary:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getSiriOutputVolumeWithCompletion:(CDUnknownBlockType)arg1;
- (void)setSiriOutputVolume:(float)arg1 completion:(CDUnknownBlockType)arg2;
- (void)stopObservingWirelessSplitterSession;
- (void)removeMultiUserWithSharedUserID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setSiriGradingEnabled:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)siriGradingIsEnabled:(CDUnknownBlockType)arg1;
- (void)shouldSuppressSiriDataSharingOptInAlert:(CDUnknownBlockType)arg1;
- (void)deleteSiriHistoryWithCompletion:(CDUnknownBlockType)arg1;
- (void)_syncDataWithAnchorKeys:(id)arg1 forceReset:(_Bool)arg2 reason:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_getSharedCompanionInfo:(CDUnknownBlockType)arg1;
- (void)_updateMultiUserInfoForUser:(id)arg1 score:(id)arg2 companionId:(id)arg3 companionSpeechId:(id)arg4 idsIdentifier:(id)arg5 reset:(_Bool)arg6 completion:(CDUnknownBlockType)arg7;
- (void)_getSharedUserID:(CDUnknownBlockType)arg1;
- (void)_tellDelegatePartialVerificationResult:(id)arg1;
- (void)_tellDelegateServerVerificationReport:(id)arg1;

@end
