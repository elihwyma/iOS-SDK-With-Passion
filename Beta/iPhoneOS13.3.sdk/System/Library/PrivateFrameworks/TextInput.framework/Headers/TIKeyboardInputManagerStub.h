/*
 Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface TIKeyboardInputManagerStub : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)serverInterface;
+ (void)setArrayClassesForSelectorsInInterface:(id)arg1;

- (void)syncToKeyboardState:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)smartSelectionForTextInDocument:(id)arg1 inRange:(struct _NSRange)arg2 language:(id)arg3 tokenizedRanges:(id)arg4 options:(unsigned long long)arg5 completion:(CDUnknownBlockType)arg6;
- (void)textAccepted:(id)arg1;
- (void)handleKeyboardInput:(id)arg1 keyboardState:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)generateCandidatesWithKeyboardState:(id)arg1 candidateRange:(struct _NSRange)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)generateAutocorrectionsWithKeyboardState:(id)arg1 candidateRange:(struct _NSRange)arg2 requestToken:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)handleAcceptedCandidate:(id)arg1 keyboardState:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)generateReplacementsForString:(id)arg1 keyLayout:(id)arg2 continuation:(CDUnknownBlockType)arg3;
- (void)skipHitTestForTouchEvents:(id)arg1 keyboardState:(id)arg2;
- (void)skipHitTestForTouchEvent:(id)arg1 keyboardState:(id)arg2;
- (void)performHitTestForTouchEvents:(id)arg1 keyboardState:(id)arg2 continuation:(CDUnknownBlockType)arg3;
- (void)performHitTestForTouchEvent:(id)arg1 keyboardState:(id)arg2 continuation:(CDUnknownBlockType)arg3;
- (void)adjustPhraseBoundaryInForwardDirection:(_Bool)arg1 granularity:(int)arg2 keyboardState:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)lastAcceptedCandidateCorrected;
- (void)setOriginalInput:(id)arg1;
- (void)candidateRejected:(id)arg1;
- (void)textAccepted:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)logDiscoverabilityEvent:(int)arg1 userInfo:(id)arg2;
- (void)generateAutocorrectionsWithKeyboardState:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)writeTypologyLogWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)generateAutocorrectionsWithKeyboardState:(id)arg1 candidateRange:(struct _NSRange)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)generateRefinementsForCandidate:(id)arg1 keyboardState:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)adjustPhraseBoundaryInForwardDirection:(_Bool)arg1 keyboardState:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)keyboardConfiguration;

@end
