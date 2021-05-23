/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UITextFieldBackgroundView.h>

@class CAShapeLayer, UIBezierPath;

__attribute__((visibility("hidden")))
@interface _UITextFieldPasscodeCutoutBackground : UITextFieldBackgroundView

{
    _Bool _customStrokeColor;
    _Bool _customFillColor;
    CAShapeLayer *_lighteningOutline;
    double _outlineAlpha;
    double _cornerRadius;
}

@property (nonatomic) double cornerRadius;
@property (nonatomic, readonly) UIBezierPath *customPath;
@property (nonatomic) double outlineAlpha;

+ (Class)layerClass;
+ (id)_strokeColor:(_Bool)arg1;
+ (id)_fillColor:(_Bool)arg1;

- (void)setActive:(_Bool)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setLineWidth:(double)arg1;
- (double)lineWidth;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (id)fillColor;
- (void)setEnabled:(_Bool)arg1 animated:(_Bool)arg2;
- (id)_strokeColor:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1 active:(_Bool)arg2;
- (id)_fillColor:(_Bool)arg1;
- (void)setFillColor:(id)arg1;
- (void)setStrokeColor:(id)arg1;
- (id)_shapeLayer;
- (id)strokeColor;
- (void)_updatePath;
- (void)setLineWidth:(double)arg1 updatePath:(_Bool)arg2;
- (double)_pathInset;
- (void)_updateLightingOutlinePath;

@end
