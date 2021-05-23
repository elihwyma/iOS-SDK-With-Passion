/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <TextInputCore/TIKeyboardInputManager.h>

@class MCDrawInput, MCKeyboardInput, NSArray, NSCharacterSet, NSMutableArray, NSMutableDictionary, NSString, TIKeyboardTouchEvent, TIWordSearch, TIWordSearchCandidateResultSet;

@interface TIKeyboardInputManager_zh_ja : TIKeyboardInputManager

{
    _Bool _hasCommittedPartialCandidate;
    _Bool _hasBackspacedIntoInputString;
    _Bool _preservesComposingInput;
    int _lastCommittedCandidateType;
    NSMutableArray *_touchDataArray;
    MCKeyboardInput *_composingInput;
    RefPtr_54d74a7c _baseLayout;
    TIKeyboardInputManager_zh_ja *chainedKeyboardInputManager;
    TIKeyboardInputManager_zh_ja *_composingKeyboardInputManager;
    NSArray *_clearedGeometryDataArray;
    NSArray *_clearedTouchDataArray;
    NSString *_currentClientIdentifier;
    NSString *_currentRecipientIdentifier;
    TIKeyboardTouchEvent *_previousTouchEvent;
    MCDrawInput *_cancelledDrawInput;
    RefPtr_54d74a7c _favoniusLayoutForCharacterKeysFrame;
    CDUnknownBlockType _compositionCompletionHandler;
    TIWordSearch *_wordSearch;
    TIWordSearchCandidateResultSet *_wordSearchCandidateResultSet;
    MCKeyboardInput *_previouslyDeletedTypeInput;
    MCKeyboardInput *_previouslyProcessedDeleteInput;
    NSMutableArray *_geometryDataArray;
    NSMutableDictionary *_touchDownEvents;
    NSMutableDictionary *_touchUpEvents;
    struct CGRect _currentLayoutCharacterKeysFrame;
}

@property (retain, nonatomic) NSArray *clearedGeometryDataArray;
@property (retain, nonatomic) NSArray *clearedTouchDataArray;
@property (copy, nonatomic) NSString *currentClientIdentifier;
@property (copy, nonatomic) NSString *currentRecipientIdentifier;
@property (nonatomic) _Bool hasCommittedPartialCandidate;
@property (nonatomic) _Bool hasBackspacedIntoInputString;
@property (nonatomic) int lastCommittedCandidateType;
@property (nonatomic) _Bool preservesComposingInput;
@property (retain, nonatomic) TIKeyboardTouchEvent *previousTouchEvent;
@property (retain, nonatomic) MCDrawInput *cancelledDrawInput;
@property (nonatomic, readonly) RefPtr_54d74a7c baseLayout;
@property (nonatomic, readonly) struct CGRect currentLayoutCharacterKeysFrame;
@property (nonatomic) RefPtr_54d74a7c favoniusLayoutForCharacterKeysFrame;
@property (copy, nonatomic) CDUnknownBlockType compositionCompletionHandler;
@property (nonatomic, readonly) TIWordSearch *wordSearch;
@property (nonatomic, readonly) struct __Mecabra *mecabra;
@property (retain, nonatomic) TIWordSearchCandidateResultSet *wordSearchCandidateResultSet;
@property (nonatomic, readonly) _Bool supportsPerRecipientLearning;
@property (nonatomic, readonly) MCKeyboardInput *composingInput;
@property (nonatomic, readonly) _Bool usesComposingInput;
@property (retain, nonatomic) MCKeyboardInput *previouslyDeletedTypeInput;
@property (retain, nonatomic) MCKeyboardInput *previouslyProcessedDeleteInput;
@property (nonatomic, readonly) NSMutableArray *geometryDataArray;
@property (nonatomic, readonly) NSCharacterSet *validCharacterSetForAutocorrection;
@property (nonatomic, readonly) NSMutableDictionary *touchDownEvents;
@property (nonatomic, readonly) NSMutableDictionary *touchUpEvents;
@property (nonatomic, readonly) NSMutableArray *touchDataArray;
@property (nonatomic, readonly) TIKeyboardInputManager_zh_ja *chainedKeyboardInputManager;
@property (retain, nonatomic) TIKeyboardInputManager_zh_ja *composingKeyboardInputManager;

+ (id)initializedClients;
+ (id)dummyTouchData;
+ (id)dummyGeometryData;
+ (void)removeDynamicDictionaryForInputMode:(id)arg1;
+ (id)offlineLearningHandleForInputMode:(id)arg1;
+ (Class)wordSearchClass;
+ (id)inputMethodWithChainedKeyboardInputManager:(id)arg1;

- (void)dealloc;
- (void)resume;
- (void)suspend;
- (id).cxx_construct;
- (void)clearInput;
- (void)generateCandidatesWithKeyboardState:(id)arg1 candidateRange:(struct _NSRange)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)skipHitTestForTouchEvent:(id)arg1 keyboardState:(id)arg2;
- (unsigned long long)autoquoteType;
- (id)wordSeparator;
- (void)lastAcceptedCandidateCorrected;
- (void)setOriginalInput:(id)arg1;
- (void)candidateRejected:(id)arg1;
- (id)keyboardConfiguration;
- (id)inputsToReject;
- (id)initWithConfig:(id)arg1 keyboardState:(id)arg2;
- (_Bool)isProgressivelyPathing;
- (_Bool)shouldDelayUpdateComposedText;
- (_Bool)shouldClearInputOnMarkedTextOutOfSync;
- (id)geometryModelData;
- (struct _NSRange)analysisStringRange;
- (void)saveGeometryForInput:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)restoreGeometryForInput:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)padGeometryForInput:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)savePartialGeometryData;
- (void)updateComposedText;
- (id)convertInputsToSyntheticInputUptoCount:(int)arg1;
- (id)handleAcceptedCandidate:(id)arg1 keyboardState:(id)arg2;
- (_Bool)needsTouchEvents;
- (long long)addTouch:(id)arg1 shouldHitTest:(_Bool)arg2;
- (id)touchDataForPathIndex:(long long)arg1;
- (void)saveTouchDataForEvent:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)logInputString;
- (void)logDocumentContext;
- (void)logAllCandidates;
- (void)logCommittedCandidate:(id)arg1 partial:(_Bool)arg2;
- (void)storeLanguageModelDynamicDataIncludingCache;
- (void)insertDummyGeometryDataAtIndex:(unsigned long long)arg1;
- (void)insertDummyTouchDataAtIndex:(unsigned long long)arg1;
- (void)handlePerformBackgroundMaintenanceNotification;
- (id)adaptationContextReadingForReanalysisString:(id)arg1 fromRecentlyCommittedCandidates:(id)arg2;
- (_Bool)shouldUpdateLanguageModel;
- (_Bool)updateLanguageModelForKeyboardState;
- (void)setLanguageModelAdaptationContext;
- (int)mecabraTextContentTypeFromTITextContentType:(id)arg1;
- (void)syncToKeyboardState:(id)arg1 from:(id)arg2 afterContextChange:(_Bool)arg3;
- (void)updateUsageStatisticsForCandidate:(id)arg1 isPartial:(_Bool)arg2;
- (void)incrementUsageTrackingKeysForDeleteFromInput;
- (id)handleKeyboardInput:(id)arg1;
- (void)updateDocumentContext;
- (void)deleteFromInputWithContext:(id)arg1;
- (id)candidateResultSetFromWordSearchCandidateResultSet:(id)arg1;
- (void *)mecabraCandidateRefFromCandidate:(id)arg1;
- (id)segmentsFromCandidate:(id)arg1 phraseBoundary:(_Bool)arg2;
- (void)addProactiveTriggers:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)updateProactiveCandidatesForCandidateResultSet:(id)arg1 withInput:(id)arg2;
- (void)generateAutocorrectionsWithKeyboardState:(id)arg1 candidateRange:(struct _NSRange)arg2 candidateHandler:(id)arg3;
- (_Bool)supportsCandidateGeneration;
- (_Bool)alreadyGeneratedCandidates;
- (id)generateReplacementsForString:(id)arg1 keyLayout:(id)arg2;
- (id)generateRefinementsForCandidate:(id)arg1;
- (long long)performHitTestForTouchEvent:(id)arg1 keyboardState:(id)arg2;
- (void)adjustPhraseBoundaryInForwardDirection:(_Bool)arg1;
- (void)adjustPhraseBoundaryInForwardDirection:(_Bool)arg1 granularity:(int)arg2;
- (_Bool)_adjustPhraseBoundaryInForwardDirection:(_Bool)arg1 granularity:(int)arg2;
- (void)textAccepted:(id)arg1 fromPredictiveInputBar:(_Bool)arg2 withInput:(id)arg3;
- (id)initWithKeyboardInputManagerToChain:(id)arg1;
- (void)commitComposition;
- (void)composeText:(CDUnknownBlockType)arg1;
- (void)_completeComposition:(_Bool)arg1;
- (void)composeTextWith:(id)arg1;
- (void)completeComposition;
- (void)cancelComposition;

@end
