/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class CALayer, UIImageView, UILabel, _UIBannerContent;

__attribute__((visibility("hidden")))
@interface _UIBannerView : UIView

{
    _Bool _highlighted;
    _UIBannerContent *_content;
    CALayer *_backgroundLayer;
    UIView *_highlightView;
    UILabel *_titleLabel;
    UILabel *_bodyLabel;
    UIImageView *_imageView;
}

@property (retain, nonatomic) _UIBannerContent *content;
@property (retain, nonatomic) CALayer *backgroundLayer;
@property (retain, nonatomic) UIView *highlightView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *bodyLabel;
@property (retain, nonatomic) UIImageView *imageView;
@property (nonatomic) _Bool highlighted;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)updateConstraints;
- (void)setHighlighted:(_Bool)arg1 initialPress:(_Bool)arg2;

@end
