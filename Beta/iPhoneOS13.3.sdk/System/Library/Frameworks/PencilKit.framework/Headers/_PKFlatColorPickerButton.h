/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <PencilKit/_PKInkColorButton.h>

@class CAShapeLayer, _PKHueSpectrumView;

@interface _PKFlatColorPickerButton : _PKInkColorButton

{
    _PKHueSpectrumView *_hueSpectrumView;
    CAShapeLayer *_selectedColorLayer;
    CAShapeLayer *_strokeShapeLayer;
    struct CGRect _lastRenderedBounds;
}

@property (retain, nonatomic) _PKHueSpectrumView *hueSpectrumView;
@property (retain, nonatomic) CAShapeLayer *selectedColorLayer;
@property (retain, nonatomic) CAShapeLayer *strokeShapeLayer;
@property (nonatomic) struct CGRect lastRenderedBounds;

- (void)layoutSubviews;
- (id)initWithColor:(id)arg1 isCompact:(_Bool)arg2;

@end
