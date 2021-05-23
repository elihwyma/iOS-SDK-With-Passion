/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSArray, NSMutableArray, UIImageView, UILabel, UINavigationBar, UISnapshotView, UITabBar, UITabBarItem, UITabBarItemProxy;

__attribute__((visibility("hidden")))
@interface UITabBarCustomizeView : UIView

{
    UITabBar *_tabBar;
    NSMutableArray *_proxies;
    NSMutableArray *_fixedItems;
    UITabBarItemProxy *_draggingProxy;
    UITabBarItem *_draggingItem;
    UISnapshotView *_dragImage;
    UIImageView *_replacementGlow;
    UITabBarItem *_replaceItem;
    UILabel *_titleLabel;
    struct CGPoint _startPoint;
    long long _itemsInRowCount;
    double _gridOffset;
    struct CGRect _firstItemRect;
    UITabBarItem *_selectedBeforeItem;
    _Bool _isBeingDismissed;
    NSArray *_availableItems;
    UINavigationBar *_navigationBar;
}

@property (retain, nonatomic) NSArray *availableItems;
@property (retain, nonatomic) UINavigationBar *navigationBar;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (id)titleLabelFont;
- (long long)_barMetrics;
- (void)updateProxiesSelection;
- (void)tintTabBarItemsForEdit:(_Bool)arg1;
- (void)adjustDragImageWithTouches:(id)arg1 withEvent:(id)arg2;
- (id)itemInTabBarWithTouches:(id)arg1 withEvent:(id)arg2;
- (void)tabBarTouchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)setIsBeingDismissed;
- (void)setTabBar:(id)arg1 currentItems:(id)arg2 availableItems:(id)arg3;
- (void)tabBarTouchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)tabBarTouchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)tabBarTouchesCancelled:(id)arg1 withEvent:(id)arg2;

@end
