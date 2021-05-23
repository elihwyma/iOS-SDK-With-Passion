/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class CADisplayLink, NSString, UIPreviewInteraction, UIView, _UIDeepPressAnalyzer, _UIPreviewInteractionHighlighter, _UIPreviewInteractionStateRecognizer, _UIPreviewInteractionViewControllerHelper, _UIStatesFeedbackGenerator;

@protocol UIPreviewInteractionDelegate, _UIPreviewInteractionTouchForceProviding;

__attribute__((visibility("hidden")))
@interface _UIPreviewInteractionClassicImpl : NSObject

{
    UIView *_view;
    struct {
        unsigned int delegatePreviewInteractionShouldBegin:1;
        unsigned int delegateDidUpdateCommitTransition:1;
        unsigned int delegateShouldFinishTransitionToPreview:1;
        unsigned int delegateShouldAutomaticallyTransitionToPreviewAfterDelay:1;
        unsigned int delegateHighlighterForPreviewTransition:1;
        unsigned int delegateViewControllerPresentationForPresentingViewController:1;
        unsigned int interactive:1;
        unsigned int delegateDidPreventInteraction:1;
        unsigned int interactionRequiresRestart:1;
        unsigned int interactionWasCancelled:1;
        unsigned int previousProgressWasNegativeOrZero:1;
        unsigned int currentState:3;
        unsigned int nextUpdateShouldTransitionToPreview:1;
        unsigned int nextPreviewShouldPreventHapticFeedback:1;
    } _previewInteractionFlags;
    id <_UIPreviewInteractionTouchForceProviding> _systemTouchForceProvider;
    _UIPreviewInteractionStateRecognizer *_currentInteractionStateRecognizer;
    struct CGPoint _sceneReferenceLocationFromLatestUpdate;
    CADisplayLink *_continuousEvaluationDisplayLink;
    _UIDeepPressAnalyzer *_deepPressAnalyzer;
    _UIStatesFeedbackGenerator *_feedbackGenerator;
    _Bool _feedbackGeneratorTurnedOn;
    _UIPreviewInteractionHighlighter *_highlighter;
    _UIPreviewInteractionViewControllerHelper *_viewControllerHelper;
    id _viewControllerPresentationObserver;
    id <UIPreviewInteractionDelegate> _delegate;
    id <_UIPreviewInteractionTouchForceProviding> _touchForceProvider;
    UIPreviewInteraction *_previewInteraction;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <UIPreviewInteractionDelegate> delegate;
@property (weak, nonatomic, readonly) UIView *view;
@property (retain, nonatomic) id <_UIPreviewInteractionTouchForceProviding> touchForceProvider;
@property (weak, nonatomic) UIPreviewInteraction *previewInteraction;

- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)cancelInteraction;
- (struct CGPoint)locationInCoordinateSpace:(id)arg1;
- (id)initWithView:(id)arg1 previewInteraction:(id)arg2;
- (void)_startPreviewAtLocation:(struct CGPoint)arg1 inCoordinateSpace:(id)arg2;
- (id)_gestureRecognizerForExclusionRelationship;
- (void)_endContinuousEvaluation;
- (void)_updateForContinuousEvaluation:(id)arg1;
- (void)_turnOnFeedbackGenerator;
- (void)_turnOffFeedbackGenerator;
- (void)_dismissPreviewViewControllerIfNeeded;
- (void)_endHighlightingIfNeeded;
- (void)_endInteractionIfNeeded;
- (void)_updateForCurrentTouchForceProvider;
- (void)_prepareForInteractionIfNeeded;
- (void)_endUsingFeedbackIfNeeded;
- (void)_endViewControllerPresentationObserving;
- (void)_prepareUsingFeedbackIfNeeded;
- (void)_updateInteractionStateRecognizerForTouchForce:(double)arg1 atTimestamp:(double)arg2 withCentroidAtLocation:(struct CGPoint)arg3;
- (void)_prepareUsingFeedback;
- (void)_prepareHighlighterIfNeeded;
- (_Bool)_shouldCancelTransitionToState:(long long)arg1;
- (void)_actuateFeedbackForStateIfNeeded:(long long)arg1;
- (void)_updateHighlighter:(double)arg1;
- (void)_presentPreviewViewControllerIfNeeded;
- (void)_resetAfterInteraction;
- (void)_endInteractiveStateTransitions;
- (void)_updateFeedbackTowardNextState:(long long)arg1 progress:(double)arg2;
- (void)_prepareForViewControllerPresentationObserving;

@end
