/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <PencilKit/_PKInkColorButton.h>

@class CAShapeLayer;

@interface _PKFlatInkColorButton : _PKInkColorButton

{
    CAShapeLayer *_fillShapeLayer;
    CAShapeLayer *_strokeShapeLayer;
}

@property (retain, nonatomic) CAShapeLayer *fillShapeLayer;
@property (retain, nonatomic) CAShapeLayer *strokeShapeLayer;

- (void)layoutSubviews;
- (id)initWithColor:(id)arg1 isCompact:(_Bool)arg2;

@end
