/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

#import <OfficeImport/Swift-Protocol.h>

__attribute__((visibility("hidden")))
@interface OITSUBezierPath : NSObject <Swift>

{
    long long sfr_elementCount;
    long long sfr_elementMax;
    struct PATHSEGMENT *sfr_head;
    double *sfr_elementLength;
    double sfr_totalLength;
    long long sfr_lastSubpathIndex;
    void *sfr_extraSegments;
    double sfr_lineWidth;
    struct CGRect sfr_controlPointBounds;
    double sfr_miterLimit;
    double sfr_flatness;
    double *sfr_dashedLinePattern;
    unsigned long long sfr_dashedLineCount;
    double sfr_dashedLinePhase;
    void *sfr_path;
    long long sfr_extraSegmentCount;
    long long sfr_extraSegmentMax;
    struct {
        unsigned int sfr_flags:8;
        unsigned int sfr_pathState:2;
        unsigned int sfr_calculatedLengths:1;
        unsigned int sfr_unused:21;
    } sfr_bpFlags;
}

+ (void)initialize;
+ (void)setLineWidth:(double)arg1;
+ (double)lineWidth;
+ (id)bezierPathWithRoundedRect:(struct CGRect)arg1 cornerRadius:(double)arg2;
+ (id)bezierPathWithRect:(struct CGRect)arg1;
+ (id)bezierPathWithOvalInRect:(struct CGRect)arg1;
+ (id)bezierPathWithCGPath:(struct CGPath *)arg1;
+ (id)bezierPath;
+ (void)fillRect:(struct CGRect)arg1;
+ (void)strokeRect:(struct CGRect)arg1;
+ (unsigned long long)lineCapStyle;
+ (void)setLineCapStyle:(unsigned long long)arg1;
+ (unsigned long long)lineJoinStyle;
+ (void)setLineJoinStyle:(unsigned long long)arg1;
+ (double)miterLimit;
+ (void)setMiterLimit:(double)arg1;
+ (double)flatness;
+ (void)setFlatness:(double)arg1;
+ (unsigned long long)windingRule;
+ (void)setWindingRule:(unsigned long long)arg1;
+ (id)bezierPathWithStart:(struct CGPoint)arg1 end:(struct CGPoint)arg2;
+ (void)clipRect:(struct CGRect)arg1;
+ (void)strokeLineFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2;
+ (void)setDefaultMiterLimit:(double)arg1;
+ (double)defaultMiterLimit;
+ (void)setDefaultFlatness:(double)arg1;
+ (double)defaultFlatness;
+ (void)setDefaultWindingRule:(unsigned long long)arg1;
+ (unsigned long long)defaultWindingRule;
+ (void)setDefaultLineCapStyle:(unsigned long long)arg1;
+ (unsigned long long)defaultLineCapStyle;
+ (void)setDefaultLineJoinStyle:(unsigned long long)arg1;
+ (unsigned long long)defaultLineJoinStyle;
+ (void)setDefaultLineWidth:(double)arg1;
+ (double)defaultLineWidth;

- (id)init;
- (void)dealloc;
- (double)length;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEmpty;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (const char *)cString;
- (id)initWithCString:(const char *)arg1;
- (struct CGRect)bounds;
- (long long)elementAtIndex:(long long)arg1;
- (void)setLineWidth:(double)arg1;
- (double)lineWidth;
- (_Bool)containsPoint:(struct CGPoint)arg1;
- (struct CGPath *)CGPath;
- (void)stroke;
- (void)fill;
- (void)moveToPoint:(struct CGPoint)arg1;
- (void)closePath;
- (void)setLineDash:(const double *)arg1 count:(long long)arg2 phase:(double)arg3;
- (void)appendBezierPathWithRect:(struct CGRect)arg1;
- (void)appendBezierPath:(id)arg1;
- (void)lineToPoint:(struct CGPoint)arg1;
- (void)addClip;
- (void)removeAllPoints;
- (id)bezierPathByReversingPath;
- (struct CGPoint)currentPoint;
- (void)getLineDash:(double *)arg1 count:(long long *)arg2 phase:(double *)arg3;
- (void)appendBezierPathWithOvalInRect:(struct CGRect)arg1;
- (void)appendBezierPathWithArcWithCenter:(struct CGPoint)arg1 radius:(double)arg2 startAngle:(double)arg3 endAngle:(double)arg4 clockwise:(_Bool)arg5;
- (unsigned long long)lineCapStyle;
- (void)setLineCapStyle:(unsigned long long)arg1;
- (unsigned long long)lineJoinStyle;
- (void)setLineJoinStyle:(unsigned long long)arg1;
- (double)miterLimit;
- (void)setMiterLimit:(double)arg1;
- (double)flatness;
- (void)setFlatness:(double)arg1;
- (long long)elementCount;
- (_Bool)isCircular;
- (unsigned long long)windingRule;
- (void)setWindingRule:(unsigned long long)arg1;
- (_Bool)isRectangular;
- (void)_deviceMoveToPoint:(struct CGPoint)arg1;
- (void)_deviceLineToPoint:(struct CGPoint)arg1;
- (void)_deviceCurveToPoint:(struct CGPoint)arg1 controlPoint1:(struct CGPoint)arg2 controlPoint2:(struct CGPoint)arg3;
- (void)_deviceClosePath;
- (void)subdivideBezierWithFlatness:(double)arg1 startPoint:(struct CGPoint)arg2 controlPoint1:(struct CGPoint)arg3 controlPoint2:(struct CGPoint)arg4 endPoint:(struct CGPoint)arg5;
- (void)flattenIntoPath:(id)arg1;
- (void)curveToPoint:(struct CGPoint)arg1 controlPoint1:(struct CGPoint)arg2 controlPoint2:(struct CGPoint)arg3;
- (void)_doPath;
- (struct CGRect)controlPointBounds;
- (long long)elementAtIndex:(long long)arg1 associatedPoints:(struct CGPoint *)arg2;
- (long long)elementAtIndex:(long long)arg1 allPoints:(struct CGPoint *)arg2;
- (double)calculateLengthOfElement:(long long)arg1;
- (void)calculateLengths;
- (void)appendBezierPathWithArcWithCenter:(struct CGPoint)arg1 radius:(double)arg2 startAngle:(double)arg3 endAngle:(double)arg4;
- (void)transformUsingAffineTransform:(struct CGAffineTransform)arg1;
- (void)_appendArcSegmentWithCenter:(struct CGPoint)arg1 radius:(double)arg2 angle1:(double)arg3 angle2:(double)arg4;
- (void)relativeMoveToPoint:(struct CGPoint)arg1;
- (void)relativeLineToPoint:(struct CGPoint)arg1;
- (void)relativeCurveToPoint:(struct CGPoint)arg1 controlPoint1:(struct CGPoint)arg2 controlPoint2:(struct CGPoint)arg3;
- (id)bezierPathByFlatteningPath;
- (id)_copyFlattenedPath;
- (_Bool)isFlat;
- (_Bool)isClockwise;
- (double)lengthOfElement:(long long)arg1;
- (double)lengthToElement:(long long)arg1;
- (void)setAssociatedPoints:(struct CGPoint *)arg1 atIndex:(long long)arg2;
- (void)appendBezierPathWithPoints:(struct CGPoint *)arg1 count:(long long)arg2;
- (void)appendBezierPathWithArcFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2 radius:(double)arg3;
- (void)_addPathSegment:(long long)arg1 point:(struct CGPoint)arg2;
- (id)bezierPathByRemovingRedundantElements;
- (_Bool)isTriangular;
- (_Bool)isDiamond;
- (void)appendBezierPathWithArcWithEllipseBounds:(struct CGRect)arg1 startAngle:(double)arg2 swingAngle:(double)arg3 angleType:(int)arg4 startNewPath:(_Bool)arg5;
- (void)appendBezierPathWithArcWithEllipseBounds:(struct CGRect)arg1 startRadialVector:(struct CGPoint)arg2 endRadialVector:(struct CGPoint)arg3 angleSign:(int)arg4 startNewPath:(_Bool)arg5;
- (void)copyPathAttributesTo:(id)arg1;
- (_Bool)_isValid:(double)arg1;
- (struct CGPoint)_checkPointForValidity:(struct CGPoint)arg1;
- (void)flattenIntoPath:(id)arg1 flatness:(double)arg2;
- (id)bezierPathByFlatteningPathWithFlatness:(double)arg1;
- (id)p_bezierPathByRemovingRedundantElementAndSubregionsSmallerThanThreshold:(double)arg1;
- (void)_appendToPath:(id)arg1 skippingInitialMoveIfPossible:(_Bool)arg2;
- (void)appendBezierPath:(id)arg1 skippingInitialMoveIfPossible:(_Bool)arg2;
- (id)bezierPathByRemovingSmallSubpathsForInteriorWrapsForInset:(double)arg1;
- (void)attachBezierPath:(id)arg1;

@end
