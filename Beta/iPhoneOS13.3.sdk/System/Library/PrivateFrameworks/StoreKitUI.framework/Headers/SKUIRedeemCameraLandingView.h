/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIView.h>

@class UIButton, UIImage, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface SKUIRedeemCameraLandingView : UIView

{
    UILabel *_bodyLabel;
    UIButton *_button;
    UILabel *_headerLabel;
    UIImageView *_imageView;
    long long _spacingStyle;
}

@property (nonatomic, readonly) UIButton *button;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) long long spacingStyle;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithClientContext:(id)arg1;

@end
