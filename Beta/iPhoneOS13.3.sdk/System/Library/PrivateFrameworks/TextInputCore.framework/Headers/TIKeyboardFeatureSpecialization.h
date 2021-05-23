/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString, TIInputMode;

@interface TIKeyboardFeatureSpecialization : NSObject

{
    NSString *m_softwareLayout;
    struct USet *m_precomposedCharacterSet;
    struct USet *m_acceptableCharacterSet;
    NSMutableDictionary *m_compositionMaps;
    NSMutableDictionary *m_reverseCompositionMaps;
    _Bool _useRelaxedOVSPolicy;
    TIInputMode *_inputMode;
    long long _currentUserInterfaceIdiom;
}

@property (nonatomic, readonly) TIInputMode *inputMode;
@property (nonatomic) long long currentUserInterfaceIdiom;
@property (nonatomic) _Bool useRelaxedOVSPolicy;

+ (id)createSpecializationForInputMode:(id)arg1;
+ (struct USet *)createAcceptableCharacterSetForKeyboardLocale:(id)arg1;

- (void)dealloc;
- (id)keyboardBehaviors;
- (_Bool)canHandleKeyHitTest;
- (_Bool)shouldExtendPriorWord;
- (id)wordSeparator;
- (id)replacementForDoubleSpace;
- (_Bool)shouldAddModifierSymbolsToWordCharacters;
- (id)wordCharacters;
- (id)terminatorsDeletingAutospace;
- (id)initWithInputMode:(id)arg1;
- (_Bool)shouldConvertAutocorrectionCandidatesToFullWidth;
- (_Bool)doesComposeText;
- (id)allAccentKeyStrings;
- (id)layoutTags;
- (id)nonstopPunctuationCharacters;
- (id)sentencePrefixingCharacters;
- (id)sentenceDelimitingCharacters;
- (id)sentenceTrailingCharacters;
- (void)reloadPrecomposedCharacterSetWithIdiom:(long long)arg1;
- (_Bool)supportsLearning;
- (_Bool)shouldLearnLowercaseAtBeginningOfSentence;
- (id)accentKeyStringForKeyboardState:(id)arg1;
- (struct TIInputManager *)createInputManager;
- (id)dictionaryInputMode;
- (struct USet *)createAcceptableCharacterSet;
- (void)specializeInputManager:(struct TIInputManager *)arg1 forLayoutState:(id)arg2;
- (id)externalStringToInternal:(id)arg1;
- (id)internalStringToExternal:(id)arg1;
- (unsigned long long)maxPriorWordTokensAfterTrimming;
- (_Bool)acceptsCharacter:(unsigned int)arg1;
- (_Bool)dictionaryUsesExternalEncoding;
- (_Bool)shouldConvertCandidateToExternal;
- (_Bool)allowsAutocorrectionOfValidWords;
- (struct NSDictionary *)compositionMapForLayout:(id)arg1 reverse:(_Bool)arg2;
- (const struct USet *)precomposedCharacterSet;

@end
