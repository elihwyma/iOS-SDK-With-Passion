/*
 Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

#import <Foundation/NSObject.h>

@interface VTPreferences : NSObject

+ (id)sharedPreferences;
+ (id)deviceCategoryStringRepresentationForCategoryType:(unsigned long long)arg1;

- (id)init;
- (void)synchronize;
- (id)_languageCode;
- (id)_localeIdentifier;
- (_Bool)voiceTriggerEnabled;
- (_Bool)isSATEnrolledForLanguageCode:(id)arg1;
- (_Bool)hasVoiceProfileIniCloudForLanguageCode:(id)arg1;
- (void)enableVoiceTriggerUponVoiceProfileSyncForLanguage:(id)arg1;
- (void)setVoiceTriggerEnabled:(_Bool)arg1;
- (id)getSATEnrollmentPath;
- (_Bool)fileLoggingIsEnabled;
- (void)setFileLoggingIsEnabled:(_Bool)arg1;
- (id)localizedTriggerPhraseForLanguageCode:(id)arg1;
- (_Bool)corespeechDaemonEnabled;
- (_Bool)_voiceTriggerEnabled;
- (_Bool)_storeModeEnabled;
- (void)_setVoiceTriggerEnabled:(_Bool)arg1;
- (void)setFileLoggingLevel:(id)arg1;
- (id)fileLoggingLevel;
- (_Bool)_isSATMarkedForMarker:(id)arg1 languageCode:(id)arg2;
- (id)_getSATEnrollmentAudioPathForLanguageCodeForLegacyVoiceProfile:(id)arg1;
- (id)_VTSATBasePath;
- (id)_VTSATCachePath;
- (_Bool)_isLocalVoiceTriggerAvailable;
- (id)devicesWithVoiceProfileIniCloudForLanguage:(id)arg1;
- (_Bool)hasExplicitlySetVoiceTriggerEnabled;
- (_Bool)phraseSpotterEnabled;
- (void)setPhraseSpotterEnabled:(_Bool)arg1;
- (_Bool)voiceTriggerEnabledWhenChargerDisconnected;
- (void)setVoiceTriggerEnabledWhenChargerDisconnected:(_Bool)arg1;
- (_Bool)voiceTriggerEnabledWhenChargerConnected;
- (void)setVoiceTriggerEnabledWhenChargerConnected:(_Bool)arg1;
- (id)localizedTriggerPhrase;
- (_Bool)secondPassAudioLoggingEnabled;
- (void)setSecondPassAudioLoggingEnabled:(_Bool)arg1;
- (_Bool)onetimeRemoteAssetQueryRanSuccessfully;
- (void)setOnetimeRemoteAssetQueryRanSuccessfully:(_Bool)arg1;
- (_Bool)isSATEnrollmentMigratedForLanguageCode:(id)arg1;
- (void)discardSATEnrollmentForLanguageCode:(id)arg1;
- (void)discardAllSATEnrollment;
- (void)markSATEnrollmentSuccessForLanguageCode:(id)arg1;
- (id)getMD5HashForSATEnrollmentAudioForLanguageCode:(id)arg1;
- (_Bool)voiceTriggerInCoreSpeech;
- (_Bool)gestureSubscriptionEnabled;
- (_Bool)isVoiceTriggerAvailable;
- (_Bool)isRemoteVoiceTriggerAvailable;
- (_Bool)isSATAvailable;
- (id)audioInjectionFilePath;
- (_Bool)useSiriActivationSPIForiOS;
- (_Bool)useSiriActivationSPIForwatchOS;

@end
