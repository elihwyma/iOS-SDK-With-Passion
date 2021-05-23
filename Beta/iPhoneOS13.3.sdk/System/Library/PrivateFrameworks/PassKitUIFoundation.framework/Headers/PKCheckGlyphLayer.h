/*
 Image: /System/Library/PrivateFrameworks/PassKitUIFoundation.framework/PassKitUIFoundation
 */

#import <PassKitCore/PKMicaLayer.h>

@class CAGradientLayer, CAShapeLayer;

@protocol PKCheckGlyphLayerDelegate;

@interface PKCheckGlyphLayer : PKMicaLayer

{
    struct CGColor *_primaryColor;
    CAShapeLayer *_shapeLayer;
    CAGradientLayer *_maskLayer;
    _Bool _covered;
    struct CATransform3D _uncoveredTransform;
    struct CATransform3D _coveredTransform;
    _Bool _revealed;
    id <PKCheckGlyphLayerDelegate> _checkGlyphDelegate;
}

@property (weak, nonatomic) id <PKCheckGlyphLayerDelegate> checkGlyphDelegate;
@property (nonatomic) _Bool revealed;

- (id)init;
- (void)dealloc;
- (struct CGColor *)primaryColor;
- (id)initWithFrame:(struct CGRect)arg1 package:(id)arg2;
- (double)setRevealed:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setPrimaryColor:(struct CGColor *)arg1 animated:(_Bool)arg2;
- (void)_createMask;
- (double)_updateCovered:(_Bool)arg1;
- (double)setCovered:(_Bool)arg1 animated:(_Bool)arg2;

@end
