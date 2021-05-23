/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIPercentDrivenInteractiveTransition.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSDictionary, NSMutableDictionary, NSString, UIInteractionProgress, _UIStatesFeedbackGenerator;

@protocol UIViewControllerContextTransitioning;

__attribute__((visibility("hidden")))
@interface _UIPreviewTransitionController : UIPercentDrivenInteractiveTransition <Swift>

{
    UIInteractionProgress *_interactionProgress;
    unsigned long long _targetPresentationPhase;
    NSDictionary *_viewsParticipatingInCommitTransition;
    _UIStatesFeedbackGenerator *_feedbackGenerator;
    NSMutableDictionary *_animationsByPresentationPhase;
    id <UIViewControllerContextTransitioning> _transitionContext;
}

@property (retain, nonatomic) UIInteractionProgress *interactionProgress;
@property (nonatomic) unsigned long long targetPresentationPhase;
@property (retain, nonatomic) NSMutableDictionary *animationsByPresentationPhase;
@property (weak, nonatomic) id <UIViewControllerContextTransitioning> transitionContext;
@property (retain, nonatomic) NSDictionary *viewsParticipatingInCommitTransition;
@property (retain, nonatomic) _UIStatesFeedbackGenerator *feedbackGenerator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) double completionSpeed;
@property (nonatomic, readonly) long long completionCurve;
@property (nonatomic, readonly) _Bool wantsInteractiveStart;

+ (id)performCommitTransitionWithDelegate:(id)arg1 forViewController:(id)arg2 previewViewController:(id)arg3 previewInteractionController:(id)arg4 completion:(CDUnknownBlockType)arg5;

- (id)init;
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (void)animationEnded:(_Bool)arg1;
- (void)startInteractiveTransition:(id)arg1;
- (void)cancelInteractiveTransition;
- (void)finishInteractiveTransition;
- (void)updateInteractiveTransition:(double)arg1;
- (void)interactionProgressDidUpdate:(id)arg1;
- (void)interactionProgress:(id)arg1 didEnd:(_Bool)arg2;
- (id)initWithInteractionProgress:(id)arg1 targetPresentationPhase:(unsigned long long)arg2;
- (void)setAnimations:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2 forPresentationPhase:(unsigned long long)arg3;
- (void)_layoutForPresentationPhase:(unsigned long long)arg1;
- (void)_completeAnimationWithPresentationPhase:(unsigned long long)arg1 finished:(_Bool)arg2;
- (void)_animateRevealTransition:(id)arg1;
- (void)_animateCommitTransition:(id)arg1;
- (void)_animateDismissTransition:(id)arg1;
- (void)_animatePreviewTransition:(id)arg1;

@end
