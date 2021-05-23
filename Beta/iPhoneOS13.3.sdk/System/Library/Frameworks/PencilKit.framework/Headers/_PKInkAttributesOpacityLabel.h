/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <UIKit/UIView.h>

@class UILabel;

@interface _PKInkAttributesOpacityLabel : UIView

{
    double _opacityValue;
    UILabel *_titleLabel;
    UILabel *_valueLabel;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *valueLabel;
@property (nonatomic) double opacityValue;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (_Bool)isRTLLanguage;

@end
