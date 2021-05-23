/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <Foundation/NSObject.h>

@class NSString, UIColor;

@interface AKTSDBrushStroke : NSObject

{
    int _join;
    NSString *_strokeName;
    UIColor *_color;
    double _width;
    double _miterLimit;
}

@property (copy, nonatomic, readonly) NSString *strokeName;
@property (retain, nonatomic, readonly) UIColor *color;
@property (nonatomic, readonly) double width;
@property (nonatomic, readonly) int join;
@property (nonatomic, readonly) double miterLimit;

+ (id)cacheDirectory;
+ (id)strokeWithType:(long long)arg1 color:(id)arg2 width:(double)arg3;
+ (void)loadLineEndsForBrush:(id)arg1 inSVGDoc:(struct _xmlDoc *)arg2;
+ (void)loadSectionsForBrush:(id)arg1 inSVGDoc:(struct _xmlDoc *)arg2;
+ (void)loadBrush:(id)arg1;
+ (id)strokeWithName:(id)arg1 color:(id)arg2 width:(double)arg3;
+ (Class)mutableClass;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)brushPath:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)paintLineEnd:(id)arg1 atPoint:(struct CGPoint)arg2 atAngle:(double)arg3 withScale:(double)arg4 inContext:(struct CGContext *)arg5 useFastDrawing:(_Bool)arg6;
- (id)strokeLineEnd:(id)arg1;
- (id)initWithName:(id)arg1 color:(id)arg2 width:(double)arg3 join:(int)arg4 miterLimit:(double)arg5;
- (void)paintLineEnd:(id)arg1 atPoint:(struct CGPoint)arg2 atAngle:(double)arg3 withScale:(double)arg4 inContext:(struct CGContext *)arg5;
- (id)brushPathsForId:(id)arg1;
- (id)brushBoundsForId:(id)arg1;
- (void)brushSection:(id)arg1 sectionIndex:(unsigned long long)arg2 ontoPath:(id)arg3 withScaling:(CDStruct_c3b9c2ee)arg4 inElementRange:(struct _NSRange)arg5 into:(id)arg6 viewScale:(double)arg7;
- (void)brushPath:(id)arg1 withScaling:(CDStruct_c3b9c2ee)arg2 inElementRange:(struct _NSRange)arg3 into:(id)arg4 sectionIndex:(unsigned long long *)arg5 viewScale:(double)arg6;

@end
