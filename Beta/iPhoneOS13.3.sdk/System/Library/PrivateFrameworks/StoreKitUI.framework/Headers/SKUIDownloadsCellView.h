/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIView.h>

@class NSAttributedString, NSString, UIButton, UIImage, UIImageView, UILabel, UISlider;

__attribute__((visibility("hidden")))
@interface SKUIDownloadsCellView : UIView

{
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIImageView *_imageView;
    UIButton *_button;
    UISlider *_progressSlider;
    NSAttributedString *_attributedTitle;
    NSString *_subtitle;
    long long _buttonType;
    _Bool _isPad;
}

@property (retain, nonatomic) NSAttributedString *attributedTitle;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) double progress;
@property (nonatomic) long long buttonType;
@property (nonatomic, readonly) UIButton *button;
@property (nonatomic) _Bool isPad;

- (id)init;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;

@end
