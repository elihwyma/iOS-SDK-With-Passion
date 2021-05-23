/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIView.h>

@class SKUIScrollingTabBarBackgroundView;

@protocol SKUIScrollingTabBarPaletteDelegate;

@interface SKUIScrollingTabBarPalette : UIView

{
    _Bool _attached;
    _Bool _tabBarBackgroundExtendsBehindPalette;
    UIView *_contentView;
    double _paletteHeight;
    id <SKUIScrollingTabBarPaletteDelegate> _delegate;
    SKUIScrollingTabBarBackgroundView *_backgroundView;
}

@property (weak, nonatomic, getter=_delegate, setter=_setDelegate:) id <SKUIScrollingTabBarPaletteDelegate> delegate;
@property (nonatomic, getter=isAttached, setter=_setAttached:) _Bool attached;
@property (nonatomic, readonly, getter=_backgroundView) SKUIScrollingTabBarBackgroundView *backgroundView;
@property (nonatomic, readonly) UIView *contentView;
@property (nonatomic, readonly) double paletteHeight;
@property (nonatomic) _Bool tabBarBackgroundExtendsBehindPalette;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;

@end
