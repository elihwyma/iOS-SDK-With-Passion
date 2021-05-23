/*
 Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

#import <NSObject.h>

@class WFDatabase;

@interface VCRealmDataStore : NSObject

{
    WFDatabase *_database;
}

@property (nonatomic, readonly) WFDatabase *database;

- (id)initWithDatabase:(id)arg1;
- (void)getShareSheetWorkflowsForExtensionMatchingDictionaries:(id)arg1 hostBundleIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getNumberOfVoiceShortcutsWithAccessSpecifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getVoiceShortcutWithIdentifier:(id)arg1 accessSpecifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getVoiceShortcutWithPhrase:(id)arg1 accessSpecifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getVoiceShortcutsWithAccessSpecifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getVoiceShortcutsForAppsWithBundleIdentifiers:(id)arg1 accessSpecifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getInactiveAppsWithAccessSpecifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateVoiceShortcutWithIdentifier:(id)arg1 phrase:(id)arg2 shortcut:(id)arg3 accessSpecifier:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)deleteVoiceShortcutWithIdentifier:(id)arg1 accessSpecifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)createVoiceShortcut:(id)arg1 phrase:(id)arg2 accessSpecifier:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)validatePhrases:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getSpeakableStringsWithAccessSpecifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)isPhraseUsable:(id)arg1 inDatabase:(id)arg2 error:(id *)arg3;

@end
