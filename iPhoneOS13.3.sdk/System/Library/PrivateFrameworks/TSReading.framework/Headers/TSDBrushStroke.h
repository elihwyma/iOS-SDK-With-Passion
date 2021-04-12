//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSDSmartStroke.h>

@interface TSDBrushStroke : TSDSmartStroke
{
}

+ (CGImage )newCGImageFromGL;
+ (void)applicationDidBecomeActive;
+ (void)applicationWillResignActive;
+ (id)renderQueue;
+ (id)brushProgram;
+ (id)sharedContext;
+ (void)loadSectionsForBrush:(id)arg1 inSVGDoc:(struct _xmlDoc )arg2;
+ (id)loadImageForBrush:(id)arg1;
+ (void)loadLineEndsForBrush:(id)arg1 inSVGDoc:(struct _xmlDoc )arg2;
+ (void)loadLineEndTextureForBrush:(id)arg1 lineEnd:(id)arg2 path:(CGPath )arg3 andBounds:(CGRect)arg4;
+ (void)loadBrush:(id)arg1;
+ (id)cacheDirectory;
+ (Class)mutableClass;
- (void)brushPath:(CGPath )arg1 inContext:(CGContext )arg2;
- (void)brushPath:(id)arg1 withScaling:(CDStruct_c3b9c2ee)arg2 inElementRange:(NSRange)arg3 into:(void )arg4 sectionIndex:(NSUInteger )arg5 viewScale:(double)arg6;
- (void)brushSection:(id)arg1 sectionIndex:(NSUInteger)arg2 ontoPath:(id)arg3 withScaling:(CDStruct_c3b9c2ee)arg4 inElementRange:(NSRange)arg5 into:(void )arg6 viewScale:(double)arg7;
- (void)paintPath:(CGPath )arg1 wantsInteriorStroke:(BOOL)arg2 inContext:(CGContext )arg3 useFastDrawing:(BOOL)arg4;
- (void)glBrushPath:(CGPath )arg1 inContext:(CGContext )arg2;
- (void)finishOpenGLRenderInContext:(CGContext )arg1 pathVertexData:(vector_b5dead7b )arg2;
- (void)renderOpenGLSection:(id)arg1 sectionIndex:(NSUInteger)arg2 ontoPath:(id)arg3 withScaling:(CDStruct_c3b9c2ee)arg4 inElementRange:(NSRange)arg5 into:(vector_b5dead7b )arg6 viewScale:(double)arg7;
- (id)brushTextureForId:(id)arg1;
- (BOOL)needsToExtendJoinsForBoundsCalculation;
- (int)cap;
- (id)description;
- (BOOL)supportsPattern;
- (BOOL)drawsInOneStep;
- (BOOL)prefersToApplyToCAShapeLayerDuringManipulation;
- (BOOL)canApplyToCAShapeLayer;
- (void)paintLineEnd:(id)arg1 atPoint:(CGPoint)arg2 atAngle:(double)arg3 withScale:(double)arg4 inContext:(CGContext )arg5 useFastDrawing:(BOOL)arg6;
- (id)strokeLineEnd:(id)arg1;
- (double)suggestedMinimumLineWidth;
- (double)lineEndInsetAdjustment;
- (CGImage )maskForId:(id)arg1;
- (id)brushBoundsForId:(id)arg1;
- (id)brushPathsForId:(id)arg1;
- (id)mutableCopyWithZone:(_NSZone )arg1;
// - (id)copyWithZone:(_NSZone )arg1;

@end

