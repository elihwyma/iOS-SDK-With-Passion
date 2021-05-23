/*
 Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

#import <NSObject.h>

@class HMHomeManager, NSPersistentStoreDescription, NSString, VCCoreDataStore, VCRealmDataStore, WFDatabase;

@interface VCVoiceShortcutManager : NSObject

{
    VCCoreDataStore *_coreDataStore;
    HMHomeManager *_homeManager;
    WFDatabase *_database;
    NSPersistentStoreDescription *_storeDescription;
    VCRealmDataStore *_realmDataStore;
}

@property (nonatomic, readonly) WFDatabase *database;
@property (copy, nonatomic, readonly) NSPersistentStoreDescription *storeDescription;
@property (nonatomic, readonly) VCCoreDataStore *coreDataStore;
@property (nonatomic, readonly) VCRealmDataStore *realmDataStore;
@property (nonatomic, readonly) HMHomeManager *homeManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)updateShortcutsVocabularyWithCompletion:(CDUnknownBlockType)arg1;
- (void)getShareSheetWorkflowsForExtensionMatchingDictionaries:(id)arg1 hostBundleIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithDatabase:(id)arg1 error:(id *)arg2;
- (id)initWithDatabase:(id)arg1 storeDescription:(id)arg2 error:(id *)arg3;
- (id)coreDataStoreWithError:(id *)arg1;
- (void)migrateVoiceShortcutsToBeShortcuts;
- (void)getNumberOfVoiceShortcutsWithAccessSpecifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getVoiceShortcutWithIdentifier:(id)arg1 accessSpecifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getVoiceShortcutWithPhrase:(id)arg1 accessSpecifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getVoiceShortcutsWithAccessSpecifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getVoiceShortcutsForAppsWithBundleIdentifiers:(id)arg1 accessSpecifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getInactiveAppsWithAccessSpecifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addVoiceShortcut:(id)arg1 phrase:(id)arg2 accessSpecifier:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)updateVoiceShortcutWithIdentifier:(id)arg1 phrase:(id)arg2 shortcut:(id)arg3 accessSpecifier:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)deleteVoiceShortcutWithIdentifier:(id)arg1 accessSpecifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)validateVoiceShortcutPhrases:(id)arg1 accessSpecifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)sanitizePhrase:(id)arg1;
- (_Bool)phraseHasHomeKitConflict:(id)arg1;
- (void)setShortcutSuggestions:(id)arg1 forAppWithBundleIdentifier:(id)arg2 accessSpecifier:(id)arg3;
- (void)getShortcutSuggestionsForAppWithBundleIdentifier:(id)arg1 accessSpecifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getShortcutSuggestionsForAllAppsWithLimit:(unsigned long long)arg1 accessSpecifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)deleteStaleSuggestions;
- (void)deleteSuggestionsFromApps:(id)arg1;
- (_Bool)lsDatabaseChangedSinceLastCheck;
- (void)updateLSDatabaseAnchors;
- (id)generateSingleUseTokenForWorkflowIdentifier:(id)arg1;
- (void)handleAssistantPreferencesChangedNotification;
- (void)requestShortcutsSpotlightFullReindex;
- (id)addExtraVocabForDemoIfAppropriate:(id)arg1;
- (void)requestDataMigrationWithCompletion:(CDUnknownBlockType)arg1;

@end
