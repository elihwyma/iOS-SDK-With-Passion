/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UITextReplacementGenerator.h>

@class TIKeyboardCandidate, UITextChecker;

__attribute__((visibility("hidden")))
@interface UITextReplacementGeneratorForCorrections : UITextReplacementGenerator

{
    _Bool _showRevertingAutocorrectionInPredictionView;
    _Bool _forceHistoryReplacement;
    _Bool _forceAutocorrectionGuesses;
    _Bool _forceSpellingGuesses;
    UITextChecker *_textChecker;
    TIKeyboardCandidate *_autocorrectionRecord;
    unsigned long long _maxEditDistance;
    unsigned long long _maxCountAfterAutocorrectionGuesses;
    unsigned long long _maxCountAfterSpellingGuesses;
}

@property (retain, nonatomic) UITextChecker *textChecker;
@property (retain, nonatomic) TIKeyboardCandidate *autocorrectionRecord;
@property (nonatomic) _Bool forceHistoryReplacement;
@property (nonatomic) unsigned long long maxEditDistance;
@property (nonatomic) unsigned long long maxCountAfterAutocorrectionGuesses;
@property (nonatomic) _Bool forceAutocorrectionGuesses;
@property (nonatomic) unsigned long long maxCountAfterSpellingGuesses;
@property (nonatomic) _Bool forceSpellingGuesses;

- (id)init;
- (id)replacements;
- (_Bool)isStringToReplaceMisspelled;
- (_Bool)isStringMisspelled:(id)arg1;
- (id)addReplacementRevertingAutocorrectionToReplacements:(id)arg1;
- (void)addPreviouslySuggestedAutocorrectionToReplacements:(id)arg1;
- (void)addAutocorrectionGuessesToReplacements:(id)arg1;
- (void)addSpellingGuessesForString:(id)arg1 ToReplacements:(id)arg2;

@end
