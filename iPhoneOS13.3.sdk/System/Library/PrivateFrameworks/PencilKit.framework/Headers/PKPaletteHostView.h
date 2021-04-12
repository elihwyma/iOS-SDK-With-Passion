//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PencilKit/PKPalettePencilInteractionFeedbackHostViewDelegate-Protocol.h>
#import <PencilKit/PKPaletteTransitionDelegate-Protocol.h>
#import <PencilKit/PKPaletteViewInternalDelegate-Protocol.h>

@class NSLayoutConstraint, PKColorPicker, PKPalettePencilInteractionFeedbackHostView, PKPaletteTransition, PKPaletteView, UILongPressGestureRecognizer, UIPanGestureRecognizer, UITapGestureRecognizer;
@protocol PKPaletteHostViewDelegate, PKPaletteHostingWindowScene;

@interface PKPaletteHostView : UIView <UIGestureRecognizerDelegate, PKPaletteViewInternalDelegate, UIPopoverPresentationControllerDelegate, PKPalettePencilInteractionFeedbackHostViewDelegate, PKPaletteTransitionDelegate>
{
    BOOL paletteDragging;
    BOOL paletteMinimized;
    BOOL _paletteVisible;
    BOOL _effectivePaletteVisible;
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
    CGPoint _draggingInitialPaletteCenterInSelf;
}

@property(readonly, nonatomic) __weak id <PKPaletteHostingWindowScene> hostingWindowScene; // @synthesize hostingWindowScene=_hostingWindowScene;
@property(retain, nonatomic) PKColorPicker *colorPickerPopover; // @synthesize colorPickerPopover=_colorPickerPopover;
@property(retain, nonatomic) PKPalettePencilInteractionFeedbackHostView *pencilInteractionFeedbackHostView; // @synthesize pencilInteractionFeedbackHostView=_pencilInteractionFeedbackHostView;
@property(retain, nonatomic) PKPaletteTransition *paletteTransition; // @synthesize paletteTransition=_paletteTransition;
@property(nonatomic) double paletteSizeScaleFactor; // @synthesize paletteSizeScaleFactor=_paletteSizeScaleFactor;
@property(nonatomic) CGPoint draggingInitialPaletteCenterInSelf; // @synthesize draggingInitialPaletteCenterInSelf=_draggingInitialPaletteCenterInSelf;
@property(nonatomic) long long draggingPendingPaletteVisualState; // @synthesize draggingPendingPaletteVisualState=_draggingPendingPaletteVisualState;
@property(nonatomic) long long lastNonCompactPalettePosition; // @synthesize lastNonCompactPalettePosition=_lastNonCompactPalettePosition;
@property(nonatomic) long long palettePosition; // @synthesize palettePosition=_palettePosition;
@property(nonatomic, setter=_setPaletteVisualState:) long long paletteVisualState; // @synthesize paletteVisualState=_paletteVisualState;
@property(nonatomic) long long paletteDraggingBehavior; // @synthesize paletteDraggingBehavior=_paletteDraggingBehavior;
@property(retain, nonatomic) UILongPressGestureRecognizer *touchDownFeedbackGestureRecognizer; // @synthesize touchDownFeedbackGestureRecognizer=_touchDownFeedbackGestureRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *tapToExpandPaletteFromMinimizedGestureRecognizer; // @synthesize tapToExpandPaletteFromMinimizedGestureRecognizer=_tapToExpandPaletteFromMinimizedGestureRecognizer;
@property(retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(retain, nonatomic) NSLayoutConstraint *paletteCenterYConstraint; // @synthesize paletteCenterYConstraint=_paletteCenterYConstraint;
@property(retain, nonatomic) NSLayoutConstraint *paletteCenterXConstraint; // @synthesize paletteCenterXConstraint=_paletteCenterXConstraint;
@property(retain, nonatomic) NSLayoutConstraint *paletteRightConstraint; // @synthesize paletteRightConstraint=_paletteRightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *paletteLeftConstraint; // @synthesize paletteLeftConstraint=_paletteLeftConstraint;
@property(retain, nonatomic) NSLayoutConstraint *paletteBottomConstraint; // @synthesize paletteBottomConstraint=_paletteBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *paletteTopConstraint; // @synthesize paletteTopConstraint=_paletteTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *paletteHeightConstraint; // @synthesize paletteHeightConstraint=_paletteHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *paletteWidthConstraint; // @synthesize paletteWidthConstraint=_paletteWidthConstraint;
@property(nonatomic, getter=isEffectivePaletteVisible) BOOL effectivePaletteVisible; // @synthesize effectivePaletteVisible=_effectivePaletteVisible;
@property(nonatomic) __weak id <PKPaletteHostViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isPaletteVisible) BOOL paletteVisible; // @synthesize paletteVisible=_paletteVisible;
@property(readonly, nonatomic) PKPaletteView *paletteView; // @synthesize paletteView=_paletteView;
// - (void).cxx_destruct;
- (double)paletteEdgeSpacingForMinimized;
- (double)paletteEdgeSpacing;
- (double)paletteSpringAnimationResponse;
- (double)paletteSpringAnimationDampingRatio;
- (double)paletteBorderWidth;
- (double)paletteShadowRadius;
- (double)paletteShadowOpacity;
- (CGSize)paletteShadowOffset;
- (id)paletteBorderColor;
- (id)paletteShadowColor;
- (CGSize)regularPaletteSize;
- (CGSize)minimizedPaletteSize;
- (double)minimizedPaletteScaleFactor;
- (void)paletteViewShowFeedbackForToolChange:(id)arg1;
- (void)paletteView:(id)arg1 didChangeAnnotationSupport:(BOOL)arg2;
- (CGSize)paletteSizeForEdge:(NSUInteger)arg1;
- (void)paletteView:(id)arg1 didToggleAutoHideOption:(BOOL)arg2;
@property(readonly, nonatomic) UIView *hostingView;
- (BOOL)_shouldBeCompact;
- (void)traitCollectionDidChange:(id)arg1;
- (BOOL)_isPaletteAnimating;
- (CGSize)_paletteSizeForVisualState:(long long)arg1;
- (CGSize)_minimizedPaletteSize;
- (void)_updatePaletteSizeAnimated:(BOOL)arg1;
- (void)_updateToolPreviewRotationAnimated:(BOOL)arg1;
- (void)_updateToolPreviewMinimizedStateAnimated:(BOOL)arg1;
- (void)_performAnimated:(BOOL)arg1 tracking:(BOOL)arg2 animations:(id /* CDUnknownBlockType */)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (void)transitionExpandedToCollapsedRatioDidChange:(id)arg1;
- (void)transitionPointingDirectionDidChange:(id)arg1;
- (void)transitionIntermediateVisualStateDidChange:(id)arg1;
- (CGPoint)_projectedLandingPointForGestureRecognizerEnd:(id)arg1;
- (void)_processPendingDraggingTransition;
- (void)_scheduleDraggingTransitionToVisualState:(long long)arg1;
- (void)_panGestureHandler:(id)arg1;
- (void)_deactivatePaletteEdgeConstraints;
- (void)_activatePaletteCenterConstraints;
- (void)_deactivatePaletteCenterConstraints;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)_tapToExpandPaletteFromMinimizedGestureHandler:(id)arg1;
- (void)_touchDownFeedbackGestureHandler:(id)arg1;
- (void)_paletteDidDockToPosition:(long long)arg1;
- (void)_paletteWillDockToPosition:(long long)arg1 prepareForExpansion:(BOOL)arg2;
- (void)_updateConstraintsToDockPaletteToPosition:(long long)arg1;
- (void)_dockPaletteToPosition:(long long)arg1 animated:(BOOL)arg2;
- (void)_updatePaletteHeightConstraint;
- (void)_updateConstraintsToFixToBottomEdge;
- (void)_fixToBottomEdge;
- (void)safeAreaInsetsDidChange;
- (void)layoutSubviews;
- (void)_updatePaletteContentAlpha;
- (void)_updatePaletteViewSizeConstraints;
- (void)_updatePaletteAppearance;
@property(readonly, nonatomic, getter=isPaletteDragging) BOOL paletteDragging; // @synthesize paletteDragging;
@property(readonly, nonatomic, getter=isPaletteMinimized) BOOL paletteMinimized; // @synthesize paletteMinimized;
- (void)_setPaletteVisualState:(long long)arg1 usingTransition:(BOOL)arg2;
- (double)_currentWindowSceneScaleFactor;
- (void)_updatePaletteScaleFactor;
- (void)windowSceneDidChangeBounds:(id)arg1;
- (void)setPaletteVisible:(BOOL)arg1 animated:(BOOL)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)_cancelPanGestureIfNecessary;
- (void)_installPencilInteractionFeedbackHostViewIfNeeded;
- (void)didMoveToWindow;
- (id)initWithHostingWindowScene:(id)arg1;

@end

