/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <Foundation/NSObject.h>

@class NSString, TIInputMode;

@interface TIKeyboardInputManagerBase : NSObject

{
    _Bool _hasHandledInput;
    TIInputMode *_inputMode;
}

@property (nonatomic, readonly) TIInputMode *inputMode;
@property (nonatomic, readonly) NSString *currentInputModeIdentifier;
@property (nonatomic, readonly) _Bool hasHandledInput;

- (id)init;
- (void)resume;
- (void)suspend;
- (void)generateCandidatesWithKeyboardState:(id)arg1 candidateRange:(struct _NSRange)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)skipHitTestForTouchEvent:(id)arg1 keyboardState:(id)arg2;
- (void)lastAcceptedCandidateCorrected;
- (void)setOriginalInput:(id)arg1;
- (void)candidateRejected:(id)arg1;
- (void)logDiscoverabilityEvent:(int)arg1 userInfo:(id)arg2;
- (id)keyboardConfiguration;
- (id)handleAcceptedCandidate:(id)arg1 keyboardState:(id)arg2;
- (void)storeLanguageModelDynamicDataIncludingCache;
- (id)handleKeyboardInput:(id)arg1;
- (void)generateAutocorrectionsWithKeyboardState:(id)arg1 candidateRange:(struct _NSRange)arg2 candidateHandler:(id)arg3;
- (id)generateReplacementsForString:(id)arg1 keyLayout:(id)arg2;
- (id)generateRefinementsForCandidate:(id)arg1;
- (long long)performHitTestForTouchEvent:(id)arg1 keyboardState:(id)arg2;
- (void)adjustPhraseBoundaryInForwardDirection:(_Bool)arg1;
- (void)adjustPhraseBoundaryInForwardDirection:(_Bool)arg1 granularity:(int)arg2;
- (void)textAccepted:(id)arg1 fromPredictiveInputBar:(_Bool)arg2 withInput:(id)arg3;
- (id)resourceInputModes;
- (id)initWithInputMode:(id)arg1 keyboardState:(id)arg2;
- (void)runMaintenanceTask;
- (void)syncToKeyboardState:(id)arg1;
- (void)candidatesOfferedFeedback:(id)arg1 keyboardState:(id)arg2;
- (struct _NSRange)smartSelectionRangeForTextInDocument:(id)arg1 inRange:(struct _NSRange)arg2 language:(id)arg3 tokenizedRanges:(id)arg4 options:(unsigned long long)arg5;
- (_Bool)isHardwareKeyboardAutocorrectionEnabled;
- (void)addSynthesizedTouchToInput:(id)arg1;
- (id)humanReadableTrace;
- (void)clearHumanReadableTrace;
- (id)configurationPropertyList;
- (long long)deletionCountForString:(id)arg1;

@end
