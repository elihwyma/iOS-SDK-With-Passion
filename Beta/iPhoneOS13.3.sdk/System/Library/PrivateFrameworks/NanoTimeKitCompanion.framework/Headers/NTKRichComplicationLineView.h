/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKRichComplicationShapeView.h>

@interface NTKRichComplicationLineView : NTKRichComplicationShapeView

- (const struct CGPath *)_generatePath;
- (struct CGPoint)_pointAtProgress:(float)arg1;
- (void)_setupGradientLayer:(id)arg1;
- (double)_shapeLineWidth;
- (id)_normalizeGradientLocations:(id)arg1;
- (_Bool)_shouldReverseGradient;

@end
