/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <UIKit/UIControl.h>

@class CAMTouchingGestureRecognizer, NSIndexSet, NSMutableArray, NSMutableIndexSet, NSString, UIImageView, UIView;

@protocol CAMExpandableMenuButtonDelegate;

@interface CAMExpandableMenuButton : UIControl

{
    _Bool _expanded;
    _Bool __trackingViewHighlighted;
    long long _layoutStyle;
    long long _selectedIndex;
    long long _orientation;
    NSMutableArray *__menuItems;
    UIView *__headerView;
    NSIndexSet *__shownIndexesWhileCollapsed;
    NSMutableIndexSet *__highlightedIndexesWhileCollapsed;
    UIImageView *__padBackgroundView;
    UIView *__trackingView;
    id <CAMExpandableMenuButtonDelegate> _expandableMenuDelegate;
    CAMTouchingGestureRecognizer *_touchingGestureRecognizer;
    struct UIEdgeInsets _tappableEdgeInsets;
}

@property (nonatomic, readonly) NSMutableArray *_menuItems;
@property (nonatomic, readonly) UIView *_headerView;
@property (copy, nonatomic, readonly) NSIndexSet *_shownIndexesWhileCollapsed;
@property (copy, nonatomic, readonly) NSMutableIndexSet *_highlightedIndexesWhileCollapsed;
@property (nonatomic, readonly) UIImageView *_padBackgroundView;
@property (retain, nonatomic, setter=_setTrackingView:) UIView *_trackingView;
@property (nonatomic, getter=_isTrackingViewHighlighted, setter=_setTrackingViewHighlighted:) _Bool _trackingViewHighlighted;
@property (weak, nonatomic) id <CAMExpandableMenuButtonDelegate> expandableMenuDelegate;
@property (nonatomic, readonly) CAMTouchingGestureRecognizer *touchingGestureRecognizer;
@property (nonatomic) long long layoutStyle;
@property (nonatomic) long long selectedIndex;
@property (nonatomic, readonly, getter=isExpanded) _Bool expanded;
@property (nonatomic) long long orientation;
@property (nonatomic) struct UIEdgeInsets tappableEdgeInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (double)expansionDuration;

- (id)initWithCoder:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct UIEdgeInsets)alignmentRectInsets;
- (void)reloadData;
- (id)headerView;
- (void)setOrientation:(long long)arg1 animated:(_Bool)arg2;
- (id)initWithLayoutStyle:(long long)arg1;
- (long long)numberOfMenuItems;
- (id)titleForMenuItemAtIndex:(long long)arg1;
- (void)updateToContentSize:(id)arg1;
- (void)_handleTouchGesture:(id)arg1;
- (id)hudItemForAccessibilityHUDManager:(id)arg1;
- (void)selectedByAccessibilityHUDManager:(id)arg1;
- (struct CGSize)intrinsicContentSizeForExpansion:(_Bool)arg1;
- (struct CGRect)frameForAlignmentRect:(struct CGRect)arg1 expanded:(_Bool)arg2;
- (void)startCollapsingWithProposedFrame:(struct CGRect)arg1;
- (void)finishCollapsingAnimated:(_Bool)arg1;
- (struct CGRect)alignmentRectForFrame:(struct CGRect)arg1 expanded:(_Bool)arg2;
- (void)startExpansionWithProposedFrame:(struct CGRect)arg1;
- (void)finishExpansionAnimated:(_Bool)arg1;
- (void)collapseMenuAnimated:(_Bool)arg1;
- (_Bool)wantsSelectedItemToBeVisible;
- (void)setHighlighted:(_Bool)arg1 forIndex:(long long)arg2;
- (void)prepareHeaderViewForExpanding:(_Bool)arg1;
- (double)padHeaderViewContentInsetLeft;
- (id)shownIndexesWhileCollapsed;
- (double)collapsedSelectedLabelHorizontalMargin;
- (_Bool)shouldIgnoreMenuInteraction;
- (_Bool)shouldAllowExpansion;
- (void)_updateFromExpansionChangeAnimated:(_Bool)arg1;
- (void)_updateFromOrientationChangeAnimated:(_Bool)arg1;
- (struct CGSize)_layoutMenuButton:(_Bool)arg1 expanded:(_Bool)arg2;
- (id)_selectedLabel;
- (struct CGSize)_layoutForPhoneExpandedLandscapeButton:(_Bool)arg1;
- (struct CGSize)_layoutForPhoneExpandedPortraitButton:(_Bool)arg1;
- (struct CGSize)_layoutForPhoneCollapsedLandscapeButton:(_Bool)arg1;
- (struct CGSize)_layoutForPhoneCollapsedPortraitButton:(_Bool)arg1;
- (struct CGSize)_layoutForPadExpandedPortraitButton:(_Bool)arg1;
- (struct CGSize)_layoutForPadCollapsedPortraitButton:(_Bool)arg1;
- (struct CGSize)_layoutForPhoneStyle:(_Bool)arg1 expanded:(_Bool)arg2;
- (struct CGSize)_layoutForPadStyle:(_Bool)arg1 expanded:(_Bool)arg2;
- (void)_updateFromSelectedIndexChange;
- (void)_applyMenuItemColorsForCurrentState;
- (void)_applyMenuItemAlphaForCurrentExpansionState;
- (void)_createPadBackgroundView;
- (void)_applyMenuItemTextAlignmentAndShadowForCurrentOrientation;
- (_Bool)_wantsHeaderViewToBeVisible;
- (void)_applyHeaderViewForCurrentExpansionState;
- (void)_convertAllSubviewsToProposedFrame:(struct CGRect)arg1;
- (id)_viewToTrackForTouchAtLocation:(struct CGPoint)arg1;
- (void)expandMenuAnimated:(_Bool)arg1;
- (void)completeExpansionToProposedFrame:(struct CGRect)arg1;

@end
