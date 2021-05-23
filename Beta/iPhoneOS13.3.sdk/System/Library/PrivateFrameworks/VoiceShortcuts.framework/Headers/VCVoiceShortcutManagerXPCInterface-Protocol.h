/*
 Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

#import <VoiceShortcuts/Swift-Protocol.h>

@protocol VCVoiceShortcutManagerXPCInterface <Swift>

- (unsigned short)getVoiceShortcutsWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)getVoiceShortcutWithIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)setShortcutSuggestions:forAppWithBundleIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)setInteger:forKey:inDomain:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)updateShortcutsVocabularyWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)unregisterTriggerWithIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)refreshTriggerWithIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)getNumberOfVoiceShortcutsWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)getVoiceShortcutWithPhrase:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)getVoiceShortcutsForAppWithBundleIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)addVoiceShortcut:phrase:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)updateVoiceShortcutWithIdentifier:phrase:shortcut:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)deleteVoiceShortcutWithIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)validateVoiceShortcutPhrases:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)requestSyncToWatchWithForceReset:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)requestDataMigration: /* Error: Ran out of types for this method. */;
- (unsigned short)getShortcutSuggestionsForAppWithBundleIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)getShortcutSuggestionsForAllAppsWithLimit:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)getShareSheetWorkflowsForExtensionMatchingDictionaries:hostBundleIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)generateSingleUseTokenForWorkflowIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)getSiriPodcastsDatabaseURLWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)getConfiguredTriggerDescriptionsWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)fireTriggerWithIdentifier:force:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)checkTriggerStateWithIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)checkTriggerStateWithKeyPath:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)deleteTriggerWithIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)runShortcutWithName:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)runShortcutWithIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)hasRunEventsInTheLast5DaysWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)obliterateShortcuts: /* Error: Ran out of types for this method. */;

@end
