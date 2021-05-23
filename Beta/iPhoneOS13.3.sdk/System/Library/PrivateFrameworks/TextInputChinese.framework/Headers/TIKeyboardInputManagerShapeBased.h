/*
 Image: /System/Library/PrivateFrameworks/TextInputChinese.framework/TextInputChinese
 */

#import <TextInputChinese/TIKeyboardInputManagerChinese.h>

@class NSMutableString, NSString;

@interface TIKeyboardInputManagerShapeBased : TIKeyboardInputManagerChinese

{
    NSMutableString *_searchString;
    _Bool _keepRemainingInput;
    NSString *_remainingInput;
    _Bool _previousActionWasAutoConfirmation;
}

@property (nonatomic, readonly) NSMutableString *searchString;
@property (retain, nonatomic) NSString *remainingInput;
@property (nonatomic) _Bool previousActionWasAutoConfirmation;

- (unsigned int)inputCount;
- (_Bool)hasCandidates;
- (id)candidateResultSet;
- (id)keyboardBehaviors;
- (void)clearInput;
- (_Bool)usesCandidateSelection;
- (_Bool)acceptInputString:(id)arg1;
- (id)searchStringForMarkedText;
- (_Bool)usesAutoDeleteWord;
- (_Bool)shouldExtendPriorWord;
- (_Bool)suppliesCompletions;
- (unsigned int)inputIndex;
- (unsigned long long)initialSelectedIndex;
- (void)setInputIndex:(unsigned int)arg1;
- (void)loadDictionaries;
- (_Bool)supportsLearning;
- (id)keyboardConfigurationLayoutTag;
- (id)rawInputString;
- (void)inputLocationChanged;
- (id)didAcceptCandidate:(id)arg1;
- (id)deleteFromInput:(unsigned long long *)arg1;
- (void)acceptInput;
- (id)sortingMethods;
- (_Bool)isHardwareKeyboardAutocorrectionEnabled;
- (_Bool)shouldLookForCompletionCandidates;
- (id)formattedSearchString;
- (void)notifyUpdateCandidates:(id)arg1 forOperation:(id)arg2;
- (_Bool)updateCandidatesWithTIWordSearch:(id)arg1 predictionEnabled:(_Bool)arg2;
- (void)cancelCandidatesThread;
- (id)markedTextWithAutoconvertedCandidates;

@end
