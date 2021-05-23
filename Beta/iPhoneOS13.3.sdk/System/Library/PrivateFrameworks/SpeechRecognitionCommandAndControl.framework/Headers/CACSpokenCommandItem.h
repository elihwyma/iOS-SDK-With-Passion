/*
 Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
 */

#import <SpeechRecognitionCommandAndControl/CACSpokenCommandGroup.h>

@class AXReplayableGesture, CACRecordedUserActionFlow, NSArray, NSMutableDictionary, NSString;

@interface CACSpokenCommandItem : CACSpokenCommandGroup

{
    NSMutableDictionary *_customDictionary;
    NSArray *_searchAlternates;
    NSString *_locale;
    NSString *_untranslatedDisplayString;
    NSString *_untranslatedLocale;
    id _commandInfo;
    _Bool _isEdited;
}

@property (retain, nonatomic) NSArray *searchAlternates;
@property (retain, nonatomic) NSString *customScope;
@property (retain, nonatomic) NSString *customAppName;
@property (retain, nonatomic) AXReplayableGesture *customGesture;
@property (retain, nonatomic) CACRecordedUserActionFlow *customUserActionFlow;
@property (retain, nonatomic) NSString *customTextToInsert;
@property (retain, nonatomic) NSString *customType;
@property (retain, nonatomic) NSArray *customPasteBoard;
@property (retain, nonatomic) NSString *customShortcutsWorkflowIdentifier;
@property (retain, nonatomic) NSString *locale;
@property (retain, nonatomic) NSString *untranslatedDisplayString;
@property (retain, nonatomic) NSString *untranslatedLocale;
@property (retain, nonatomic) id commandInfo;
@property (nonatomic) _Bool isEdited;
@property (nonatomic) _Bool isCollapsed;

+ (id)newCommandItemWithLocale:(id)arg1 scope:(id)arg2;

- (id)description;
- (id)copy;
- (id)initWithIdentifier:(id)arg1;
- (_Bool)isVisible;
- (_Bool)isGroup;
- (id)displayString;
- (void)setDisplayString:(id)arg1;
- (void)setIsEnabled:(_Bool)arg1;
- (void)saveToPreferences;
- (_Bool)conflictsWithItem:(id)arg1;
- (void)removeFromPreferences;
- (void)setValue:(id)arg1 forKey:(id)arg2 locale:(id)arg3;
- (id)initWithIdentifier:(id)arg1 properties:(id)arg2 locale:(id)arg3;
- (void)_reloadFromProperties:(id)arg1;
- (id)cloneWithoutCommands;
- (id)commandsArray;
- (void)setIsConfirmationRequired:(_Bool)arg1;
- (void)_updateBuiltInCommandsWithLocale:(id)arg1;
- (void)_saveKey:(id)arg1 toDictionary:(id)arg2;
- (id)dictionaryForSavingToPreferences;
- (void)_setCustomCommandStrings:(id)arg1 withLocale:(id)arg2;
- (id)_customCommandStringsWithLocale:(id)arg1;
- (id)untranslatedDisplayStringAndLocale:(id *)arg1;
- (_Bool)evaluateCommandPredicate:(id)arg1;
- (id)primaryBuiltinCommandForLocale:(id)arg1;
- (void)refreshDataFromPreferences;
- (id)valueForKey:(id)arg1 locale:(id)arg2;
- (id)sortString;

@end
