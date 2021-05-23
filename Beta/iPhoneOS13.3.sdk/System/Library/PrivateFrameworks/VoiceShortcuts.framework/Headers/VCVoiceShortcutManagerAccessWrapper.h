/*
 Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

#import <NSObject.h>

@class NSSet, NSString, VCAccessSpecifier, VCCoreDuetListener, VCVoiceShortcutManager, WFOutOfProcessWorkflowController;

@interface VCVoiceShortcutManagerAccessWrapper : NSObject

{
    VCAccessSpecifier *_accessSpecifier;
    VCVoiceShortcutManager *_voiceShortcutManager;
    VCCoreDuetListener *_coreDuetListener;
    NSSet *_syncDataHandlers;
    WFOutOfProcessWorkflowController *_outOfProcessWorkflowController;
    CDUnknownBlockType _runShortcutCompletionHandler;
}

@property (nonatomic, readonly) VCVoiceShortcutManager *voiceShortcutManager;
@property (nonatomic, readonly) VCCoreDuetListener *coreDuetListener;
@property (copy, nonatomic, readonly) NSSet *syncDataHandlers;
@property (retain, nonatomic) WFOutOfProcessWorkflowController *outOfProcessWorkflowController;
@property (copy, nonatomic) CDUnknownBlockType runShortcutCompletionHandler;
@property (copy, nonatomic, readonly) VCAccessSpecifier *accessSpecifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)getVoiceShortcutsWithCompletion:(CDUnknownBlockType)arg1;
- (void)getVoiceShortcutWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setShortcutSuggestions:(id)arg1 forAppWithBundleIdentifier:(id)arg2;
- (void)setInteger:(long long)arg1 forKey:(id)arg2 inDomain:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)updateShortcutsVocabularyWithCompletion:(CDUnknownBlockType)arg1;
- (void)unregisterTriggerWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)refreshTriggerWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)outOfProcessWorkflowController:(id)arg1 didFinishWithError:(id)arg2 cancelled:(_Bool)arg3;
- (void)getNumberOfVoiceShortcutsWithCompletion:(CDUnknownBlockType)arg1;
- (void)getVoiceShortcutWithPhrase:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getVoiceShortcutsForAppWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addVoiceShortcut:(id)arg1 phrase:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateVoiceShortcutWithIdentifier:(id)arg1 phrase:(id)arg2 shortcut:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)deleteVoiceShortcutWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)validateVoiceShortcutPhrases:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestSyncToWatchWithForceReset:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestDataMigration:(CDUnknownBlockType)arg1;
- (void)getShortcutSuggestionsForAppWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getShortcutSuggestionsForAllAppsWithLimit:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getShareSheetWorkflowsForExtensionMatchingDictionaries:(id)arg1 hostBundleIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)generateSingleUseTokenForWorkflowIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getSiriPodcastsDatabaseURLWithCompletion:(CDUnknownBlockType)arg1;
- (void)getConfiguredTriggerDescriptionsWithCompletion:(CDUnknownBlockType)arg1;
- (void)fireTriggerWithIdentifier:(id)arg1 force:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)checkTriggerStateWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)checkTriggerStateWithKeyPath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteTriggerWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)runShortcutWithName:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)runShortcutWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)hasRunEventsInTheLast5DaysWithCompletion:(CDUnknownBlockType)arg1;
- (void)obliterateShortcuts:(CDUnknownBlockType)arg1;
- (id)initWithVoiceShortcutManager:(id)arg1 coreDuetListener:(id)arg2 accessSpecifier:(id)arg3 syncDataHandlers:(id)arg4;
- (void)describeSyncStateIncludingDeleted:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)startRunningWorkflow:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
