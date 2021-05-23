/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CMShapeUtils : NSObject

+ (id)inscribedBoundsWithBounds:(id)arg1 logicalBounds:(struct CGRect)arg2;
+ (id)relatvieBoundsWithAbsoluteInnerBounds:(id)arg1 parentBounds:(id)arg2;
+ (float)fontSizeForText:(id)arg1 insideRectangle:(struct CGSize)arg2;
+ (struct CGRect)transformRect:(struct CGRect)arg1 scale:(float)arg2 offsetX:(float)arg3 offsetY:(float)arg4;
+ (float)intersectionAngleNextToAngle:(float)arg1 isAfter:(_Bool)arg2 nodeSize:(struct CGSize)arg3;
+ (id)internalBoundsWithBounds:(id)arg1 scaleBounds:(struct CGRect)arg2;
+ (id)transformedBoundsWithBounds:(id)arg1 transform:(id)arg2;
+ (_Bool)isShapeALine:(id)arg1;
+ (double)mapAdjustCoord:(struct OADAdjustCoord)arg1 geometry:(id)arg2;
+ (float)scaleFactorFromLength:(float)arg1 toLength:(float)arg2;
+ (id)transformFromBounds:(struct CGRect)arg1 toOrientedBounds:(id)arg2;
+ (double)getFormulaResultFromCustomGeometry:(id)arg1 atIndex:(unsigned long long)arg2;
+ (int)radToNativeAngle:(double)arg1 isEscher:(_Bool)arg2;
+ (double)nativeAngleToRad:(int)arg1 isEscher:(_Bool)arg2;
+ (int)mapFormulaKeywordValue:(int)arg1 geometry:(id)arg2;
+ (double)mapFormulaOfType:(int)arg1 argValues:(double *)arg2 isEscher:(_Bool)arg3;
+ (float)normalizedAngle:(float)arg1;
+ (double)fixedPointDegToRad:(int)arg1;
+ (void)setCoordSpaceForCustomeGeometry:(id)arg1 fromSize:(struct CGSize)arg2;
+ (id)absoluteOrientedBoundsWithRelativeOrientedBounds:(id)arg1 parentOrientedBounds:(id)arg2 parentLogicalBounds:(struct CGRect)arg3;
+ (int)radToFixedPointDeg:(double)arg1;
+ (double)milliMinutesToRad:(int)arg1;
+ (int)radToMilliMinutes:(double)arg1;

@end
