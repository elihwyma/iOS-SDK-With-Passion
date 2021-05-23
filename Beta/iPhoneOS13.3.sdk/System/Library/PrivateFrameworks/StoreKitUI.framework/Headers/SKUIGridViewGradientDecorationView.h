/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UICollectionReusableView.h>

@class IKColor, SKUIGridViewGradientDecorationBackgroundView, UIView;

__attribute__((visibility("hidden")))
@interface SKUIGridViewGradientDecorationView : UICollectionReusableView

{
    SKUIGridViewGradientDecorationBackgroundView *_backgroundView;
    IKColor *_kolor;
}

@property (nonatomic, readonly) UIView *backgroundView;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)applyLayoutAttributes:(id)arg1;
- (void)_createGradient:(id)arg1 withGradientType:(long long)arg2;

@end
