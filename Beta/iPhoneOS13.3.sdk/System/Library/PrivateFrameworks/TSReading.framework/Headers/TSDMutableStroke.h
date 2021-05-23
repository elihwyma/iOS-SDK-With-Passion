/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSDStroke.h>

@class TSDStrokePattern, TSUColor;

@interface TSDMutableStroke : TSDStroke

@property (nonatomic) _Bool dontClearBackground;
@property (retain, nonatomic) TSUColor *color;
@property (nonatomic) double width;
@property (nonatomic) double actualWidth;
@property (nonatomic) int cap;
@property (nonatomic) int join;
@property (nonatomic) double miterLimit;
@property (retain, nonatomic) TSDStrokePattern *pattern;

+ (id)stroke;
+ (id)emptyStroke;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setPropertiesFromStroke:(id)arg1;
- (void)setPatternPropertiesFromStroke:(id)arg1;

@end
