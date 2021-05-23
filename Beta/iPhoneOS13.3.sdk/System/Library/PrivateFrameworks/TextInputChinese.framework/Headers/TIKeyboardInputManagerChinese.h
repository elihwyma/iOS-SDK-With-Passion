/*
 Image: /System/Library/PrivateFrameworks/TextInputChinese.framework/TextInputChinese
 */

#import <TextInputCore/TIKeyboardInputManager_zh_ja.h>

@class CIMCandidateData, NSOperationQueue, NSString, TIMathSymbolPunctuationController, TIWordSearch;

@interface TIKeyboardInputManagerChinese : TIKeyboardInputManager_zh_ja

{
    TIWordSearch *_wordSearch;
    _Bool _isInCompletionMode;
    _Bool _shouldLearnAcceptedCandidate;
    _Bool _isAlphabeticPlane;
    _Bool _duringDeleteFromInputWithContext;
    NSString *_language;
    NSString *_modeName;
    CIMCandidateData *_candidateData;
    NSOperationQueue *_operationQueue;
    NSString *_pairedPunctuationOpenQuote;
    NSString *_pairedPunctuationSelectedText;
    NSString *_currentKeyHint;
    TIMathSymbolPunctuationController *_mathSymbolPunctuationController;
}

@property (readonly) CIMCandidateData *candidateData;
@property (readonly) NSOperationQueue *operationQueue;
@property (readonly) TIMathSymbolPunctuationController *mathSymbolPunctuationController;
@property _Bool duringDeleteFromInputWithContext;
@property (nonatomic) _Bool isAlphabeticPlane;
@property (copy, nonatomic) NSString *pairedPunctuationOpenQuote;
@property (copy, nonatomic) NSString *pairedPunctuationSelectedText;
@property (nonatomic, readonly) unsigned long long predictionOptions;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *modeName;
@property (nonatomic) _Bool isInCompletionMode;
@property (nonatomic) _Bool shouldLearnAcceptedCandidate;
@property (copy, nonatomic) NSString *currentKeyHint;

+ (Class)wordSearchClass;
+ (id)pairedPunctuationDictionary;
+ (id)punctuationPredictionsForString:(id)arg1;
+ (_Bool)shouldEnableHalfWidthPunctuationForDocumentContext:(id)arg1 composedText:(id)arg2;
+ (id)GB18030CandidateFromString:(id)arg1;
+ (id)unicodeCandidateFromString:(id)arg1;

- (void)setInput:(id)arg1;
- (void)clearInput;
- (id)searchStringForMarkedText;
- (id)firstCandidate;
- (id)replacementForDoubleSpace;
- (unsigned long long)initialSelectedIndex;
- (id)wordCharacters;
- (id)initWithConfig:(id)arg1 keyboardState:(id)arg2;
- (void)syncToKeyboardState:(id)arg1 from:(id)arg2 afterContextChange:(_Bool)arg3;
- (void)deleteFromInputWithContext:(id)arg1;
- (id)wordSearch;
- (void)syncToLayoutState:(id)arg1;
- (id)sortMethodsGroupsForCandidates:(id)arg1;
- (void)inputLocationChanged;
- (id)didAcceptCandidate:(id)arg1;
- (void)loadFavoniusTypingModel;
- (id)deleteFromInput:(unsigned long long *)arg1;
- (_Bool)alwaysShowExtensionCandidatesForSortingMethod:(id)arg1;
- (id)titleForSortingMethod:(id)arg1;
- (id)sortingMethods;
- (id)groupedCandidatesFromCandidates:(id)arg1 usingSortingMethod:(id)arg2;
- (void)setLearnsCorrection:(_Bool)arg1;
- (void)groupedCandidatesFromCandidates:(id)arg1 usingSortingMethod:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)resetCommitHistory;
- (struct TIInputManager *)initImplementationWithMode:(id)arg1 andLanguage:(id)arg2;
- (_Bool)shouldEnableHalfWidthPunctuationForCurrentInputContext;
- (void)willExitCompletionMode;
- (id)candidateResultSetUsedForCompletionQuery;
- (_Bool)isFacemarkInput:(id)arg1;
- (_Bool)showingFacemarkCandidates;
- (_Bool)hasIdeographicCandidates;
- (void *)mecabraCandidateRefFromPointerValue:(id)arg1;
- (id)generateCompletions;
- (_Bool)updateCompletionCandidatesIfAppropriate;
- (void)wordSearchEngineDidFindPredictionCandidates:(id)arg1;
- (id)completionCandidateResultSetForKeyHint:(id)arg1;
- (_Bool)shouldSearchCompletionForSubstrings;
- (id)outputByConvertingDecimalPointForInput:(id)arg1;
- (void)acceptFirstCandidateWithContext:(id)arg1;
- (_Bool)supportsPairedPunctutationInput;
- (_Bool)handlePairedPunctuationInput:(id)arg1 context:(id)arg2;

@end
