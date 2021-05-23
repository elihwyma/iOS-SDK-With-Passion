/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIControl.h>

@class SKUIClientContext, SKUIITunesPassConfiguration, UIImageView, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface SKUIRedeemITunesPassLockup : UIControl

{
    SKUIClientContext *_clientContext;
    SKUIITunesPassConfiguration *_configuration;
    UILabel *_descriptionLabel;
    UIView *_horizontalSeparatorView;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
}

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (id)initWithITunesPassConfiguration:(id)arg1 clientContext:(id)arg2;
- (id)_attributedDescriptionString;

@end
