/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class CAShapeLayer, UIBezierPath, UIColor;

__attribute__((visibility("hidden")))
@interface _UIGlintyShapeView : UIView

{
    UIBezierPath *_path;
    UIColor *_fillColor;
    UIColor *_strokeColor;
}

@property (nonatomic, readonly) CAShapeLayer *shapeLayer;
@property (nonatomic, readonly) UIBezierPath *path;
@property (nonatomic, readonly) UIColor *fillColor;
@property (nonatomic, readonly) UIColor *strokeColor;

+ (Class)layerClass;

- (void)setPath:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setFillColor:(id)arg1;
- (void)setStrokeColor:(id)arg1;

@end
