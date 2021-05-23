/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <PencilKit/_PKInkColorButton.h>

@class CAShapeLayer, UIImageView, _PKHueSpectrumView;

@interface _PKEmbossedColorPickerButton : _PKInkColorButton

{
    _PKHueSpectrumView *_hueSpectrumView;
    CAShapeLayer *_selectedColorLayer;
    UIImageView *_embossImageView;
    CAShapeLayer *_strokeShapeLayer;
}

@property (retain, nonatomic) _PKHueSpectrumView *hueSpectrumView;
@property (retain, nonatomic) CAShapeLayer *selectedColorLayer;
@property (retain, nonatomic) UIImageView *embossImageView;
@property (retain, nonatomic) CAShapeLayer *strokeShapeLayer;

- (void)layoutSubviews;
- (id)initWithColor:(id)arg1 isCompact:(_Bool)arg2;

@end
