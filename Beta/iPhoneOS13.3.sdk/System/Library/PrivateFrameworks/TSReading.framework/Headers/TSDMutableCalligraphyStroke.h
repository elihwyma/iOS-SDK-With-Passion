/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSDCalligraphyStroke.h>

@class NSString, TSDStrokePattern, TSUColor;

@interface TSDMutableCalligraphyStroke : TSDCalligraphyStroke

@property (retain, nonatomic) TSUColor *color;
@property (nonatomic) double width;
@property (nonatomic) double actualWidth;
@property (nonatomic) int cap;
@property (nonatomic) int join;
@property (nonatomic) double miterLimit;
@property (retain, nonatomic) TSDStrokePattern *pattern;
@property (copy, nonatomic) NSString *strokeName;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setPropertiesFromStroke:(id)arg1;
- (void)setPatternPropertiesFromStroke:(id)arg1;

@end
