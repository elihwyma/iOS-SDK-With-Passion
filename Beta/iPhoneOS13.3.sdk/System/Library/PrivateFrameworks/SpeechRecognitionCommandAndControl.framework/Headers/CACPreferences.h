/*
 Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableArray, NSMutableDictionary;

@interface CACPreferences : NSObject

{
    NSDictionary *_builtInCommandsTableCache;
    NSMutableDictionary *_builtInLocalizedCommandStringsByLocaleIdentifier;
    NSMutableArray *_propertyTransactions;
}

+ (id)sharedPreferences;

- (id)init;
- (id)localeIdentifier;
- (void)setLocaleIdentifier:(id)arg1;
- (_Bool)audioAndHistorySubmissionOptionIsAvailable;
- (void)setAllowAudioAndHistorySubmission:(_Bool)arg1;
- (id)propertiesForCommandIdentifier:(id)arg1;
- (id)bestLocaleIdentifier;
- (void)setProperties:(id)arg1 forCommandIdentifier:(id)arg2;
- (id)alwaysShowOverlayType;
- (id)recentCommandEntries;
- (void)setRecentCommandEntries:(id)arg1;
- (id)commandCounts;
- (void)setCommandCounts:(id)arg1;
- (id)targetApplicationCounts;
- (void)setTargetApplicationCounts:(id)arg1;
- (double)lastCommandDate;
- (_Bool)allowAudioAndHistorySubmission;
- (void)setLastCommandDate:(double)arg1;
- (id)rawCustomCommandsPreferencesDictionary;
- (id)vocabularyEntries;
- (_Bool)gridOverlayCustomColumnsEnabled;
- (_Bool)gridOverlayCustomRowsEnabled;
- (_Bool)showTextResponseUponRecognition;
- (_Bool)playSoundUponRecognition;
- (long long)userHintsFeatures;
- (id)attentionAwareAction;
- (id)builtInCommandsStringsTableForLocaleIdentifier:(id)arg1;
- (_Bool)isEnabledForCommandIdentifier:(id)arg1;
- (void)setAlwaysShowOverlayType:(id)arg1;
- (void)setCommandAndControlEnabled:(_Bool)arg1;
- (void)setSleepOnAttentionLost:(_Bool)arg1;
- (void)setWakeOnAttentionGained:(_Bool)arg1;
- (id)downloadProgressForLanguage:(id)arg1;
- (id)downloadErrors;
- (void)setDownloadProgress:(id)arg1 forLanguage:(id)arg2;
- (void)setDownloadErrors:(id)arg1;
- (id)divertedCommandsLogPath;
- (void)setDidShowOnboarding:(_Bool)arg1;
- (id)builtInCommandsTable;
- (id)propertiesForCommandIdentifier:(id)arg1 localeIdentifier:(id)arg2;
- (id)commandIdentifiersForCommandSetIdentifier:(id)arg1 localeIdentifier:(id)arg2;
- (id)availableCommandSetIdentifiers;
- (id)displayNameForCommandSetIdentifier:(id)arg1;
- (id)textDisambiguationStrategy;
- (_Bool)isConfirmationRequiredForCommandIdentifier:(id)arg1;
- (id)enabledCommandIdentifiersForCommandSetIdentifier:(id)arg1;
- (id)userHintsHistory;
- (void)setUserHintsHistory:(id)arg1;
- (void)_flushBuiltInCommandsStringsTable;
- (void)setAttentionAwareAction:(id)arg1;
- (void)removeAnyPrivateInformation;
- (void)setVocabularyEntries:(id)arg1;
- (void)removeUserCommandHistory;
- (id)_propertiesForIdentifier:(id)arg1;
- (id)_mutablePropertiesForIdentifier:(id)arg1 create:(_Bool)arg2;
- (void)setProperties:(id)arg1 forCommandIdentifier:(id)arg2 client:(_Bool)arg3;
- (void)_setProperties:(id)arg1 forIdentifier:(id)arg2 client:(_Bool)arg3;
- (void)_writeDefaultCommandSettingsIfNecessary;
- (void)_propertyTransactionSynchronize;
- (void)_propertyTransactionPostNotification:(id)arg1 identifier:(id)arg2;
- (id)_commandIdentifiersForCommandSetIdentifier:(id)arg1 localeIdentifier:(id)arg2 enabledOnly:(_Bool)arg3;
- (id)_allPropertyIdentifiers;
- (_Bool)commandAndControlIsEnabled;
- (_Bool)sleepOnAttentionLost;
- (_Bool)wakeOnAttentionGained;
- (void)setPlaySoundUponRecognition:(_Bool)arg1;
- (void)setShowTextResponseUponRecognition:(_Bool)arg1;
- (_Bool)didShowOnboarding;
- (void)setTextDisambiguationStrategy:(id)arg1;
- (void)addVocabularyEntryWithString:(id)arg1;
- (void)setUserHintsFeatures:(long long)arg1;
- (_Bool)overlayFadingEnabled;
- (void)setOverlayFadingEnabled:(_Bool)arg1;
- (double)overlayFadeDelay;
- (void)setOverlayFadeDelay:(double)arg1;
- (float)overlayFadeOpacity;
- (void)setOverlayFadeOpacity:(float)arg1;
- (void)setGridOverlayCustomColumnsEnabled:(_Bool)arg1;
- (void)setGridOverlayCustomRowsEnabled:(_Bool)arg1;
- (long long)gridOverlayCustomColumnsCount;
- (void)setGridOverlayCustomColumnsCount:(long long)arg1;
- (long long)gridOverlayCustomRowsCount;
- (void)setGridOverlayCustomRowsCount:(long long)arg1;
- (long long)gridOverlayMaxLevel;
- (void)setGridOverlayMaxLevel:(long long)arg1;
- (_Bool)gridOverlayPressOnFirstLevelEnabled;
- (void)setGridOverlayPressOnFirstLevelEnabled:(_Bool)arg1;
- (_Bool)gridOverlayMaxDensityEnabled;
- (void)setGridOverlayMaxDensityEnabled:(_Bool)arg1;
- (_Bool)gridOverlayShowsNumbersInTopLeft;
- (void)setGridOverlayShowsNumbersInTopLeft:(_Bool)arg1;
- (_Bool)allowLetterKeysAsTapCommands;
- (void)setAllowLetterKeysAsTapCommands:(_Bool)arg1;
- (id)targetApplicationProperties;
- (void)setTargetApplicationProperties:(id)arg1;
- (void)removePropertiesForCommandIdentifier:(id)arg1;
- (id)uniqueCustomCommandIdentifier;
- (void)beginPropertyTransaction;
- (void)endPropertyTransaction;
- (_Bool)hidePreferencesForCommandSetIdentifier:(id)arg1;
- (id)setOfApplicationIdentifiersUsedByCustomCommands;
- (long long)correctionCount;
- (void)setCorrectionCount:(long long)arg1;
- (long long)messageTracesSinceLastReport;
- (void)setMessageTracesSinceLastReport:(long long)arg1;

@end
