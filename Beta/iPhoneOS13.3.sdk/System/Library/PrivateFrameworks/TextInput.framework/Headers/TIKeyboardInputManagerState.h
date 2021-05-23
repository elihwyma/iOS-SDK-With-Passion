/*
 Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <Foundation/NSObject.h>

@class NSString, TICharacterSetDescription, TIKeyEventMap, TIKeyboardBehaviors, TIKeyboardCandidate;

@interface TIKeyboardInputManagerState : NSObject

{
    TIKeyboardBehaviors *_keyboardBehaviors;
    union {
        long long integerValue;
        struct {
            unsigned int canHandleKeyHitTest:1;
            unsigned int ignoresDeadKeys:1;
            unsigned int shouldExtendPriorWord:1;
            unsigned int suppliesCompletions:1;
            unsigned int supportsNumberKeySelection:1;
            unsigned int supportsSetPhraseBoundary:1;
            unsigned int suppressCompletionsForFieldEditor:1;
            unsigned int usesAutoDeleteWord:1;
            unsigned int usesCandidateSelection:1;
            unsigned int commitsAcceptedCandidate:1;
            unsigned int newInputAcceptsUserSelectedCandidate:1;
            unsigned int nextInputWouldStartSentence:1;
            unsigned int inputStringIsExemptFromChecker:1;
            unsigned int suppressPlaceholderCandidate:1;
            unsigned int usesAutocorrectionLists:1;
            unsigned int autoquoteType:2;
            unsigned int usesContinuousPath:1;
            unsigned int usesContinuousPathProgressiveCandidates:1;
            unsigned int usesPunctuationKeysForRowNavigation:1;
            unsigned int insertsSpaceAfterPredictiveInput:1;
            unsigned int shouldFixupIncompleteRomaji:1;
        } fields;
    } _mask;
    _Bool _shouldAddModifierSymbolsToWordCharacters;
    TIKeyboardCandidate *_autocorrectionRecordForInputString;
    NSString *_wordSeparator;
    unsigned long long _inputCount;
    unsigned long long _inputIndex;
    NSString *_inputString;
    TIKeyEventMap *_keyEventMap;
    NSString *_replacementForDoubleSpace;
    NSString *_shadowTyping;
    unsigned long long _initialCandidateBatchCount;
    TICharacterSetDescription *_wordCharacters;
    TICharacterSetDescription *_shortcutCompletions;
    TICharacterSetDescription *_inputsPreventingAcceptSelectedCandidate;
    TICharacterSetDescription *_inputsToReject;
    TICharacterSetDescription *_terminatorsPreventingAutocorrection;
    TICharacterSetDescription *_terminatorsDeletingAutospace;
    NSString *_searchStringForMarkedText;
}

@property (nonatomic) _Bool canHandleKeyHitTest;
@property (nonatomic) _Bool ignoresDeadKeys;
@property (nonatomic) _Bool shouldExtendPriorWord;
@property (nonatomic) _Bool suppliesCompletions;
@property (nonatomic) _Bool supportsSetPhraseBoundary;
@property (nonatomic) _Bool suppressCompletionsForFieldEditor;
@property (nonatomic) _Bool usesAutoDeleteWord;
@property (nonatomic) _Bool usesCandidateSelection;
@property (nonatomic) _Bool usesAutocorrectionLists;
@property (nonatomic) _Bool commitsAcceptedCandidate;
@property (nonatomic) _Bool newInputAcceptsUserSelectedCandidate;
@property (nonatomic) unsigned long long autoquoteType;
@property (nonatomic) _Bool usesContinuousPath;
@property (nonatomic) _Bool usesContinuousPathProgressiveCandidates;
@property (nonatomic) _Bool insertsSpaceAfterPredictiveInput;
@property (nonatomic) _Bool shouldFixupIncompleteRomaji;
@property (copy, nonatomic) NSString *replacementForDoubleSpace;
@property (copy, nonatomic) NSString *wordSeparator;
@property (nonatomic) unsigned long long initialCandidateBatchCount;
@property (retain, nonatomic) TIKeyboardBehaviors *keyboardBehaviors;
@property (nonatomic) _Bool shouldAddModifierSymbolsToWordCharacters;
@property (copy, nonatomic) TICharacterSetDescription *wordCharacters;
@property (copy, nonatomic) TICharacterSetDescription *shortcutCompletions;
@property (copy, nonatomic) TICharacterSetDescription *inputsPreventingAcceptSelectedCandidate;
@property (copy, nonatomic) TICharacterSetDescription *inputsToReject;
@property (copy, nonatomic) TICharacterSetDescription *terminatorsPreventingAutocorrection;
@property (copy, nonatomic) TICharacterSetDescription *terminatorsDeletingAutospace;
@property (copy, nonatomic) NSString *inputString;
@property (nonatomic) unsigned long long inputIndex;
@property (nonatomic) unsigned long long inputCount;
@property (nonatomic) _Bool nextInputWouldStartSentence;
@property (nonatomic) _Bool inputStringIsExemptFromChecker;
@property (nonatomic) _Bool suppressPlaceholderCandidate;
@property (nonatomic) _Bool supportsNumberKeySelection;
@property (nonatomic) _Bool usesPunctuationKeysForRowNavigation;
@property (retain, nonatomic) TIKeyboardCandidate *autocorrectionRecordForInputString;
@property (copy, nonatomic) NSString *shadowTyping;
@property (copy, nonatomic) NSString *searchStringForMarkedText;
@property (retain, nonatomic) TIKeyEventMap *keyEventMap;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)acceptInputString:(id)arg1;
- (_Bool)shouldDeleteAutospaceBeforeTerminator:(id)arg1;
- (_Bool)shouldSuppressAutocorrectionWithTerminator:(id)arg1;
- (_Bool)inputStringAcceptsCurrentCandidateIfSelected:(id)arg1;
- (_Bool)stringEndsWord:(id)arg1;

@end
