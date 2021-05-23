/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSDNoDefaultImplicitActionLayer.h>

@class NSString, TSDCanvasView, TSDInteractiveCanvasController;

@interface TSDCanvasLayer : TSDNoDefaultImplicitActionLayer

{
    TSDInteractiveCanvasController *mController;
    struct CGSize mUnscaledSize;
    struct UIEdgeInsets mContentInset;
    double mViewScale;
    unsigned long long mViewScaleAnimationCount;
    unsigned long long mLayoutDisabledDepth;
    _Bool mAllowsPinchZoom;
    double mMinimumPinchViewScale;
    double mMaximumPinchViewScale;
    _Bool mShowsScaleFeedback;
    _Bool mIsInfinite;
    _Bool mHorizontallyCenteredInScrollView;
    _Bool mVerticallyCenteredInScrollView;
    _Bool mAvoidKeyboardWhenVerticallyCenteredInScrollView;
    _Bool _torndown;
    _Bool _createdByPresentationLayer;
}

@property (nonatomic) _Bool createdByPresentationLayer;
@property (nonatomic) _Bool torndown;
@property (nonatomic) TSDInteractiveCanvasController *controller;
@property (nonatomic) struct CGSize unscaledSize;
@property (nonatomic) double viewScale;
@property (nonatomic) _Bool allowsPinchZoom;
@property (nonatomic) double minimumPinchViewScale;
@property (nonatomic) double maximumPinchViewScale;
@property (nonatomic, readonly) struct CGPoint unscaledContentCenter;
@property (nonatomic, readonly) TSDCanvasView *canvasView;
@property (nonatomic) _Bool showsScaleFeedback;
@property (nonatomic, getter=isInfinite) _Bool infinite;
@property (nonatomic) struct UIEdgeInsets contentInset;
@property (nonatomic) _Bool centeredInScrollView;
@property (nonatomic) _Bool horizontallyCenteredInScrollView;
@property (nonatomic) _Bool verticallyCenteredInScrollView;
@property (nonatomic) _Bool avoidKeyboardWhenVerticallyCenteredInScrollView;
@property (nonatomic, readonly, getter=isLayoutDisabled) _Bool disableLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)teardown;
- (void)setNeedsLayout;
- (id)presentationLayer;
- (id)initWithLayer:(id)arg1;
- (void)keyboardDidChangeFrame:(id)arg1;
- (void)layoutSublayers;
- (void)keyboardWillChangeFrame:(id)arg1;
- (void)setNeedsLayoutForTilingLayers;
- (void)p_commonInit;
- (void)animateToViewScale:(double)arg1 contentCenter:(struct CGPoint)arg2 contentInset:(struct UIEdgeInsets)arg3 duration:(double)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)setViewScale:(double)arg1 andScrollViewFrame:(struct CGRect)arg2 maintainPosition:(_Bool)arg3 animated:(_Bool)arg4;
- (void)pushLayoutDisabled;
- (void)popLayoutDisabled;
- (void)layoutIfNeededIgnoringDisabledLayout;
- (void)setNeedsDisplayForDirtyTiles:(id)arg1;
- (void)p_scrollViewScrollerStyleDidChange:(id)arg1;
- (void)fixFrameAndScrollView;
- (struct CGRect)p_boundsRect;
- (void)p_fixFrameAndScrollView;
- (void)p_reenableDrawingAfterResumingFromBackground;
- (void)p_setViewScale:(double)arg1 preservingScrollOffset:(_Bool)arg2;
- (void)p_setEnclosingScrollViewZoomParameters;
- (struct CGPoint)p_contentOffsetForUnscaledContentCenter:(struct CGPoint)arg1 viewScale:(double)arg2 contentInset:(struct UIEdgeInsets)arg3;
- (struct CGRect)p_fixedBoundsForScrollViewSize:(struct CGSize)arg1 viewScale:(double)arg2 contentInset:(struct UIEdgeInsets)arg3;
- (void)p_setViewScale:(double)arg1;
- (struct CGPoint)contentOffsetForUnscaledContentCenter:(struct CGPoint)arg1;
- (void)animateToViewScale:(double)arg1 contentCenter:(struct CGPoint)arg2 contentInset:(struct UIEdgeInsets)arg3 duration:(double)arg4 animation:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (void)setScrollViewFrameMaintainingApparentScrollPosition:(struct CGRect)arg1 animated:(_Bool)arg2;
- (void)adjustContentInsets;
- (void)_adjustContentInsetsForKeyboard;
- (void)teardownWithoutClearingLayerDelegates;
- (void)setUnscaledSizeOnLayer:(struct CGSize)arg1;
- (void)setScrollViewFrameMaintainingApparentScrollPosition:(struct CGRect)arg1;

@end
