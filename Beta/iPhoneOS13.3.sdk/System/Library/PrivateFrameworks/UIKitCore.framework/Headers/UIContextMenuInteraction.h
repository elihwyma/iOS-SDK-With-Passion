/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSMutableDictionary, NSString, UIContextMenuConfiguration, UIGestureRecognizer, UITargetedPreview, UIView, _UIClickPresentationInteraction, _UIContextMenuAnimator;

@protocol UIContextMenuInteractionDelegate;

@interface UIContextMenuInteraction : NSObject <Swift>

{
    struct {
        _Bool previewForHighlighting;
        _Bool previewForDismissing;
        _Bool willPerformPreviewActionForMenuWithConfiguration;
        _Bool willDisplayMenuForConfiguration;
        _Bool willEndForConfiguration;
        _Bool styleForMenuWithConfiguration;
        _Bool accessoriesForMenuWithConfiguration;
        _Bool asyncConfigurationForMenuAtLocation;
        _Bool overrideSuggestedActions;
        _Bool shouldAllowDragAfterDismiss;
        _Bool interactionEffectForTargetedPreview;
        _Bool shouldAttemptToPresentConfiguration;
        _Bool willCommit;
        _Bool willPresent;
        _Bool didEnd;
    } _delegateImplements;
    UIView *_view;
    id <UIContextMenuInteractionDelegate> _delegate;
    UIContextMenuConfiguration *_pendingConfiguration;
    NSMutableDictionary *_configurationsByIdentifier;
    NSMutableDictionary *_presentationsByIdentifier;
    _UIClickPresentationInteraction *_presentationInteraction;
    UITargetedPreview *_stashedPreview;
    _UIContextMenuAnimator *_pendingCommitAnimator;
}

@property (retain, nonatomic) UIContextMenuConfiguration *pendingConfiguration;
@property (retain, nonatomic) NSMutableDictionary *configurationsByIdentifier;
@property (retain, nonatomic) NSMutableDictionary *presentationsByIdentifier;
@property (retain, nonatomic) _UIClickPresentationInteraction *presentationInteraction;
@property (copy, nonatomic) UITargetedPreview *stashedPreview;
@property (retain, nonatomic) _UIContextMenuAnimator *pendingCommitAnimator;
@property (nonatomic) _Bool allowSimultaneousRecognition;
@property (nonatomic, readonly) UIGestureRecognizer *gestureRecognizerForFailureRelationships;
@property (weak, nonatomic, readonly) id <UIContextMenuInteractionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic, readonly) UIView *view;

+ (id)_deferredMenuPlaceholder;

- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (struct CGPoint)locationInView:(id)arg1;
- (void)willMoveToView:(id)arg1;
- (void)didMoveToView:(id)arg1;
- (id)targetedPreviewForAnimator:(id)arg1 dismissingWithStyle:(unsigned long long)arg2;
- (_Bool)_clickPresentationInteractionShouldAllowDragAfterDismiss:(id)arg1;
- (void)_clickPresentationInteractionEnded:(id)arg1 forPresentation:(id)arg2 reason:(unsigned long long)arg3;
- (id)clickPresentationInteraction:(id)arg1 presentationForPresentingViewController:(id)arg2;
- (void)_clickPresentationInteraction:(id)arg1 shouldBegin:(CDUnknownBlockType)arg2;
- (id)clickPresentationInteraction:(id)arg1 previewForHighlightingAtLocation:(struct CGPoint)arg2;
- (_Bool)_clickPresentationInteractionShouldAllowRapidRestart:(id)arg1;
- (id)_clickPresentationInteraction:(id)arg1 previewForCancellingDragItem:(id)arg2;
- (void)_clickPresentationInteraction:(id)arg1 item:(id)arg2 willAnimateDragCancelWithAnimator:(id)arg3;
- (void)_clickPresentationInteraction:(id)arg1 dragSessionDidEndForItems:(id)arg2;
- (id)_clickPresentationInteraction:(id)arg1 interactionEffectForTargetedPreview:(id)arg2;
- (void)_previewPlatterPresentationController:(id)arg1 beginDragWithTouch:(id)arg2;
- (void)_previewPlatterPresentationControllerWantsToBeDismissed:(id)arg1 withReason:(unsigned long long)arg2 alongsideActions:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_previewPlatterPresentationControllerDidBeginPanInteraction:(id)arg1;
- (void)_previewPlatterPresentationControllerDidEndPanInteraction:(id)arg1;
- (void)_previewPlatterPresentationControllerDidTapPreview:(id)arg1;
- (id)actualPlatterContainerViewForPresentationController:(id)arg1;
- (id)_accessoryViewsForPreviewPlatterPresentationController:(id)arg1;
- (void)_interactionShouldBeginAtLocation:(struct CGPoint)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_performCleanupForConfigurationWithIdentifier:(id)arg1;
- (id)_delegate_previewForHighlightingForConfiguration:(id)arg1;
- (id)_fulfilledConfigurationForConfiguration:(id)arg1;
- (id)_delegate_contextMenuInteractionWillDisplayForConfiguration:(id)arg1;
- (unsigned long long)_actualLayoutForPreferredLayout:(unsigned long long)arg1 withConfiguration:(id)arg2;
- (id)_suggestedMenuForConfiguration:(id)arg1;
- (id)_delegate_contextMenuInteractionWillEndForConfiguration:(id)arg1 presentation:(id)arg2;
- (id)_liveDragPreviewForConfiguration:(id)arg1 dragItem:(id)arg2;
- (void)_dragMorphDidCompleteForConfiguration:(id)arg1;
- (void)_delegate_tappedPreviewForConfiguration:(id)arg1 withAnimator:(id)arg2;
- (id)_delegate_previewForDismissingForConfiguration:(id)arg1;
- (id)_delegate_configurationForMenuAtLocation:(struct CGPoint)arg1;
- (void)_presentMenuAtLocation:(struct CGPoint)arg1;
- (void)dismissMenu;
- (void)_updateVisibleMenuWithBlock:(CDUnknownBlockType)arg1;

@end
