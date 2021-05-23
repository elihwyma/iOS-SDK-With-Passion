/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIView.h>

@class IKImageElement, IKViewElement, VUILabel, VUIUpsellOfferViewLayout, _TVImageView;

__attribute__((visibility("hidden")))
@interface VUIUpsellOfferView : UIView

{
    IKViewElement *_viewElement;
    VUIUpsellOfferViewLayout *_layout;
    VUILabel *_titleLabel;
    VUILabel *_descriptionLabel;
    _TVImageView *_imageView;
    IKImageElement *_imageElement;
}

@property (retain, nonatomic) IKImageElement *imageElement;
@property (retain, nonatomic) IKViewElement *viewElement;
@property (retain, nonatomic) VUIUpsellOfferViewLayout *layout;
@property (retain, nonatomic) VUILabel *titleLabel;
@property (retain, nonatomic) VUILabel *descriptionLabel;
@property (retain, nonatomic) _TVImageView *imageView;

+ (id)upsellViewFromElement:(id)arg1 existingView:(id)arg2;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (struct CGSize)_iOS_layoutWithSize:(struct CGSize)arg1 metricsOnly:(_Bool)arg2;

@end
