//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSDictionary, NSString, TICandidateRequestToken, TIKeyboardCandidate, TIKeyboardInput, TIKeyboardLayout, TIKeyboardState, TIKeyboardTouchEvent;

@protocol TIKeyboardInputManager <NSObject>
- (void)writeTypologyLogWithCompletionHandler:(void (^)(NSURL *))arg1;
- (void)logDiscoverabilityEvent:(int)arg1 userInfo:(NSDictionary *)arg2;
- (void)lastAcceptedCandidateCorrected;
- (void)candidateRejected:(TIKeyboardCandidate *)arg1;
- (void)textAccepted:(TIKeyboardCandidate *)arg1;
- (void)textAccepted:(TIKeyboardCandidate *)arg1 completionHandler:(void (^)(TIKeyboardConfiguration *))arg2;
- (void)setOriginalInput:(NSString *)arg1;
- (void)adjustPhraseBoundaryInForwardDirection:(BOOL)arg1 granularity:(int)arg2 keyboardState:(TIKeyboardState *)arg3 completionHandler:(void (^)(TIKeyboardConfiguration *))arg4;
- (void)adjustPhraseBoundaryInForwardDirection:(BOOL)arg1 keyboardState:(TIKeyboardState *)arg2 completionHandler:(void (^)(TIKeyboardConfiguration *))arg3;
- (void)smartSelectionForTextInDocument:(NSString *)arg1 inRange:(NSRange)arg2 language:(NSString *)arg3 tokenizedRanges:(NSArray *)arg4 options:(NSUInteger)arg5 completion:(void (^)(NSRange))arg6;
- (void)skipHitTestForTouchEvents:(NSArray *)arg1 keyboardState:(TIKeyboardState *)arg2;
- (void)skipHitTestForTouchEvent:(TIKeyboardTouchEvent *)arg1 keyboardState:(TIKeyboardState *)arg2;
- (void)performHitTestForTouchEvents:(NSArray *)arg1 keyboardState:(TIKeyboardState *)arg2 continuation:(void (^)(long long))arg3;
- (void)performHitTestForTouchEvent:(TIKeyboardTouchEvent *)arg1 keyboardState:(TIKeyboardState *)arg2 continuation:(void (^)(long long))arg3;
- (void)generateRefinementsForCandidate:(TIKeyboardCandidate *)arg1 keyboardState:(TIKeyboardState *)arg2 completionHandler:(void (^)(TIAutocorrectionList *))arg3;
- (void)generateReplacementsForString:(NSString *)arg1 keyLayout:(TIKeyboardLayout *)arg2 continuation:(void (^)(NSArray *))arg3;
- (void)handleAcceptedCandidate:(TIKeyboardCandidate *)arg1 keyboardState:(TIKeyboardState *)arg2 completionHandler:(void (^)(TIKeyboardConfiguration *, TIKeyboardOutput *))arg3;
- (void)generateCandidatesWithKeyboardState:(TIKeyboardState *)arg1 candidateRange:(NSRange)arg2 completionHandler:(void (^)(TIKeyboardCandidateResultSet *))arg3;
- (void)generateAutocorrectionsWithKeyboardState:(TIKeyboardState *)arg1 candidateRange:(NSRange)arg2 requestToken:(TICandidateRequestToken *)arg3 completionHandler:(void (^)(TIAutocorrectionList *))arg4;
- (void)generateAutocorrectionsWithKeyboardState:(TIKeyboardState *)arg1 candidateRange:(NSRange)arg2 completionHandler:(void (^)(TIAutocorrectionList *))arg3;
- (void)generateAutocorrectionsWithKeyboardState:(TIKeyboardState *)arg1 completionHandler:(void (^)(TIAutocorrectionList *))arg2;
- (void)handleKeyboardInput:(TIKeyboardInput *)arg1 keyboardState:(TIKeyboardState *)arg2 completionHandler:(void (^)(TIKeyboardOutput *, TIKeyboardConfiguration *))arg3;
- (void)syncToKeyboardState:(TIKeyboardState *)arg1 completionHandler:(void (^)(TIKeyboardConfiguration *))arg2;
@end

