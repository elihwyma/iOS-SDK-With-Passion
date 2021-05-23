/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <UIKit/UIView.h>

#import <PencilKit/Swift-Protocol.h>

@class NSLayoutConstraint, NSString, PKColorPicker, PKPalettePencilInteractionFeedbackHostView, PKPaletteTransition, PKPaletteView, UILongPressGestureRecognizer, UIPanGestureRecognizer, UITapGestureRecognizer;

@protocol PKPaletteHostViewDelegate, PKPaletteHostingWindowScene;

@interface PKPaletteHostView : UIView <Swift>

{
    _Bool paletteDragging;
    _Bool paletteMinimized;
    _Bool _paletteVisible;
    _Bool _effectivePaletteVisible;
    PKPaletteView *_paletteView;
    id <PKPaletteHostViewDelegate> _delegate;
    NSLayoutConstraint *_paletteWidthConstraint;
    NSLayoutConstraint *_paletteHeightConstraint;
    NSLayoutConstraint *_paletteTopConstraint;
    NSLayoutConstraint *_paletteBottomConstraint;
    NSLayoutConstraint *_paletteLeftConstraint;
    NSLayoutConstraint *_paletteRightConstraint;
    NSLayoutConstraint *_paletteCenterXConstraint;
    NSLayoutConstraint *_paletteCenterYConstraint;
    UIPanGestureRecognizer *_panGestureRecognizer;
    UITapGestureRecognizer *_tapToExpandPaletteFromMinimizedGestureRecognizer;
    UILongPressGestureRecognizer *_touchDownFeedbackGestureRecognizer;
    long long _paletteDraggingBehavior;
    long long _paletteVisualState;
    long long _palettePosition;
    long long _lastNonCompactPalettePosition;
    long long _draggingPendingPaletteVisualState;
    double _paletteSizeScaleFactor;
    PKPaletteTransition *_paletteTransition;
    PKPalettePencilInteractionFeedbackHostView *_pencilInteractionFeedbackHostView;
    PKColorPicker *_colorPickerPopover;
    id <PKPaletteHostingWindowScene> _hostingWindowScene;
    struct CGPoint _draggingInitialPaletteCenterInSelf;
}

@property (weak, nonatomic) id <PKPaletteHostViewDelegate> delegate;
@property (nonatomic, getter=isPaletteVisible) _Bool paletteVisible;
@property (nonatomic, getter=isEffectivePaletteVisible) _Bool effectivePaletteVisible;
@property (retain, nonatomic) NSLayoutConstraint *paletteWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *paletteHeightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *paletteTopConstraint;
@property (retain, nonatomic) NSLayoutConstraint *paletteBottomConstraint;
@property (retain, nonatomic) NSLayoutConstraint *paletteLeftConstraint;
@property (retain, nonatomic) NSLayoutConstraint *paletteRightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *paletteCenterXConstraint;
@property (retain, nonatomic) NSLayoutConstraint *paletteCenterYConstraint;
@property (retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer;
@property (retain, nonatomic) UITapGestureRecognizer *tapToExpandPaletteFromMinimizedGestureRecognizer;
@property (retain, nonatomic) UILongPressGestureRecognizer *touchDownFeedbackGestureRecognizer;
@property (nonatomic) long long paletteDraggingBehavior;
@property (nonatomic, setter=_setPaletteVisualState:) long long paletteVisualState;
@property (nonatomic) long long palettePosition;
@property (nonatomic) long long lastNonCompactPalettePosition;
@property (nonatomic) long long draggingPendingPaletteVisualState;
@property (nonatomic) struct CGPoint draggingInitialPaletteCenterInSelf;
@property (nonatomic) double paletteSizeScaleFactor;
@property (retain, nonatomic) PKPaletteTransition *paletteTransition;
@property (retain, nonatomic) PKPalettePencilInteractionFeedbackHostView *pencilInteractionFeedbackHostView;
@property (retain, nonatomic) PKColorPicker *colorPickerPopover;
@property (weak, nonatomic, readonly) id <PKPaletteHostingWindowScene> hostingWindowScene;
@property (nonatomic, readonly) PKPaletteView *paletteView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UIView *hostingView;
@property (nonatomic, readonly, getter=isPaletteMinimized) _Bool paletteMinimized;
@property (nonatomic, readonly, getter=isPaletteDragging) _Bool paletteDragging;

- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)safeAreaInsetsDidChange;
- (void)didMoveToWindow;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGSize)paletteSizeForEdge:(unsigned long long)arg1;
- (void)paletteView:(id)arg1 didChangeAnnotationSupport:(_Bool)arg2;
- (void)paletteView:(id)arg1 didToggleAutoHideOption:(_Bool)arg2;
- (void)paletteViewShowFeedbackForToolChange:(id)arg1;
- (void)_panGestureHandler:(id)arg1;
- (void)_tapToExpandPaletteFromMinimizedGestureHandler:(id)arg1;
- (void)_touchDownFeedbackGestureHandler:(id)arg1;
- (void)_updatePaletteScaleFactor;
- (_Bool)_shouldBeCompact;
- (void)_fixToBottomEdge;
- (void)_dockPaletteToPosition:(long long)arg1 animated:(_Bool)arg2;
- (void)setPaletteVisible:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_cancelPanGestureIfNecessary;
- (void)_updateConstraintsToFixToBottomEdge;
- (void)_updateConstraintsToDockPaletteToPosition:(long long)arg1;
- (void)_performAnimated:(_Bool)arg1 tracking:(_Bool)arg2 animations:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (double)_currentWindowSceneScaleFactor;
- (void)_updatePaletteViewSizeConstraints;
- (void)_setPaletteVisualState:(long long)arg1 usingTransition:(_Bool)arg2;
- (void)_updatePaletteSizeAnimated:(_Bool)arg1;
- (void)_updateToolPreviewRotationAnimated:(_Bool)arg1;
- (void)_updateToolPreviewMinimizedStateAnimated:(_Bool)arg1;
- (void)_updatePaletteContentAlpha;
- (void)_updatePaletteAppearance;
- (struct CGSize)_paletteSizeForVisualState:(long long)arg1;
- (void)_updatePaletteHeightConstraint;
- (void)_paletteWillDockToPosition:(long long)arg1 prepareForExpansion:(_Bool)arg2;
- (void)_deactivatePaletteCenterConstraints;
- (void)_deactivatePaletteEdgeConstraints;
- (void)_paletteDidDockToPosition:(long long)arg1;
- (void)_scheduleDraggingTransitionToVisualState:(long long)arg1;
- (void)_activatePaletteCenterConstraints;
- (struct CGPoint)_projectedLandingPointForGestureRecognizerEnd:(id)arg1;
- (void)_processPendingDraggingTransition;
- (struct CGSize)_minimizedPaletteSize;
- (void)_installPencilInteractionFeedbackHostViewIfNeeded;
- (struct CGSize)regularPaletteSize;
- (struct CGSize)minimizedPaletteSize;
- (double)paletteEdgeSpacing;
- (double)paletteEdgeSpacingForMinimized;
- (double)minimizedPaletteScaleFactor;
- (id)paletteShadowColor;
- (struct CGSize)paletteShadowOffset;
- (double)paletteShadowOpacity;
- (double)paletteShadowRadius;
- (id)paletteBorderColor;
- (double)paletteBorderWidth;
- (double)paletteSpringAnimationDampingRatio;
- (double)paletteSpringAnimationResponse;
- (void)transitionIntermediateVisualStateDidChange:(id)arg1;
- (void)transitionPointingDirectionDidChange:(id)arg1;
- (void)transitionExpandedToCollapsedRatioDidChange:(id)arg1;
- (id)initWithHostingWindowScene:(id)arg1;
- (void)windowSceneDidChangeBounds:(id)arg1;
- (_Bool)_isPaletteAnimating;

@end
