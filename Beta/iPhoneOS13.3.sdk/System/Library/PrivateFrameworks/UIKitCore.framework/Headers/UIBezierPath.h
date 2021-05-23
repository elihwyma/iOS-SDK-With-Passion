/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@interface UIBezierPath : NSObject <Swift>

{
    struct CGPath *_path;
    double *_lineDashPattern;
    unsigned long long _lineDashPatternCount;
    double _lineWidth;
    double _miterLimit;
    double _flatness;
    double _lineDashPhase;
    int _lineCapStyle;
    int _lineJoinStyle;
    _Bool _usesEvenOddFillRule;
    struct CGPath *_immutablePath;
    _Bool _immutablePathIsValid;
}

@property (nonatomic) const struct CGPath *CGPath;
@property (readonly, getter=isEmpty) _Bool empty;
@property (nonatomic, readonly) struct CGRect bounds;
@property (nonatomic, readonly) struct CGPoint currentPoint;
@property (nonatomic) double lineWidth;
@property (nonatomic) int lineCapStyle;
@property (nonatomic) int lineJoinStyle;
@property (nonatomic) double miterLimit;
@property (nonatomic) double flatness;
@property (nonatomic) _Bool usesEvenOddFillRule;

+ (_Bool)supportsSecureCoding;
+ (id)_continuousRoundedRectBezierPath:(struct CGRect)arg1 withRoundedCorners:(unsigned long long)arg2 cornerRadius:(struct CGSize)arg3 segments:(int)arg4;
+ (id)bezierPathWithRoundedRect:(struct CGRect)arg1 cornerRadius:(double)arg2;
+ (id)bezierPathWithRect:(struct CGRect)arg1;
+ (id)roundedRectBezierPath:(struct CGRect)arg1 withRoundedCorners:(unsigned long long)arg2 withCornerRadius:(double)arg3;
+ (id)bezierPathWithOvalInRect:(struct CGRect)arg1;
+ (id)_bezierPathWithPillRect:(struct CGRect)arg1 cornerRadius:(double)arg2;
+ (id)bezierPathWithRoundedRect:(struct CGRect)arg1 byRoundingCorners:(unsigned long long)arg2 cornerRadii:(struct CGSize)arg3;
+ (id)bezierPathWithCGPath:(struct CGPath *)arg1;
+ (id)bezierPath;
+ (id)_roundedRectBezierPath:(struct CGRect)arg1 withRoundedCorners:(unsigned long long)arg2 cornerRadius:(double)arg3 segments:(int)arg4 legacyCorners:(_Bool)arg5;
+ (id)_bezierPathWithArcRoundedRect:(struct CGRect)arg1 cornerRadius:(double)arg2;
+ (id)roundedRectBezierPath:(struct CGRect)arg1 withRoundedCorners:(unsigned long long)arg2 withCornerRadii:(id)arg3;
+ (id)_bezierPathWithRoundedRect:(struct CGRect)arg1 byRoundingCorners:(unsigned long long)arg2 cornerRadius:(double)arg3;
+ (id)_continuousRoundedRectBezierPath:(struct CGRect)arg1 withRoundedCorners:(unsigned long long)arg2 cornerRadii:(id)arg3 segments:(int)arg4 smoothPillShapes:(_Bool)arg5;
+ (id)bezierPathWithArcCenter:(struct CGPoint)arg1 radius:(double)arg2 startAngle:(double)arg3 endAngle:(double)arg4 clockwise:(_Bool)arg5;
+ (id)roundedRectBezierPath:(struct CGRect)arg1 withTopCornerRadius:(double)arg2 withBottomCornerRadius:(double)arg3;
+ (id)roundedRectBezierPath:(struct CGRect)arg1 withRoundedEdges:(unsigned long long)arg2;
+ (id)_roundedRectBezierPath:(struct CGRect)arg1 withRoundedCorners:(unsigned long long)arg2 cornerRadius:(double)arg3 segments:(int)arg4;
+ (id)shadowBezierPath:(struct CGRect)arg1 withRoundedEdges:(unsigned long long)arg2;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)containsPoint:(struct CGPoint)arg1;
- (void)stroke;
- (void)fill;
- (void)moveToPoint:(struct CGPoint)arg1;
- (void)appendPath:(id)arg1;
- (void)addLineToPoint:(struct CGPoint)arg1;
- (void)closePath;
- (void)clip;
- (void)_addRoundedCornerWithTrueCorner:(struct CGPoint)arg1 radius:(struct CGSize)arg2 corner:(unsigned long long)arg3 clockwise:(_Bool)arg4;
- (void)applyTransform:(struct CGAffineTransform)arg1;
- (void)setLineDash:(const double *)arg1 count:(long long)arg2 phase:(double)arg3;
- (void)addArcWithCenter:(struct CGPoint)arg1 radius:(double)arg2 startAngle:(double)arg3 endAngle:(double)arg4 clockwise:(_Bool)arg5;
- (void)appendBezierPathWithRect:(struct CGRect)arg1;
- (void)appendBezierPath:(id)arg1;
- (void)lineToPoint:(struct CGPoint)arg1;
- (struct CGPath *)_pathRef;
- (struct CGPath *)_createMutablePathByDecodingData:(id)arg1;
- (id)_initWithCGMutablePath:(struct CGPath *)arg1;
- (struct CGPath *)_mutablePath;
- (void)addQuadCurveToPoint:(struct CGPoint)arg1 controlPoint:(struct CGPoint)arg2;
- (void)addCurveToPoint:(struct CGPoint)arg1 controlPoint1:(struct CGPoint)arg2 controlPoint2:(struct CGPoint)arg3;
- (void)addClip;
- (void)removeAllPoints;
- (id)bezierPathByReversingPath;
- (void)getLineDash:(double *)arg1 count:(long long *)arg2 phase:(double *)arg3;
- (void)fillWithBlendMode:(int)arg1 alpha:(double)arg2;
- (void)strokeWithBlendMode:(int)arg1 alpha:(double)arg2;
- (void)appendBezierPathWithOvalInRect:(struct CGRect)arg1;
- (void)appendBezierPathWithOvalInRect:(struct CGRect)arg1 transform:(struct CGAffineTransform)arg2;
- (void)appendBezierPathWithArcWithCenter:(struct CGPoint)arg1 radius:(double)arg2 startAngle:(double)arg3 endAngle:(double)arg4 clockwise:(_Bool)arg5;

@end
