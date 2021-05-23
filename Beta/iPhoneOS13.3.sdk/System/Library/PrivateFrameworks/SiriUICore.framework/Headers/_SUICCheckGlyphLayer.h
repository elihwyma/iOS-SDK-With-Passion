/*
 Image: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
 */

#import <QuartzCore/CALayer.h>

@class CAGradientLayer, CAShapeLayer, UIColor;

@interface _SUICCheckGlyphLayer : CALayer

{
    CAShapeLayer *_checkPackageLayer;
    CAGradientLayer *_maskLayer;
    _Bool _covered;
    struct CATransform3D _uncoveredTransform;
    struct CATransform3D _coveredTransform;
    UIColor *_primaryColor;
}

@property (copy, nonatomic) UIColor *primaryColor;
@property (nonatomic) _Bool revealed;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSublayers;
- (void)_createMask;
- (double)_updateCovered:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (double)_pointScaleToMatchBoundsSize:(struct CGSize)arg1;
- (void)setPrimaryColor:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setRevealed:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (double)setCovered:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;

@end
