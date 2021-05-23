/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <UIKit/UIView.h>

@class CAShapeLayer, UIImageView;

@interface _PKHueSpectrumView : UIView

{
    _Bool _isCompact;
    _Bool _isEmbossed;
    _Bool _isSelected;
    UIImageView *_imageView;
    CAShapeLayer *_maskLayer;
}

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) CAShapeLayer *maskLayer;
@property (nonatomic) _Bool isCompact;
@property (nonatomic) _Bool isEmbossed;
@property (nonatomic) _Bool isSelected;

+ (id)colorWheelImage:(_Bool)arg1;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end
