/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@class CKChatControllerDummyAnimator, CKSendAnimationContext, CKSendAnimationWindow, CKTranscriptTypingIndicatorCell, NSString;

@protocol CKSendAnimationBalloonProvider, CKSendAnimationManagerDelegate, CKThrowAnimationManagerDelegate;

@interface CKThrowAnimationManager : NSObject

{
    id <CKSendAnimationManagerDelegate> _sendAnimationManagerDelegate;
    id <CKSendAnimationBalloonProvider> _sendAnimationBalloonProvider;
    id <CKThrowAnimationManagerDelegate> _throwManagerDelegate;
    CKSendAnimationContext *_currentContext;
    CKSendAnimationWindow *_sendAnimationWindow;
    CKChatControllerDummyAnimator *_animator;
    CKTranscriptTypingIndicatorCell *_fakeTypingIndicatorCell;
}

@property (retain, nonatomic) CKSendAnimationContext *currentContext;
@property (retain, nonatomic) CKSendAnimationWindow *sendAnimationWindow;
@property (retain, nonatomic) CKChatControllerDummyAnimator *animator;
@property (retain, nonatomic) CKTranscriptTypingIndicatorCell *fakeTypingIndicatorCell;
@property (weak, nonatomic) id <CKThrowAnimationManagerDelegate> throwManagerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <CKSendAnimationManagerDelegate> sendAnimationManagerDelegate;
@property (weak, nonatomic) id <CKSendAnimationBalloonProvider> sendAnimationBalloonProvider;

- (id)init;
- (id)_collectionViewController;
- (void)_removeAllAnimations;
- (void)animateMessages:(id)arg1;
- (id)_entryView;
- (void)animationWillBeginWithContext:(id)arg1;
- (void)animationDidFinishWithContext:(id)arg1;
- (void)_setupFakeTypingIndicatorIfNecessary;
- (void)_snapshotLiveBubbleIfNecessary;
- (void)_sendMessageAndPinTranscript;
- (void)_removeFakeTypingIndicatorIfNecessary;
- (void)_setupThrowBalloonViews;
- (void)_setupThrowFrames;
- (void)_shiftFakeTypingIndicator;
- (void)_hideAddedChatItems;
- (struct CGPoint)bestVisibleOffsetForBubbleAtIndex:(long long)arg1;
- (_Bool)_transcriptWillShiftDueToThrowAnimation;
- (double)_changeInEntryViewHeight;

@end
