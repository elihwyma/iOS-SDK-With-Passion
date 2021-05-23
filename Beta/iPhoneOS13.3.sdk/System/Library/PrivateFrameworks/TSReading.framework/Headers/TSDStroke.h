/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

#import <TSReading/Swift-Protocol.h>

@class NSString, TSDStrokePattern, TSUColor;

@interface TSDStroke : NSObject <Swift>

{
    TSUColor *mColor;
    double mWidth;
    double mActualWidth;
    int mCap;
    int mJoin;
    TSDStrokePattern *mPattern;
    double mMiterLimit;
}

@property (nonatomic, readonly) _Bool dontClearBackground;
@property (nonatomic, readonly) _Bool empty;
@property (nonatomic, readonly) _Bool solid;
@property (retain, nonatomic) TSUColor *color;
@property (nonatomic) double width;
@property (nonatomic) double actualWidth;
@property (nonatomic) int cap;
@property (nonatomic) int join;
@property (nonatomic) double miterLimit;
@property (retain, nonatomic) TSDStrokePattern *pattern;
@property (nonatomic, readonly) _Bool isNullStroke;
@property (nonatomic, readonly) _Bool isDash;
@property (nonatomic, readonly) _Bool isRoundDash;
@property (nonatomic, readonly) _Bool shouldRender;
@property (nonatomic, readonly) _Bool supportsPattern;
@property (nonatomic, readonly) _Bool supportsWidth;
@property (nonatomic, readonly) _Bool supportsColor;
@property (nonatomic, readonly) _Bool supportsLineOptions;
@property (nonatomic, readonly) double suggestedMinimumLineWidth;
@property (nonatomic, readonly) _Bool isFrame;
@property (nonatomic, readonly) _Bool isNearlyWhite;
@property (nonatomic, readonly) double dashSpacing;
@property (nonatomic, readonly) _Bool drawsOutsideStrokeBounds;
@property (nonatomic, readonly) struct _TSDStrokeOutsets outsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)stroke;
+ (Class)mutableClass;
+ (_Bool)canMixWithNilObjects;
+ (id)p_newStroke;
+ (id)p_newEmptyStroke;
+ (id)emptyStroke;
+ (id)strokeWithColor:(id)arg1 width:(double)arg2;
+ (id)strokeWithColor:(id)arg1 width:(double)arg2 pattern:(id)arg3;
+ (id)strokeWithColor:(id)arg1 width:(double)arg2 pattern:(id)arg3 miterLimit:(double)arg4;
+ (id)strokeWithColor:(id)arg1 width:(double)arg2 cap:(int)arg3 join:(int)arg4 pattern:(id)arg5;
+ (id)strokeWithColor:(id)arg1 width:(double)arg2 cap:(int)arg3 join:(int)arg4 pattern:(id)arg5 miterLimit:(double)arg6;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)paintLineEnd:(id)arg1 atPoint:(struct CGPoint)arg2 atAngle:(double)arg3 withScale:(double)arg4 inContext:(struct CGContext *)arg5 useFastDrawing:(_Bool)arg6;
- (id)strokeLineEnd:(id)arg1;
- (void)paintLineEnd:(id)arg1 atPoint:(struct CGPoint)arg2 atAngle:(double)arg3 withScale:(double)arg4 inContext:(struct CGContext *)arg5;
- (_Bool)isThemeEquivalent:(id)arg1;
- (SEL)mapThemeAssetSelector;
- (void)drawSwatchInRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (long long)mixingTypeWithObject:(id)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (void)paintPath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2;
- (void)paintRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (id)initWithColor:(id)arg1 width:(double)arg2 cap:(int)arg3 join:(int)arg4 pattern:(id)arg5;
- (id)initWithColor:(id)arg1 width:(double)arg2 cap:(int)arg3 join:(int)arg4 pattern:(id)arg5 miterLimit:(double)arg6;
- (void)applyToContext:(struct CGContext *)arg1 insideStroke:(_Bool)arg2;
- (id)colorForCGContext:(struct CGContext *)arg1;
- (void)paintRect:(struct CGRect)arg1 wantsInteriorStroke:(_Bool)arg2 inContext:(struct CGContext *)arg3;
- (void)paintPath:(struct CGPath *)arg1 wantsInteriorStroke:(_Bool)arg2 inContext:(struct CGContext *)arg3;
- (void)paintPath:(struct CGPath *)arg1 wantsInteriorStroke:(_Bool)arg2 inContext:(struct CGContext *)arg3 useFastDrawing:(_Bool)arg4;
- (_Bool)canApplyDirectlyToRepCALayer;
- (_Bool)canApplyToCAShapeLayer;
- (void)applyToCAShapeLayer:(id)arg1 insideStroke:(_Bool)arg2 withScale:(double)arg3;
- (_Bool)needsToExtendJoinsForBoundsCalculation;
- (struct CGRect)boundsForPath:(id)arg1;
- (void)p_setPropertiesFromStroke:(id)arg1;
- (void)p_setPatternPropertiesFromStroke:(id)arg1;
- (void)applyToContext:(struct CGContext *)arg1;
- (void)applyInteriorWrapPropertiesToContext:(struct CGContext *)arg1 insideStroke:(_Bool)arg2;
- (double)lineEndInsetAdjustment;
- (void)paintPathWithNormalClip:(struct CGPath *)arg1 wantsInteriorStroke:(_Bool)arg2 inContext:(struct CGContext *)arg3;
- (struct CGRect)boundsForLineEnd:(id)arg1 atPoint:(struct CGPoint)arg2 atAngle:(double)arg3 withScale:(double)arg4 transform:(struct CGAffineTransform)arg5;
- (id)pathForLineEnd:(id)arg1 wrapPath:(_Bool)arg2 atPoint:(struct CGPoint)arg3 atAngle:(double)arg4 withScale:(double)arg5;
- (void)applyToRepCALayer:(id)arg1 withScale:(double)arg2;
- (_Bool)prefersToApplyToCAShapeLayerDuringManipulation;
- (void)applyToCAShapeLayer:(id)arg1 withScale:(double)arg2;
- (_Bool)drawsInOneStep;
- (_Bool)shouldAntialiasDefeat;
- (id)strokeByTransformingByTransform:(struct CGAffineTransform)arg1;
- (_Bool)isEqualToStroke:(id)arg1;

@end
