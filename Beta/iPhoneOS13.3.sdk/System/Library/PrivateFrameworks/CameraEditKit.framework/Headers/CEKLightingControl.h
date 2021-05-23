/*
 Image: /System/Library/PrivateFrameworks/CameraEditKit.framework/CameraEditKit
 */

#import <UIKit/UIView.h>

@class CEKAnimationGenerator, CEKLightingDialBackground, CEKLightingFrameCache, CEKLightingNameBadge, CEKSelectionFeedbackGenerator, NSArray, NSDate, NSDictionary, NSSet, NSString, NSTimer, UIImageView, UILongPressGestureRecognizer, UIPanGestureRecognizer, UITapGestureRecognizer;

@protocol CEKLightingControlDelegate;

@interface CEKLightingControl : UIView

{
    struct {
        _Bool respondsToWillChangeExpanded;
        _Bool respondsToDidChangeExpanded;
    } _delegateFlags;
    _Bool _tracking;
    _Bool _expanded;
    _Bool _highlighted;
    _Bool _nameBadgeHidden;
    id <CEKLightingControlDelegate> _delegate;
    long long _lightingEffectSet;
    long long _selectedLightingType;
    long long _orientation;
    NSArray *__effectTypes;
    NSSet *__enabledEffectTypes;
    NSDictionary *__effectItemsForType;
    double __selectionAngularOffset;
    unsigned long long __selectionIndex;
    CEKLightingFrameCache *__frameCache;
    NSDictionary *__itemViewsForType;
    NSDictionary *__itemShadowViewsForType;
    NSDictionary *__itemOutlineViewsForType;
    CEKLightingDialBackground *__backgroundView;
    UIImageView *__selectionOverlay;
    UIImageView *__selectionUnderlay;
    CEKLightingNameBadge *__nameBadge;
    UIPanGestureRecognizer *__panGesture;
    UILongPressGestureRecognizer *__pressGesture;
    UITapGestureRecognizer *__tapGesture;
    NSDate *__timeTrackingBegan;
    CEKAnimationGenerator *__animationGenerator;
    NSTimer *__collapseTimer;
    unsigned long long __expandedAnimationCounter;
    CEKSelectionFeedbackGenerator *__selectionFeedbackGenerator;
    CDStruct_4fab6026 _collapsedItemFading;
}

@property (nonatomic, readonly) NSArray *_effectTypes;
@property (retain, nonatomic) NSSet *_enabledEffectTypes;
@property (retain, nonatomic, setter=_setEffectItemsForType:) NSDictionary *_effectItemsForType;
@property (nonatomic, setter=_setSelectionAngularOffset:) double _selectionAngularOffset;
@property (nonatomic, readonly) unsigned long long _selectionIndex;
@property (nonatomic, readonly) CEKLightingFrameCache *_frameCache;
@property (retain, nonatomic, setter=_setItemViewsForType:) NSDictionary *_itemViewsForType;
@property (retain, nonatomic, setter=_setItemShadowViewsForType:) NSDictionary *_itemShadowViewsForType;
@property (retain, nonatomic, setter=_setItemOutlineViewsForType:) NSDictionary *_itemOutlineViewsForType;
@property (retain, nonatomic, setter=_setBackgroundView:) CEKLightingDialBackground *_backgroundView;
@property (retain, nonatomic, setter=_setSelectionOverlay:) UIImageView *_selectionOverlay;
@property (retain, nonatomic, setter=_setSelectionUnderlay:) UIImageView *_selectionUnderlay;
@property (retain, nonatomic, setter=_setNameBadge:) CEKLightingNameBadge *_nameBadge;
@property (nonatomic, readonly) UIPanGestureRecognizer *_panGesture;
@property (nonatomic, readonly) UILongPressGestureRecognizer *_pressGesture;
@property (nonatomic, readonly) UITapGestureRecognizer *_tapGesture;
@property (retain, nonatomic, setter=_setTimeTrackingBegan:) NSDate *_timeTrackingBegan;
@property (nonatomic, getter=isTracking, setter=_setTracking:) _Bool tracking;
@property (nonatomic, readonly) CEKAnimationGenerator *_animationGenerator;
@property (retain, nonatomic, setter=_setCollapseTimer:) NSTimer *_collapseTimer;
@property (nonatomic, setter=_setExpandedAnimationCounter:) unsigned long long _expandedAnimationCounter;
@property (nonatomic, readonly) CEKSelectionFeedbackGenerator *_selectionFeedbackGenerator;
@property (weak, nonatomic) id <CEKLightingControlDelegate> delegate;
@property (nonatomic) long long lightingEffectSet;
@property (nonatomic) long long selectedLightingType;
@property (nonatomic, readonly) long long defaultLightingType;
@property (nonatomic, getter=isExpanded) _Bool expanded;
@property (nonatomic, getter=isHighlighted) _Bool highlighted;
@property (nonatomic) CDStruct_4fab6026 collapsedItemFading;
@property (nonatomic, getter=isNameBadgeHidden) _Bool nameBadgeHidden;
@property (nonatomic) unsigned long long nameBadgeFontStyle;
@property (nonatomic) long long orientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (struct UIEdgeInsets)alignmentRectInsets;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_handlePanGesture:(id)arg1;
- (void)_handleTapGesture:(id)arg1;
- (unsigned long long)_itemCount;
- (void)_handlePressGesture:(id)arg1;
- (double)contentHeightForWidth:(double)arg1;
- (void)setExpanded:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_performFeedback;
- (void)_prepareFeedback;
- (void)badgeViewDidChangeIntrinsicContentSize:(id)arg1;
- (void)_createBackgroundViewIfNeeded;
- (void)_createSelectionViewsIfNeeded;
- (void)_createNameBadgeIfNeeded;
- (void)_loadItemsIfNeeded;
- (void)_createItemViewsIfNeeded;
- (double)_dialBadgePaddingExpanded:(_Bool)arg1;
- (double)_rubberBandOffsetAngleForOffsetAngle:(double)arg1;
- (void)_layoutItemViewsRadialWithSelectionOffsetAngle:(double)arg1;
- (void)_updateItemViewsWithSelectionOffsetAngle:(double)arg1;
- (void)_updateSelectionViewsWithSelectionOffsetAngle:(double)arg1;
- (void)_layoutItemViewsLinear;
- (void)_layoutBackgroundExpanded:(_Bool)arg1;
- (void)_layoutSelectionViewsExpanded:(_Bool)arg1;
- (void)_layoutNameBadgeExpanded:(_Bool)arg1;
- (double)_safeWidthForWidth:(double)arg1;
- (double)_dialCenterDistanceBelowBoundsForWidth:(double)arg1;
- (double)_dialRadiusForWidth:(double)arg1;
- (struct CGPoint)_selectionPointForExpanded:(_Bool)arg1;
- (struct CGPoint)_dialCenter;
- (double)_offsetAngleForItemAtIndex:(unsigned long long)arg1 withSelectionOffset:(double)arg2;
- (double)_offsetXForItemAtIndex:(unsigned long long)arg1;
- (double)_dialRadius;
- (double)_dialVisibleHeightExpanded:(_Bool)arg1;
- (struct CGPoint)_dialCenterForWidth:(double)arg1;
- (double)_angularSpacingForRadialLayout;
- (double)_compressedItemOffsetForFractionalItemOffset:(double)arg1;
- (double)_spacingForLinearLayout;
- (double)_angleFromCenterToPoint:(struct CGPoint)arg1;
- (unsigned long long)_enabledItemCount;
- (_Bool)_isOverDialedWithSelectionAngularOffset:(double)arg1 selectionIndex:(unsigned long long)arg2;
- (void)_setExpanded:(_Bool)arg1 animated:(_Bool)arg2 shouldNotify:(_Bool)arg3;
- (void)_cancelDelayedCollapse;
- (void)_collapseWithDelay:(double)arg1;
- (void)_snapFromSelectionOffsetAngle:(double)arg1 toAngle:(double)arg2 animated:(_Bool)arg3;
- (double)_rotationForPanGesture:(id)arg1;
- (double)_offsetAngleForRubberBandOffsetAngle:(double)arg1 selectionIndex:(unsigned long long)arg2;
- (void)_setSelectedLightingType:(long long)arg1 atIndex:(unsigned long long)arg2 shouldNotify:(_Bool)arg3 shouldSuppressHaptic:(_Bool)arg4 animated:(_Bool)arg5;
- (void)_rotateForTapFromSelectionIndex:(unsigned long long)arg1 offset:(double)arg2 toSelectionIndex:(unsigned long long)arg3;
- (void)_settleSelectionViewsFromSelectionOffsetAngle:(double)arg1;
- (void)_updateNameBadgeAnimated:(_Bool)arg1;
- (void)_handleCollapseTimer:(id)arg1;
- (void)setLightingEffectSet:(long long)arg1 animated:(_Bool)arg2;
- (_Bool)_isLightingTypeEnabled:(long long)arg1;
- (void)setSelectedLightingType:(long long)arg1 animated:(_Bool)arg2;
- (void)_handleSnapFromOffset:(double)arg1 withProgress:(double)arg2 timingCurve:(id)arg3;
- (void)_handleTapRotationFromOffset:(double)arg1 withProgress:(double)arg2 timingCurve:(id)arg3;
- (void)_updateSelectionOverlayColorAnimated:(_Bool)arg1;
- (void)_handleSettlingSelectionViewsFromOffset:(double)arg1 withProgress:(double)arg2 timingCurve:(id)arg3;
- (void)setCollapsedItemFading:(CDStruct_4fab6026)arg1 animated:(_Bool)arg2;
- (void)setNameBadgeHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)ppt_selectLightingType:(long long)arg1;
- (void)preloadEffectChangeAnimation;
- (void)updateToContentSize:(id)arg1;

@end
