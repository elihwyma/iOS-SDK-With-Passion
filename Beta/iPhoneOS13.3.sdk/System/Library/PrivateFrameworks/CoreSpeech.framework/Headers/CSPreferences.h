/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@interface CSPreferences : NSObject

+ (id)sharedPreferences;

- (_Bool)voiceTriggerEnabled;
- (_Bool)fileLoggingIsEnabled;
- (void)setFileLoggingIsEnabled:(_Bool)arg1;
- (_Bool)corespeechDaemonEnabled;
- (_Bool)_storeModeEnabled;
- (void)setFileLoggingLevel:(id)arg1;
- (id)fileLoggingLevel;
- (_Bool)phraseSpotterEnabled;
- (_Bool)secondPassAudioLoggingEnabled;
- (_Bool)voiceTriggerInCoreSpeech;
- (id)audioInjectionFilePath;
- (_Bool)useSiriActivationSPIForwatchOS;
- (id)assistantAudioFileLogDirectory;
- (unsigned long long)maxNumLoggingFiles;
- (id)voiceTriggerAudioLogDirectory;
- (_Bool)isAttentiveSiriAudioLoggingEnabled;
- (id)assistantLogDirectory;
- (_Bool)smartSiriVolumeSoftVolumeEnabled;
- (unsigned long long)speakerIdScoreReportingType;
- (_Bool)speakerIdiTunesAccountSigninEnabled;
- (_Bool)shouldOverwriteRemoteVADScore;
- (float)overwritingRemoteVADScore;
- (_Bool)opportuneSpeakListenerBypassEnabled;
- (_Bool)jarvisAudioLoggingEnabled;
- (_Bool)startOfSpeechAudioLoggingEnabled;
- (id)getStartOfSpeechAudioLogFilePath;
- (id)myriadHashFilePath;
- (id)baseDir;
- (_Bool)_isDirectory:(id)arg1;
- (_Bool)twoShotNotificationEnabled;
- (_Bool)speakerIdEnabled;
- (double)audioSessionActivationDelay;
- (id)myriadHashDirectory;
- (id)interstitialRelativeDirForLevel:(long long)arg1;
- (_Bool)isAttentiveSiriEnabled;
- (void)setJarvisTriggerMode:(long long)arg1;
- (long long)getJarvisTriggerMode;
- (double)remoteVoiceTriggerDelayTime;
- (double)remoteVoiceTriggerEndpointTimeoutWithDefault:(double)arg1;
- (id)interstitialAbsoluteDirForLevel:(long long)arg1;
- (_Bool)myriadFileLoggingEnabled;
- (_Bool)enableAudioInjection:(_Bool)arg1;
- (_Bool)audioInjectionEnabled;
- (void)setAudioInjectionFilePath:(id)arg1;
- (_Bool)useSiriActivationSPIForHomePod;
- (_Bool)iOSBargeInSupportEnabled;
- (void)setHearstFirstPassModelVersion:(id)arg1;
- (void)setHearstSecondPassModelVersion:(id)arg1;
- (id)fakeHearstModelPath;
- (_Bool)companionSyncVoiceTriggerUtterancesEnabled;

@end
