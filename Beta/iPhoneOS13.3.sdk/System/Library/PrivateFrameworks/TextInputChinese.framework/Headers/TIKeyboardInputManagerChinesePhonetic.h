/*
 Image: /System/Library/PrivateFrameworks/TextInputChinese.framework/TextInputChinese
 */

#import <TextInputChinese/TIKeyboardInputManagerChinese.h>

@class CIMCandidateData, NSArray, NSOperationQueue, NSString, TIConversionHistory, TIKeyboardCandidate, TIKeyboardCandidateResultSet, TIMecabraIMLogger;

@interface TIKeyboardInputManagerChinesePhonetic : TIKeyboardInputManagerChinese

{
    _Bool _usesCandidateSelection;
    CIMCandidateData *_candidateData;
    NSOperationQueue *_operationQueue;
    _Bool _isCandidateSelected;
    _Bool _acceptingCandidate;
    _Bool _isInAmbiguousMode;
    _Bool _lockingFirstPinyinSyllable;
    _Bool _filterCandidatesUsingInputIndex;
    _Bool _shouldClearBeforeContinuousPath;
    _Bool _skipSetMarkedTextDuringInput;
    TIConversionHistory *_conversionHistory;
    NSString *_remainingInput;
    NSString *_replacedAmbiguousPinyinSyllable;
    NSString *_replacementUnambiguousPinyinSyllable;
    NSString *_composedTextBeforeFirstSyllableLocked;
    NSArray *_pinyinSyllableCandidates;
    unsigned long long _selectedPinyinSyllableCandidateIndex;
    TIMecabraIMLogger *_logger;
    TIKeyboardCandidateResultSet *_mostRecentCandidateResultSetPendingDisplay;
}

@property (nonatomic, readonly, getter=isPhraseBoundarySet) _Bool phraseBoundarySet;
@property (nonatomic, readonly) TIKeyboardCandidate *candidateForInlineTextSegmentation;
@property (copy, nonatomic) NSString *remainingInput;
@property (nonatomic, readonly) NSString *unconvertedInput;
@property (nonatomic) _Bool filterCandidatesUsingInputIndex;
@property (copy, nonatomic) NSString *replacedAmbiguousPinyinSyllable;
@property (copy, nonatomic) NSString *replacementUnambiguousPinyinSyllable;
@property (copy, nonatomic) NSString *composedTextBeforeFirstSyllableLocked;
@property (retain, nonatomic) NSArray *pinyinSyllableCandidates;
@property (nonatomic) unsigned long long selectedPinyinSyllableCandidateIndex;
@property (retain, nonatomic) TIKeyboardCandidateResultSet *mostRecentCandidateResultSetPendingDisplay;
@property (nonatomic) _Bool shouldClearBeforeContinuousPath;
@property (copy, nonatomic, readonly) NSString *internalInputString;
@property (nonatomic, readonly) NSString *convertedInput;
@property (nonatomic, readonly) _Bool usesGeometryModelData;
@property (retain, nonatomic) TIConversionHistory *conversionHistory;
@property (nonatomic) _Bool skipSetMarkedTextDuringInput;
@property (retain, nonatomic) TIMecabraIMLogger *logger;

+ (Class)wordSearchClass;
+ (id)stringFallBackForTenKeyInput:(id)arg1 range:(struct _NSRange)arg2;
+ (id)stringByRemovingSyllableSeparatorsFromString:(id)arg1;
+ (id)directlyCommittedCharacterSetForEmptyInline;
+ (id)ambiguousPinyinSet;
+ (id)ambiguousDefaults;

- (void)dealloc;
- (id)locale;
- (void)resume;
- (void)suspend;
- (unsigned int)inputCount;
- (void)setInput:(id)arg1;
- (id)candidateResultSet;
- (id)keyboardBehaviors;
- (_Bool)supportsNumberKeySelection;
- (void)_nop;
- (void)clearInput;
- (_Bool)usesCandidateSelection;
- (id)searchStringForMarkedText;
- (id)inputString;
- (_Bool)usesAutoDeleteWord;
- (_Bool)supportsSetPhraseBoundary;
- (_Bool)shouldExtendPriorWord;
- (_Bool)suppressCompletionsForFieldEditor;
- (_Bool)suppliesCompletions;
- (unsigned long long)phraseBoundary;
- (unsigned int)inputIndex;
- (void)lastAcceptedCandidateCorrected;
- (_Bool)commitsAcceptedCandidate;
- (id)defaultCandidate;
- (void)setInHardwareKeyboardMode:(_Bool)arg1;
- (_Bool)ignoresDeadKeys;
- (_Bool)shouldAddModifierSymbolsToWordCharacters;
- (_Bool)doesComposeText;
- (id)sentenceDelimitingCharacters;
- (id)initWithConfig:(id)arg1 keyboardState:(id)arg2;
- (_Bool)shouldDelayUpdateComposedText;
- (struct _NSRange)analysisStringRange;
- (void)updateComposedText;
- (id)convertInputsToSyntheticInputUptoCount:(int)arg1;
- (id)handleAcceptedCandidate:(id)arg1 keyboardState:(id)arg2;
- (long long)addTouch:(id)arg1 shouldHitTest:(_Bool)arg2;
- (void)storeLanguageModelDynamicDataIncludingCache;
- (_Bool)supportsPerRecipientLearning;
- (void)syncToKeyboardState:(id)arg1 from:(id)arg2 afterContextChange:(_Bool)arg3;
- (id)handleKeyboardInput:(id)arg1;
- (_Bool)supportsLearning;
- (id)externalStringToInternal:(id)arg1;
- (id)internalStringToExternal:(id)arg1;
- (void)setAutoCorrects:(_Bool)arg1;
- (id)newInputManagerState;
- (void)syncToLayoutState:(id)arg1;
- (id)keyboardConfigurationLayoutTag;
- (id)rawInputString;
- (void)addInput:(id)arg1 withContext:(id)arg2;
- (void)inputLocationChanged;
- (id)didAcceptCandidate:(id)arg1;
- (unsigned int)internalIndexToExternal:(unsigned int)arg1;
- (unsigned int)externalIndexToInternal:(unsigned int)arg1;
- (id)addInput:(id)arg1 flags:(unsigned int)arg2 point:(struct CGPoint)arg3 firstDelete:(unsigned long long *)arg4;
- (id)deleteFromInput:(unsigned long long *)arg1;
- (_Bool)canStartSentenceAfterString:(id)arg1;
- (void)checkAutocorrectionDictionaries;
- (void)setPhraseBoundary:(unsigned long long)arg1;
- (id)sortingMethods;
- (void)clearDynamicDictionary;
- (int)inputMethodType;
- (void)wordSearchEngineDidFindPredictionCandidates:(id)arg1;
- (_Bool)shouldLookForCompletionCandidates;
- (void)loadAddressBook;
- (void)didDeleteCandidates:(id)arg1;
- (void)clearPinyinSyllableSelection;
- (void)revertToAmbiguousPinyinSyllable;
- (unsigned int)externalIndexToInternal:(unsigned int)arg1 shouldBoundToInputCount:(_Bool)arg2;
- (_Bool)inputContinuesGB18030OrUnicodeLookupKey:(id)arg1;
- (_Bool)isSpecialInput:(id)arg1;
- (_Bool)_shouldCommitInputDirectly:(id)arg1;
- (id)remapInput:(id)arg1 isFacemarkInput:(_Bool *)arg2;
- (_Bool)handleDirectlyCommitForInput:(id)arg1 withContext:(id)arg2;
- (void)addInputToInternal:(id)arg1;
- (unsigned long long)internalInputCount;
- (unsigned long long)internalInputIndex;
- (void)processDeleteInputs;
- (_Bool)shouldReplaceCharacterOfInputStringBeforeCursorForInput:(id)arg1;
- (id)candidateResultSetByWaitingForResults:(_Bool)arg1;
- (_Bool)hasExtensionEmojiCandidates;
- (id)phoneticSortingMethod;
- (void)handleAcceptedPinyinDisambiguationCandidate:(id)arg1 keyboardState:(id)arg2;
- (_Bool)updateCandidatesByWaitingForResults:(_Bool)arg1;
- (id)inputStringForSearch;
- (id)stringByStrippingConvertedCandidateTextFromString:(id)arg1;
- (id)stringByPrependingConvertedCandidateTextToString:(id)arg1;
- (void)wordSearchEngineDidFindCandidates:(id)arg1 forOperation:(id)arg2;
- (id)segmentedPinyinStringFromString:(id)arg1;
- (_Bool)firstSyllableLocked;
- (id)composedTextForSelectedCandidate:(id)arg1 remainingInput:(id)arg2;
- (_Bool)generateReanalysisCandidatesIfAppropriate;

@end
