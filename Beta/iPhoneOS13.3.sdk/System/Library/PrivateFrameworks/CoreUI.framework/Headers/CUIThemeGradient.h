/*
 Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import <Foundation/NSObject.h>

@interface CUIThemeGradient : NSObject

{
    id gradientEvaluator;
    struct CGFunction *colorShader;
    struct CGColorSpace *colorSpace;
    struct CGImage *_gradientImage;
}

- (void)dealloc;
- (_Bool)isDithered;
- (id)fillColor;
- (int)blendMode;
- (id)colorStops;
- (id)opacityStops;
- (double)smoothingCoefficient;
- (id)gradientByApplyingEffects:(id)arg1;
- (void)drawInRect:(struct CGRect)arg1 angle:(double)arg2 withContext:(struct CGContext *)arg3;
- (void)drawRadialGradientInRect:(struct CGRect)arg1 relativeCenterPosition:(struct CGPoint)arg2 withContext:(struct CGContext *)arg3;
- (void)drawAngleGradientInRect:(struct CGRect)arg1 relativeCenterPosition:(struct CGPoint)arg2 withContext:(struct CGContext *)arg3;
- (struct _psdGradientColor)_psdGradientColorWithColor:(id)arg1 colorSpace:(struct CGColorSpace *)arg2;
- (id)initWithColors:(id)arg1 colorlocations:(id)arg2 colorMidpoints:(id)arg3 opacities:(id)arg4 opacityLocations:(id)arg5 opacityMidpoints:(id)arg6 smoothingCoefficient:(double)arg7 fillColor:(id)arg8 colorSpace:(struct CGColorSpace *)arg9 dither:(_Bool)arg10;
- (id)_psdGradientColorStopsWithColors:(id)arg1 locations:(id)arg2 colorSpace:(struct CGColorSpace *)arg3;
- (id)_psdGradientOpacityStopsWithOpacities:(id)arg1 locations:(id)arg2;
- (id)_initWithGradientEvaluator:(id)arg1 colorSpace:(struct CGColorSpace *)arg2;
- (void)_tintColorStopsWithEffects:(id)arg1;
- (id)_colorFromPSDGradientColor:(struct _psdGradientColor)arg1;
- (void)drawFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2 options:(unsigned long long)arg3 withContext:(struct CGContext *)arg4;
- (struct CGImage *)_createRadialGradientImageWithWidth:(double)arg1 height:(double)arg2;
- (struct CGFunction *)_newColorShaderForDistance:(double)arg1;
- (struct CGFunction *)colorShader;
- (id)interpolatedColorAtLocation:(double)arg1;
- (void)drawInRect:(struct CGRect)arg1 angle:(double)arg2;
- (id)initWithColors:(id)arg1 colorlocations:(id)arg2 colorMidpoints:(id)arg3 opacities:(id)arg4 opacityLocations:(id)arg5 opacityMidpoints:(id)arg6 smoothingCoefficient:(double)arg7 fillColor:(id)arg8 colorSpace:(struct CGColorSpace *)arg9;
- (id)colorLocations;
- (id)opacityLocations;
- (void)drawFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2 options:(unsigned long long)arg3;

@end
