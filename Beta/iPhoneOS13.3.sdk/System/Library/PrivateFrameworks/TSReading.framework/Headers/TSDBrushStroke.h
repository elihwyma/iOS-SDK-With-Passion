/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSDSmartStroke.h>

@interface TSDBrushStroke : TSDSmartStroke

+ (id)sharedContext;
+ (void)applicationDidBecomeActive;
+ (void)applicationWillResignActive;
+ (id)cacheDirectory;
+ (void)loadLineEndsForBrush:(id)arg1 inSVGDoc:(struct _xmlDoc *)arg2;
+ (void)loadSectionsForBrush:(id)arg1 inSVGDoc:(struct _xmlDoc *)arg2;
+ (void)loadBrush:(id)arg1;
+ (Class)mutableClass;
+ (id)renderQueue;
+ (void)loadLineEndTextureForBrush:(id)arg1 lineEnd:(id)arg2 path:(struct CGPath *)arg3 andBounds:(struct CGRect)arg4;
+ (id)loadImageForBrush:(id)arg1;
+ (id)brushProgram;
+ (struct CGImage *)newCGImageFromGL;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)brushPath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2;
- (void)paintLineEnd:(id)arg1 atPoint:(struct CGPoint)arg2 atAngle:(double)arg3 withScale:(double)arg4 inContext:(struct CGContext *)arg5 useFastDrawing:(_Bool)arg6;
- (id)strokeLineEnd:(id)arg1;
- (id)brushPathsForId:(id)arg1;
- (id)brushBoundsForId:(id)arg1;
- (void)brushSection:(id)arg1 sectionIndex:(unsigned long long)arg2 ontoPath:(id)arg3 withScaling:(CDStruct_c3b9c2ee)arg4 inElementRange:(struct _NSRange)arg5 into:(void *)arg6 viewScale:(double)arg7;
- (void)brushPath:(id)arg1 withScaling:(CDStruct_c3b9c2ee)arg2 inElementRange:(struct _NSRange)arg3 into:(void *)arg4 sectionIndex:(unsigned long long *)arg5 viewScale:(double)arg6;
- (int)cap;
- (_Bool)supportsPattern;
- (void)paintPath:(struct CGPath *)arg1 wantsInteriorStroke:(_Bool)arg2 inContext:(struct CGContext *)arg3 useFastDrawing:(_Bool)arg4;
- (_Bool)canApplyToCAShapeLayer;
- (_Bool)needsToExtendJoinsForBoundsCalculation;
- (double)lineEndInsetAdjustment;
- (double)suggestedMinimumLineWidth;
- (_Bool)prefersToApplyToCAShapeLayerDuringManipulation;
- (_Bool)drawsInOneStep;
- (struct CGImage *)maskForId:(id)arg1;
- (id)brushTextureForId:(id)arg1;
- (void)glBrushPath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2;
- (void)renderOpenGLSection:(id)arg1 sectionIndex:(unsigned long long)arg2 ontoPath:(id)arg3 withScaling:(CDStruct_c3b9c2ee)arg4 inElementRange:(struct _NSRange)arg5 into:(vector_b5dead7b *)arg6 viewScale:(double)arg7;
- (void)finishOpenGLRenderInContext:(struct CGContext *)arg1 pathVertexData:(vector_b5dead7b *)arg2;

@end
