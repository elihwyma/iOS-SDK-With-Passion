/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIView.h>

__attribute__((visibility("hidden")))
@interface SKUIIPhoneProductPageView : UIView

{
    UIView *_view;
    UIView *_bannerView;
    double _bannerOffset;
}

@property (retain, nonatomic) UIView *view;
@property (retain, nonatomic) UIView *bannerView;
@property (nonatomic) double bannerOffset;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)animateYPosition:(double)arg1;

@end
