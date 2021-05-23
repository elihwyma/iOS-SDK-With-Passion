/*
 Image: /System/Library/PrivateFrameworks/TextInputChinese.framework/TextInputChinese
 */

#import <TextInputChinese/TIKeyboardInputManagerShapeBased.h>

@class TIKeyboardCandidate;

@interface TIKeyboardInputManagerWubi : TIKeyboardInputManagerShapeBased

{
    TIKeyboardCandidate *_autoConfirmationCandidate;
}

@property (retain, nonatomic) TIKeyboardCandidate *autoConfirmationCandidate;

+ (Class)wordSearchClass;

- (_Bool)acceptInputString:(id)arg1;
- (void)setInSplitKeyboardMode:(_Bool)arg1;
- (_Bool)shouldAddModifierSymbolsToWordCharacters;
- (id)inputsToReject;
- (void)openCandidateGenerationContextWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)closeCandidateGenerationContextWithResults:(id)arg1;
- (void)addInput:(id)arg1 withContext:(id)arg2;
- (id)deleteFromInput:(unsigned long long *)arg1;
- (void)checkAutocorrectionDictionaries;
- (int)inputMethodType;
- (_Bool)supportsPairedPunctutationInput;
- (id)formattedSearchString;
- (void)notifyUpdateCandidates:(id)arg1 forOperation:(id)arg2;
- (_Bool)updateCandidatesWithTIWordSearch:(id)arg1 predictionEnabled:(_Bool)arg2;
- (_Bool)isWubi:(id)arg1;

@end
