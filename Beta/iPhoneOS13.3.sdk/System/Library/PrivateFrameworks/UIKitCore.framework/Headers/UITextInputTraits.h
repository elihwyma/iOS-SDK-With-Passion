/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSIndexSet, NSString, UIColor, UIImage, UIInputContextHistory, UITextInputPasswordRules;

@interface UITextInputTraits : NSObject <Swift>

{
    long long autocapitalizationType;
    long long autocorrectionType;
    long long spellCheckingType;
    unsigned int keyboardType:8;
    unsigned int keyboardAppearance:8;
    long long returnKeyType;
    _Bool enablesReturnKeyAutomatically;
    _Bool secureTextEntry;
    _Bool devicePasscodeEntry;
    NSString *textContentType;
    UITextInputPasswordRules *passwordRules;
    long long smartInsertDeleteType;
    long long smartQuotesType;
    long long smartDashesType;
    struct __CFCharacterSet *textTrimmingSet;
    UIColor *insertionPointColor;
    UIColor *selectionBarColor;
    UIColor *selectionHighlightColor;
    UIImage *selectionDragDotImage;
    UIColor *underlineColorForTextAlternatives;
    UIColor *underlineColorForSpelling;
    unsigned long long insertionPointWidth;
    int textLoupeVisibility;
    int textSelectionBehavior;
    id textSuggestionDelegate;
    _Bool isSingleLineDocument;
    _Bool contentsIsSingleValue;
    _Bool acceptsEmoji;
    _Bool acceptsDictationSearchResults;
    _Bool useAutomaticEndpointing;
    _Bool showDictationButton;
    _Bool forceEnableDictation;
    _Bool forceDisableDictation;
    _Bool forceDefaultDictationInfo;
    _Bool returnKeyGoesToNextResponder;
    _Bool acceptsFloatingKeyboard;
    _Bool forceFloatingKeyboard;
    struct UIEdgeInsets floatingKeyboardEdgeInsets;
    _Bool acceptsSplitKeyboard;
    _Bool displaySecureTextUsingPlainText;
    _Bool learnsCorrections;
    int emptyContentReturnKeyType;
    int shortcutConversionType;
    _Bool suppressReturnKeyStyling;
    _Bool useInterfaceLanguageForLocalization;
    _Bool deferBecomingResponder;
    _Bool enablesReturnKeyOnNonWhiteSpaceContent;
    NSString *autocorrectionContext;
    NSString *responseContext;
    _Bool disablePrediction;
    _Bool disableInputBars;
    _Bool isCarPlayIdiom;
    NSString *recentInputIdentifier;
    struct _NSRange validTextRange;
    long long textScriptType;
    UIInputContextHistory *inputContextHistory;
    _Bool manageRecentInputs;
    _Bool hasDefaultContents;
    _Bool acceptsPayloads;
    _Bool displaySecureEditsUsingPlainText;
    _Bool hidePrediction;
    _Bool loadKeyboardsForSiriLanguage;
    NSIndexSet *PINEntrySeparatorIndexes;
    long long forceDictationKeyboardType;
}

@property (copy, nonatomic) NSString *recentInputIdentifier;
@property (nonatomic) _Bool manageRecentInputs;
@property (nonatomic) struct _NSRange validTextRange;
@property (copy, nonatomic) NSIndexSet *PINEntrySeparatorIndexes;
@property (nonatomic, readonly) long long dictationKeyboardType;
@property (nonatomic, readonly) long long dictationInfoKeyboardType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) long long autocapitalizationType;
@property (nonatomic) long long autocorrectionType;
@property (nonatomic) long long spellCheckingType;
@property (nonatomic) long long smartQuotesType;
@property (nonatomic) long long smartDashesType;
@property (nonatomic) long long smartInsertDeleteType;
@property (nonatomic) long long keyboardType;
@property (nonatomic) long long keyboardAppearance;
@property (nonatomic) long long returnKeyType;
@property (nonatomic) _Bool enablesReturnKeyAutomatically;
@property (nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry;
@property (copy, nonatomic) NSString *textContentType;
@property (copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property (nonatomic) struct __CFCharacterSet *textTrimmingSet;
@property (retain, nonatomic) UIColor *insertionPointColor;
@property (retain, nonatomic) UIColor *selectionBarColor;
@property (retain, nonatomic) UIColor *selectionHighlightColor;
@property (retain, nonatomic) UIImage *selectionDragDotImage;
@property (retain, nonatomic) UIColor *underlineColorForTextAlternatives;
@property (retain, nonatomic) UIColor *underlineColorForSpelling;
@property (nonatomic) unsigned long long insertionPointWidth;
@property (nonatomic) int textLoupeVisibility;
@property (nonatomic) int textSelectionBehavior;
@property (nonatomic) id textSuggestionDelegate;
@property (nonatomic) _Bool isSingleLineDocument;
@property (nonatomic) _Bool contentsIsSingleValue;
@property (nonatomic) _Bool hasDefaultContents;
@property (nonatomic) _Bool acceptsPayloads;
@property (nonatomic) _Bool acceptsEmoji;
@property (nonatomic) _Bool acceptsDictationSearchResults;
@property (nonatomic) _Bool useAutomaticEndpointing;
@property (nonatomic) _Bool showDictationButton;
@property (nonatomic) _Bool forceEnableDictation;
@property (nonatomic) _Bool forceDisableDictation;
@property (nonatomic) _Bool forceDefaultDictationInfo;
@property (nonatomic) long long forceDictationKeyboardType;
@property (nonatomic) int emptyContentReturnKeyType;
@property (nonatomic) _Bool returnKeyGoesToNextResponder;
@property (nonatomic) _Bool acceptsFloatingKeyboard;
@property (nonatomic) _Bool forceFloatingKeyboard;
@property (nonatomic) struct UIEdgeInsets floatingKeyboardEdgeInsets;
@property (nonatomic) _Bool acceptsSplitKeyboard;
@property (nonatomic) _Bool displaySecureTextUsingPlainText;
@property (nonatomic) _Bool displaySecureEditsUsingPlainText;
@property (nonatomic) _Bool learnsCorrections;
@property (nonatomic) int shortcutConversionType;
@property (nonatomic) _Bool suppressReturnKeyStyling;
@property (nonatomic) _Bool useInterfaceLanguageForLocalization;
@property (nonatomic) _Bool deferBecomingResponder;
@property (nonatomic) _Bool enablesReturnKeyOnNonWhiteSpaceContent;
@property (copy, nonatomic) NSString *autocorrectionContext;
@property (copy, nonatomic) NSString *responseContext;
@property (retain, nonatomic) UIInputContextHistory *inputContextHistory;
@property (nonatomic) _Bool disableInputBars;
@property (nonatomic) _Bool isCarPlayIdiom;
@property (nonatomic) long long textScriptType;
@property (nonatomic) _Bool loadKeyboardsForSiriLanguage;
@property (nonatomic) _Bool disablePrediction;
@property (nonatomic) _Bool hidePrediction;
@property (nonatomic, getter=isDevicePasscodeEntry) _Bool devicePasscodeEntry;

+ (id)traitEnvironmentFromTraits:(id)arg1;
+ (long long)configuredAppearanceForAppearance:(long long)arg1 withTraitEnvironment:(id)arg2;
+ (long long)translateToUIAutocapitalizationType:(unsigned long long)arg1;
+ (long long)translateToUIAutocorrectionType:(unsigned long long)arg1;
+ (long long)translateToUISpellCheckingType:(unsigned long long)arg1;
+ (long long)translateToUIKeyboardType:(unsigned long long)arg1;
+ (long long)translateToUIKeyboardAppearance:(unsigned long long)arg1;
+ (long long)translateToUIReturnKeyType:(unsigned long long)arg1;
+ (long long)translateToUITextScriptType:(unsigned long long)arg1;
+ (long long)translateToUISmartInsertDeleteEnabled:(_Bool)arg1;
+ (_Bool)keyboardTypeRequiresASCIICapable:(long long)arg1;
+ (id)traitsByAdoptingTraits:(id)arg1;
+ (id)defaultTextInputTraits;
+ (id)traitsByAdoptingTraits:(id)arg1 lightweight:(_Bool)arg2;
+ (long long)accessibleAppearanceForAppearance:(long long)arg1;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)takeTraitsFrom:(id)arg1;
- (void)overlayWithTITextInputTraits:(id)arg1;
- (_Bool)publicTraitsMatchTraits:(id)arg1;
- (long long)updateResultComparedToTraits:(id)arg1;
- (void)setToDefaultValues;
- (void)_setColorsToMatchTintColor:(id)arg1;
- (void)setToSecureValues;
- (void)takeTraitsFrom:(id)arg1 lightweight:(_Bool)arg2;
- (void)fastPathToObtainTraitsFrom:(id)arg1;
- (void)extendedPathToObtainTraitsFrom:(id)arg1 lightweight:(_Bool)arg2;

@end
