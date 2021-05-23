/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSNumber, UIStatusBarForegroundView, UIStatusBarItemView;

__attribute__((visibility("hidden")))
@interface UIStatusBarLayoutManager : NSObject

{
    int _region;
    UIStatusBarItemView *_itemViews[48];
    _Bool _persistentAnimationsEnabled;
    _Bool _usesVerticalLayout;
    UIStatusBarForegroundView *_foregroundView;
    NSNumber *_assignedStartPosition;
}

@property (weak, nonatomic) UIStatusBarForegroundView *foregroundView;
@property (nonatomic) _Bool persistentAnimationsEnabled;
@property (nonatomic, readonly) _Bool usesVerticalLayout;
@property (retain, nonatomic) NSNumber *assignedStartPosition;

- (void)dealloc;
- (void)itemView:(id)arg1 sizeChangedBy:(double)arg2;
- (id)initWithRegion:(int)arg1 foregroundView:(id)arg2 usesVerticalLayout:(_Bool)arg3;
- (id)visibleItemViewAtPoint:(struct CGPoint)arg1 inForegroundView:(id)arg2;
- (_Bool)prepareEnabledItems:(_Bool *)arg1 withData:(id)arg2 actions:(int)arg3;
- (id)itemViewOfType:(int)arg1;
- (_Bool)updateItemsWithData:(id)arg1 actions:(int)arg2 animated:(_Bool)arg3;
- (void)reflowWithVisibleItems:(id)arg1 duration:(double)arg2;
- (void)positionInvisibleItems;
- (void)removeDisabledItems:(_Bool *)arg1;
- (void)makeVisibleItemsPerformPendedActions;
- (struct CGRect)rectForItems:(id)arg1;
- (double)sizeNeededForItems:(id)arg1;
- (void)clearOverlapFromItems:(id)arg1;
- (double)distributeOverlap:(double)arg1 amongItems:(id)arg2;
- (double)sizeNeededForItem:(id)arg1;
- (double)removeOverlap:(double)arg1 fromItems:(id)arg2;
- (_Bool)itemIsVisible:(id)arg1;
- (id)allItemViews;
- (void)_prepareEnabledItemType:(int)arg1 withEnabledItems:(_Bool *)arg2 withData:(id)arg3 actions:(int)arg4 itemAppearing:(_Bool *)arg5 itemDisappearing:(_Bool *)arg6;
- (void)_positionNewItemViewsWithEnabledItems:(_Bool *)arg1;
- (id)_itemViews;
- (void)setVisibilityOfItemType:(int)arg1 visible:(_Bool)arg2;
- (_Bool)_updateItemView:(id)arg1 withData:(id)arg2 actions:(int)arg3 animated:(_Bool)arg4;
- (id)_createViewForItem:(id)arg1 withData:(id)arg2 actions:(int)arg3;
- (double)_startPosition;
- (id)_itemViewsSortedForLayout;
- (struct CGRect)_frameForItemView:(id)arg1 startPosition:(double)arg2 firstView:(_Bool)arg3;
- (double)_positionAfterPlacingItemView:(id)arg1 startPosition:(double)arg2 firstView:(_Bool)arg3;
- (struct CGRect)_repositionedNewFrame:(struct CGRect)arg1 sizeDelta:(double)arg2;
- (_Bool)_processDelta:(double)arg1 forView:(id)arg2;
- (id)_viewForItem:(id)arg1;
- (double)_sizeNeededForItemView:(id)arg1;
- (void)_setOrigin:(double)arg1 forPoint:(struct CGPoint *)arg2;
- (double)_dimensionForSize:(struct CGSize)arg1;
- (void)_addOriginDelta:(double)arg1 toPoint:(struct CGPoint *)arg2;
- (void)setVisibilityOfAllItems:(_Bool)arg1;
- (void)setVisibilityOfItem:(id)arg1 visible:(_Bool)arg2;
- (_Bool)prepareDoubleHeightItemWithEnabledItems:(_Bool *)arg1;
- (_Bool)updateDoubleHeightItem;

@end
