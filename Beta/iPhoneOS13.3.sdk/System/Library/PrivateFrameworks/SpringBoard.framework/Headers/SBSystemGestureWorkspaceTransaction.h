/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBMainWorkspaceTransaction.h>

@class NSString, UIGestureRecognizer;

@interface SBSystemGestureWorkspaceTransaction : SBMainWorkspaceTransaction

{
    NSString *_suppressionReason;
    UIGestureRecognizer *_gestureRecognizer;
    long long _completionType;
}

@property (retain, nonatomic) UIGestureRecognizer *gestureRecognizer;
@property (nonatomic, readonly) long long completionType;

- (void)_begin;
- (void)_didComplete;
- (void)_beginAnimation;
- (void)_setupAnimation;
- (id)initWithTransitionRequest:(id)arg1;
- (void)_finishWithCompletionType:(long long)arg1;
- (void)finishWithCompletionType:(long long)arg1;
- (void)systemGestureStateChanged:(id)arg1;
- (_Bool)shouldSuppressMedusaKeyboardDuringGesture;

@end
