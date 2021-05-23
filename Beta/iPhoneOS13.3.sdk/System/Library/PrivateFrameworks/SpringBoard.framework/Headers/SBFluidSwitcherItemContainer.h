/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoardFoundation/SBFTouchPassThroughView.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSArray, NSString, SBAppSwitcherPageView, SBAppSwitcherSettings, SBFFluidBehaviorSettings, SBFailureNotifyingTapGestureRecognizer, SBFluidSwitcherIconOverlayView, SBFluidSwitcherItemContainerHeaderView, SBFluidSwitcherTouchPassThroughScrollView, UILongPressGestureRecognizer, UITapGestureRecognizer, UIView;

@protocol SBAppSwitcherPageContentView, SBFluidSwitcherItemContainerDelegate;

@interface SBFluidSwitcherItemContainer : SBFTouchPassThroughView <Swift>

{
    SBAppSwitcherPageView *_pageView;
    id <SBFluidSwitcherItemContainerDelegate> _delegate;
    SBFluidSwitcherTouchPassThroughScrollView *_killScrollView;
    SBFluidSwitcherItemContainerHeaderView *_iconAndLabelHeader;
    SBFluidSwitcherIconOverlayView *_iconOverlayView;
    struct UIRectCornerRadii _contentCornerRadii;
    double _contentPageViewScale;
    double _titleOpacity;
    double _titleAndIconOpacity;
    UILongPressGestureRecognizer *_pressDownGestureRecognizer;
    UILongPressGestureRecognizer *_selectionHighlightGestureRecognizer;
    SBFailureNotifyingTapGestureRecognizer *_tapGestureRecognizer;
    UITapGestureRecognizer *_doubleTapGestureRecognizer;
    SBFFluidBehaviorSettings *_squishSettings;
    SBAppSwitcherSettings *_settings;
    _Bool _sentKillRequest;
    struct CGPoint _highlightTapDownLocation;
    _Bool _highlighted;
    _Bool _animatingPageViewScale;
    double _killProgressForCurrentDecelerationTarget;
    _Bool _dragging;
    _Bool _clipsToUnobscuredMargin;
    _Bool _killable;
    _Bool _shouldScaleOverlayToFillBounds;
    _Bool _active;
    _Bool _visible;
    double _unobscuredMargin;
    unsigned long long _killAxis;
    double _minimumTranslationForKillingContainer;
    double _contentAlpha;
    NSString *_additionalDescriptionDebugText;
    NSArray *_headerItems;
}

@property (nonatomic, getter=isHighlighted) _Bool highlighted;
@property (weak, nonatomic) id <SBFluidSwitcherItemContainerDelegate> delegate;
@property (retain, nonatomic) UIView<SBAppSwitcherPageContentView> *contentView;
@property (nonatomic) struct UIRectCornerRadii contentCornerRadii;
@property (nonatomic) double contentPageViewScale;
@property (nonatomic) double titleAndIconOpacity;
@property (nonatomic) double titleOpacity;
@property (nonatomic) double unobscuredMargin;
@property (nonatomic) _Bool clipsToUnobscuredMargin;
@property (nonatomic) double darkeningAlpha;
@property (nonatomic) double wallpaperOverlayAlpha;
@property (nonatomic) double lighteningAlpha;
@property (nonatomic) unsigned long long killAxis;
@property (nonatomic, getter=isKillable) _Bool killable;
@property (nonatomic) double minimumTranslationForKillingContainer;
@property (nonatomic) _Bool shouldScaleOverlayToFillBounds;
@property (nonatomic) _Bool blocksContentViewTouches;
@property (retain, nonatomic) UIView *contentOverlay;
@property (nonatomic) double contentAlpha;
@property (nonatomic, readonly) double killingProgress;
@property (nonatomic, readonly) _Bool isDeceleratingTowardsKillZone;
@property (nonatomic) double shadowAlpha;
@property (nonatomic) double shadowOffset;
@property (nonatomic) long long shadowStyle;
@property (nonatomic, getter=isActive) _Bool active;
@property (nonatomic, getter=isVisible) _Bool visible;
@property (copy, nonatomic) NSString *additionalDescriptionDebugText;
@property (copy, nonatomic) NSArray *headerItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, getter=isDragging) _Bool dragging;

+ (double)preferredRestingVisibleMarginForBounds:(struct CGRect)arg1;

- (id)initWithCoder:(id)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (id)sourceView;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (_Bool)_scrollViewShouldPanGestureTryToBegin:(id)arg1;
- (struct CGRect)_frameForScrollView;
- (double)_killingDarkeningAlpha;
- (struct CGSize)_overlayViewSize;
- (void)setContentOverlay:(id)arg1 animated:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2 active:(_Bool)arg3;
- (void)setHeaderItems:(id)arg1 animated:(_Bool)arg2;
- (void)configureOverlayForIconZoomWithView:(id)arg1;
- (void)removeIconOverlay;
- (id)_createScrollView;
- (void)_addPageView;
- (void)_handleSelectionHighlightGesture:(id)arg1;
- (void)_handlePageViewPressDown:(id)arg1;
- (void)_handlePageViewTap:(id)arg1;
- (void)_resetKillProgressScrollState;
- (void)_updateShadowVisibility;
- (void)_updateHeaderAnimated:(_Bool)arg1;
- (void)_updatePageViewContentClippingFrame;
- (void)_updatePageViewContentViewClipping;
- (struct CGRect)_frameForPageView;
- (double)_killingProgressForContentOffset:(struct CGPoint)arg1;
- (double)_CGPointXOrYBasedOnKillAxis:(struct CGPoint)arg1;
- (struct CGPoint)_contentOffsetAtRest;
- (double)_CGSizeWidthOrHeightBasedOnKillAxis:(struct CGSize)arg1;
- (struct CGPoint)_CGPointFromScalarBasedOnKillAxis:(double)arg1;
- (struct CGSize)_contentSizeForScrollView;
- (struct CGPoint)_contentOffsetForKillingProgress:(double)arg1;
- (double)_inverseScaleTransformFactor;
- (double)_scaleTransformFactor;
- (void)_ensureSubviewOrder;
- (struct CGSize)_CGSizeFromLengthBasedOnKillAxis:(double)arg1;
- (struct CGAffineTransform)_squishedPageViewScaleTransform;
- (void)gestureRecognizerTransitionedToFailed:(id)arg1;
- (id)initialCornerRadiusConfiguration;
- (struct SBDragPreviewShadowParameters)initialDiffuseShadowParameters;
- (struct SBDragPreviewShadowParameters)initialRimShadowParameters;
- (id)initialDiffuseShadowFilters;
- (id)initialRimShadowFilters;
- (id)containerViewForBlurContentView;
- (_Bool)_isTitleIconVisible;
- (void)_setKillingDarkeningAlpha:(double)arg1;
- (id)_springLoadingEffectTargetView;

@end
