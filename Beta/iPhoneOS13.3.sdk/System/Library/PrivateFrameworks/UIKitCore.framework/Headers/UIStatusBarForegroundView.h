/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSMutableArray, NSString, UIAccessibilityHUDGestureManager, UIStatusBar, UIStatusBarComposedData, UIStatusBarForegroundStyleAttributes, UIStatusBarLayoutManager;

__attribute__((visibility("hidden")))
@interface UIStatusBarForegroundView : UIView <Swift>

{
    _Bool _usesVerticalLayout;
    _Bool _itemIsEnabled[48];
    UIStatusBarLayoutManager *_layoutManagers[3];
    int _ignoreDataLevel;
    NSMutableArray *_actionAnimationStack;
    UIStatusBarComposedData *_currentData;
    UIStatusBarComposedData *_pendedData;
    int _pendedActions;
    UIAccessibilityHUDGestureManager *_accessibilityHUDGestureManager;
    long long _idiom;
    UIStatusBarForegroundStyleAttributes *_foregroundStyle;
}

@property (nonatomic) long long idiom;
@property (nonatomic, readonly) UIStatusBarForegroundStyleAttributes *foregroundStyle;
@property (nonatomic, readonly) UIStatusBar *statusBar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)_accessibilityHUDGestureManager:(id)arg1 showHUDItem:(id)arg2;
- (void)_dismissAccessibilityHUDForGestureManager:(id)arg1;
- (_Bool)_accessibilityHUDGestureManager:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)_accessibilityHUDGestureManager:(id)arg1 HUDItemForPoint:(struct CGPoint)arg2;
- (void)_accessibilityHUDGestureManager:(id)arg1 gestureLiftedAtPoint:(struct CGPoint)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)didMoveToWindow;
- (double)leftEdgePadding;
- (double)rightEdgePadding;
- (void)setPersistentAnimationsEnabled:(_Bool)arg1;
- (void)reflowItemViewsForgettingEitherSideItemHistory;
- (_Bool)isShowingBreadcrumb;
- (id)_statusBarWindowForAccessibilityHUD;
- (void)setStatusBarData:(id)arg1 actions:(int)arg2 animated:(_Bool)arg3;
- (_Bool)willChangeNavigationItemDisplayWithSystemNavigationAction:(id)arg1;
- (void)startIgnoringData;
- (void)stopIgnoringData:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1 foregroundStyle:(id)arg2 usesVerticalLayout:(_Bool)arg3;
- (void)reflowItemViews:(_Bool)arg1;
- (_Bool)ignoringData;
- (void)reflowItemViewsCrossfadingCenter:(id)arg1 duration:(double)arg2;
- (void)animateUnlock;
- (void)jiggleLockIcon;
- (struct CGRect)frameForItemOfType:(int)arg1;
- (struct CGRect)frameForAllItemsInRegion:(int)arg1;
- (_Bool)rectIntersectsTimeItem:(struct CGRect)arg1;
- (id)_statusBarItemViewAtPoint:(struct CGPoint)arg1;
- (void)_cleanUpAfterDataChange;
- (void)_reflowItemViewsWithDuration:(double)arg1 preserveHistory:(_Bool)arg2;
- (void)_animateUnlockCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_setStatusBarData:(id)arg1 actions:(int)arg2 animated:(_Bool)arg3;
- (void)_reflowItemViewsCrossfadingCenterWithDuration:(double)arg1 timeWasEnabled:(_Bool)arg2;
- (id)_computeVisibleItemsPreservingHistory:(_Bool)arg1;
- (void)_cleanUpAfterSimpleReflow;
- (_Bool)_tryToPlaceItem:(id)arg1 inItemArray:(id)arg2 layoutManager:(id)arg3 roomRemaining:(double *)arg4 allowSwap:(_Bool)arg5 swappedItem:(id *)arg6;
- (_Bool)rectIntersectsBatteryItem:(struct CGRect)arg1;

@end
