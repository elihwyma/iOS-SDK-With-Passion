/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <Foundation/NSObject.h>

#import <TextInputCore/Swift-Protocol.h>

@class NSCache, NSString, TIInputMode, TIMecabraEnvironment, TIMecabraWrapper, TIWordSearchOperationGetCandidates;

@interface TIWordSearch : NSObject <Swift>

{
    id _userDictionaryObserver;
    id _dictionaryUpdateObserver;
    _Bool _autoCorrects;
    _Bool _shouldLearnAcceptedCandidate;
    TIInputMode *_inputMode;
    TIMecabraEnvironment *_mecabraEnvironment;
    TIMecabraWrapper *_mecabraWrapper;
    TIWordSearchOperationGetCandidates *_operation;
    NSCache *_candidatesCache;
}

@property (retain) TIWordSearchOperationGetCandidates *operation;
@property (nonatomic, readonly) int mecabraLanguage;
@property (retain) TIMecabraWrapper *mecabraWrapper;
@property (retain, nonatomic) NSCache *candidatesCache;
@property _Bool autoCorrects;
@property _Bool shouldLearnAcceptedCandidate;
@property (readonly) TIInputMode *inputMode;
@property (retain, nonatomic) TIMecabraEnvironment *mecabraEnvironment;
@property (readonly) struct __Mecabra *mecabra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedOperationQueue;
+ (id)recipientRecords;
+ (id)configureUserDictionaryObserver:(id)arg1 previousObserver:(id)arg2;
+ (id)mecabraLearningDictionaryDirectory;

- (void)dealloc;
- (void)clearCache;
- (void)cancel;
- (_Bool)isCancelled;
- (void)lastAcceptedCandidateCorrected;
- (void)contactStoreDidChange:(id)arg1;
- (void)flushDynamicData;
- (void)revertInlineCandidate;
- (void)adjustEnvironmentOnAction:(long long)arg1;
- (void)declareEndOfSentence;
- (void)handleMemoryPressureLevel:(unsigned long long)arg1 excessMemoryInBytes:(unsigned long long)arg2;
- (void)keyboardActivityDidTransition:(id)arg1;
- (void)endInputSession;
- (void)setDebuggingLogEnabled:(_Bool)arg1;
- (void)updateMecabraState;
- (void)clearLearningDictionary;
- (int)mecabraInputMethodType;
- (unsigned long long)mecabraCreationOptions;
- (id)initTIWordSearchWithInputMode:(id)arg1;
- (id)initTIWordSearchWithInputMode:(id)arg1 mecabraWrapper:(id)arg2;
- (id)candidatesCacheKeyForOperation:(id)arg1;
- (id)candidatesForOperation:(id)arg1;
- (id)uncachedCandidatesForOperation:(id)arg1;
- (id)cachedCandidatesForOperation:(id)arg1;
- (void)_addFacemarkCandidatesToResultSet:(id)arg1 forInput:(id)arg2;
- (_Bool)addFacemarkCandidatesToResultSet:(id)arg1 forInput:(id)arg2;
- (void)performAccept:(void *)arg1 isPartial:(_Bool)arg2;
- (void)resetPreviousWord;
- (void)performOperationAsync:(id)arg1;
- (void)performOperationAsync:(id)arg1 withBackgroundActivityAssertion:(_Bool)arg2;
- (void)releaseBackgroundActivityAssertion;
- (void)completeOperationsInQueue;
- (void)saveLearningDictionary;
- (void)clearObservers;
- (void)dynamicDictionariesRemoved:(id)arg1;
- (void)setLanguageModelAdaptationContextWithClientIdentifier:(id)arg1 recipientIdentifier:(id)arg2;
- (void)setLanguageModelAdaptationContext:(id)arg1;
- (void)updateUserWordEntries;
- (void)updateDictionaryPaths;
- (void)adaptOfflineToParagraph:(id)arg1 adaptationContext:(id)arg2 timeStamp:(double)arg3;
- (void)setLeftDocumentContext:(id)arg1 rightDocumentContext:(id)arg2;
- (void)clearLeftDocumentContext;
- (void)commitSurface:(id)arg1;
- (void)commitPunctuationSurface:(id)arg1;
- (void)resetMecabraEnvironment;
- (void)setMecabraTextContentType:(int)arg1;

@end
