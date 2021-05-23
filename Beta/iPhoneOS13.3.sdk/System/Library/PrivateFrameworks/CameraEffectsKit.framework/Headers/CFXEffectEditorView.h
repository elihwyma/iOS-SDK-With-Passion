/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <UIKit/UIView.h>

@class CADisplayLink, CFXEffect, CFXFaceReticleView, JTEffectAnimationView, JTEffectsPreviewGenerator, JTImageView, JTOverlayDebugView, JTTextEffectEditorView, NSMutableArray, NSObject, NSString, UIButton;

@protocol CFXEffectEditorViewDelegate, OS_dispatch_queue;

@interface CFXEffectEditorView : UIView

{
    _Bool _displayLinkBusyOnRenderQueue;
    _Bool _isRenderingEditEffect;
    _Bool _isRenderPendingForEditEffect;
    _Bool _isTextEditing;
    _Bool _isEditing;
    _Bool _effectWasEdited;
    _Bool _truncateTextToMaximumLength;
    _Bool _isEndingEditing;
    _Bool _isBeginningEditing;
    id <CFXEffectEditorViewDelegate> _delegate;
    unsigned long long _mode;
    CFXEffect *_editEffect;
    double _displayScale;
    UIButton *_removeButton;
    JTOverlayDebugView *_debugOverlayView;
    JTTextEffectEditorView *_textEditorView;
    JTEffectsPreviewGenerator *_previewGenerator;
    JTImageView *_editEffectPreview;
    NSObject<OS_dispatch_queue> *_effectRenderingQueue;
    NSString *_oldEditText;
    unsigned long long _maximumTextLength;
    CADisplayLink *_editControlsTrackingDisplayLink;
    CFXFaceReticleView *_faceTrackingReticle;
    JTEffectAnimationView *_effectAnimationView;
    CADisplayLink *_effectAnimationDisplayLink;
    unsigned long long _appliedEditingGestures;
    double _lastFaceRectacleUpdateTime;
    double _lastEffectMovedNotifyTime;
    NSMutableArray *_beginEditingCompletionBlocks;
    NSMutableArray *_endEditingCompletionBlocks;
    struct CGPoint _lastTouchLocation;
    struct CGPoint _lastSpacingBetweenTouchAndCenterOfEffect;
    struct CGAffineTransform _editTransform;
}

@property (retain, nonatomic) CFXEffect *editEffect;
@property (nonatomic) _Bool isEditing;
@property (nonatomic) _Bool isTextEditing;
@property (nonatomic) struct CGAffineTransform editTransform;
@property (nonatomic) double displayScale;
@property (nonatomic) _Bool effectWasEdited;
@property (retain, nonatomic) UIButton *removeButton;
@property (retain, nonatomic) JTOverlayDebugView *debugOverlayView;
@property (retain, nonatomic) JTTextEffectEditorView *textEditorView;
@property (retain, nonatomic) JTEffectsPreviewGenerator *previewGenerator;
@property (retain, nonatomic) JTImageView *editEffectPreview;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *effectRenderingQueue;
@property (retain, nonatomic) NSString *oldEditText;
@property (nonatomic) _Bool truncateTextToMaximumLength;
@property (nonatomic) unsigned long long maximumTextLength;
@property (retain, nonatomic) CADisplayLink *editControlsTrackingDisplayLink;
@property (retain, nonatomic) CFXFaceReticleView *faceTrackingReticle;
@property (nonatomic) struct CGPoint lastTouchLocation;
@property (nonatomic) struct CGPoint lastSpacingBetweenTouchAndCenterOfEffect;
@property (retain, nonatomic) JTEffectAnimationView *effectAnimationView;
@property (retain, nonatomic) CADisplayLink *effectAnimationDisplayLink;
@property (nonatomic) unsigned long long appliedEditingGestures;
@property (nonatomic) double lastFaceRectacleUpdateTime;
@property (nonatomic) double lastEffectMovedNotifyTime;
@property (nonatomic) _Bool isEndingEditing;
@property (nonatomic) _Bool isBeginningEditing;
@property (retain, nonatomic) NSMutableArray *beginEditingCompletionBlocks;
@property (retain, nonatomic) NSMutableArray *endEditingCompletionBlocks;
@property (weak, nonatomic) id <CFXEffectEditorViewDelegate> delegate;
@property (nonatomic, readonly) unsigned long long mode;
@property (nonatomic, readonly) struct CGRect textEditingFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)layoutSubviews;
- (void)didRotate:(id)arg1;
- (void)didTap:(id)arg1;
- (void)handlePanGesture:(id)arg1;
- (void)handlePinchGesture:(id)arg1;
- (void)didPan:(id)arg1;
- (void)handleRotateGesture:(id)arg1;
- (id)initWithMode:(unsigned long long)arg1 delegate:(id)arg2;
- (void)beginEditingEffect:(id)arg1;
- (void)endEditingAnimated:(_Bool)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)beginTextEditing;
- (void)beginEditingEffect:(id)arg1 animated:(_Bool)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (void)notifyEffectTransformDidChange;
- (void)notifyEffectTrackingDidChangeToType:(int)arg1;
- (void)CFX_setupGestures;
- (void)CFX_setupControls;
- (void)CFX_setUserInteractionEnabledIfPossible:(_Bool)arg1;
- (void)CFX_effectPreviewBoundsDidChange;
- (void)CFX_updateEditControlsLayout;
- (void)CFX_updateTextEditFieldLayout;
- (void)CFX_previewEditEffectIfNeeded;
- (void)didPinch:(id)arg1;
- (_Bool)CFX_isPreviewingEditEffect;
- (void)CFX_endEditingEffect;
- (void)CFX_beginEditingEffect:(id)arg1 isAnimating:(_Bool)arg2;
- (void)CFX_beginTextEditing;
- (void)CFX_hideEditControls;
- (void)CFX_scaleEffect:(double)arg1;
- (void)CFX_showEditControls;
- (void)CFX_rotateEffect:(double)arg1;
- (void)updateSpacingBetweenTouchAndCenterOfEffectWithGesture:(id)arg1;
- (void)CFX_updateExternalEffectTrackingRunningState;
- (void)CFX_addBeginEditingCompletionBlock:(CDUnknownBlockType)arg1;
- (void)CFX_performTextEditOnlyModeEnterAnimationWithCompletionBlock:(CDUnknownBlockType)arg1;
- (_Bool)CFX_useFaceReticle;
- (void)CFX_addEndEditingCompletionBlock:(CDUnknownBlockType)arg1;
- (void)CFX_stopTrackingExternalEffectChanges;
- (void)CFX_performTextEditOnlyModeExitAnimationWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)CFX_endTextEditing:(_Bool)arg1;
- (struct CGRect)CFX_textEditingFrame;
- (void)CFX_beginPreviewingEditEffect;
- (void)CFX_endPreviewingEditEffect;
- (void)CFX_applyEffectTransformChanges;
- (struct CGRect)CFX_boundsInPixels;
- (_Bool)CFX_isRemoveAvailableInCurrentMode;
- (void)tapRemoveButton:(id)arg1;
- (void)CFX_hideEditControls:(_Bool)arg1;
- (_Bool)CFX_isRemoveAlwaysAvailableInCurrentMode;
- (void)CFX_updateDebugOverlayViews;
- (void)CFX_removeEffect;
- (void)externalEffectTrackingDisplayLinkFired:(id)arg1;
- (void)CFX_startTrackingExternalEffectChanges;
- (_Bool)CFX_updateOverlayForTranslation;
- (_Bool)CFX_updateTrackingTypeForTouchLocation;
- (id)CFX_getTextEditingProperties;
- (void)CFX_updateEffectText:(id)arg1 updateTextProperties:(_Bool)arg2;
- (void)CFX_effectAnimationDisplayLinkFired:(id)arg1;
- (void)CFX_applyEffectAnimationView;
- (void)CFX_startApplyingEffectAnimationViewDisplayLink;
- (id)CFX_springForTextEditAnimation;
- (void)CFX_stopApplyingEffectAnimationViewDisplayLink;
- (void)CFX_forceHideEditControls;
- (_Bool)isDrawOverlayBoundsOptionShowAdditionalRectsEnabled;
- (void)textEffectEditorView:(id)arg1 textChanged:(id)arg2 shouldUpdateTextEditingProperties:(_Bool)arg3;
- (_Bool)textEffectEditorView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (id)overlayDebugViewShowDocumentBoundingBox;
- (id)overlayDebugViewShowObjectAlignedBoundingBox;
- (id)overlayDebugViewShowMidpoint;
- (id)overlayDebugViewShowCornerPoints;
- (id)overlayDebugViewShowNonTrackedWhenTracking;
- (id)overlayDebugViewAdditionalNonTrackedRectsToDraw;
- (id)overlayDebugViewAdditionalTrackedRectsToDraw;
- (void)endTextEditing:(_Bool)arg1;

@end
