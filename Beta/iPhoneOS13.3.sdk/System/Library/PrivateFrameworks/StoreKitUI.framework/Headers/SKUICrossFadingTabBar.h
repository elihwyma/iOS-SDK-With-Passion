/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIView.h>

@class NSArray, SKUIScrollingTabBarBackgroundView;

__attribute__((visibility("hidden")))
@interface SKUICrossFadingTabBar : UIView

{
    SKUIScrollingTabBarBackgroundView *_backgroundView;
    NSArray *_tabBarButtons;
}

@property (nonatomic, readonly) SKUIScrollingTabBarBackgroundView *backgroundView;
@property (copy, nonatomic) NSArray *tabBarButtons;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;

@end
