/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <CameraUI/CAMControlDrawerButton.h>

@class NSArray, NSMutableArray, UIImageView, UIView;

@protocol CAMControlDrawerMenuButtonDelegate;

@interface CAMControlDrawerMenuButton : CAMControlDrawerButton

{
    _Bool _expanded;
    _Bool __needsLoadMenuItems;
    _Bool __trackingExpansionToggle;
    _Bool __touchInTrackedView;
    id <CAMControlDrawerMenuButtonDelegate> _delegate;
    UIImageView *__accessoryBackgroundView;
    NSMutableArray *__itemLabels;
    NSArray *__cachedMenuItems;
    unsigned long long __trackedItemIndex;
    UIView *__highlightedView;
    struct UIEdgeInsets _expansionInsets;
}

@property (nonatomic, readonly) UIImageView *_accessoryBackgroundView;
@property (nonatomic, readonly) NSMutableArray *_itemLabels;
@property (retain, nonatomic, setter=_setCachedMenuItems:) NSArray *_cachedMenuItems;
@property (nonatomic, setter=_setNeedsLoadMenuItems:) _Bool _needsLoadMenuItems;
@property (nonatomic, setter=_setTrackedItemIndex:) unsigned long long _trackedItemIndex;
@property (nonatomic, getter=_isTrackingExpansionToggle, setter=_setTrackingExpansionToggle:) _Bool _trackingExpansionToggle;
@property (nonatomic, getter=_isTouchInTrackedView, setter=_setTouchInTrackedView:) _Bool _touchInTrackedView;
@property (retain, nonatomic, setter=_setHighlightedView:) UIView *_highlightedView;
@property (weak, nonatomic) id <CAMControlDrawerMenuButtonDelegate> delegate;
@property (nonatomic) struct UIEdgeInsets expansionInsets;
@property (nonatomic, getter=isExpanded) _Bool expanded;

+ (id)_backgroundImage;

- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setOrientation:(long long)arg1 animated:(_Bool)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)isExpandable;
- (id)initWithLayoutStyle:(long long)arg1;
- (void)_updateLabels;
- (void)setExpanded:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_setExpanded:(_Bool)arg1 animated:(_Bool)arg2 shouldNotify:(_Bool)arg3;
- (id)hudItemForAccessibilityHUDManager:(id)arg1;
- (void)selectedByAccessibilityHUDManager:(id)arg1;
- (_Bool)shouldScaleImageWhileHighlighted;
- (void)didChangeContentSize;
- (_Bool)_shouldTrackView:(id)arg1 forTouchAtLocation:(struct CGPoint)arg2;
- (void)_updateHighlightedView;
- (void)_updateSubviewAlphas;
- (void)updateLabelsIfNeeded;
- (unsigned long long)_indexOfItemToTrackForTouchAtLocation:(struct CGPoint)arg1;
- (void)didSelectMenuItem:(id)arg1;
- (id)hudItemForMenuHeader;
- (id)hudItemForMenuItem:(id)arg1;
- (void)_loadMenuItemsIfNeeded;
- (_Bool)isMenuItemSelected:(id)arg1;
- (id)loadMenuItems;
- (void)setNeedsLoadMenuItems;

@end
