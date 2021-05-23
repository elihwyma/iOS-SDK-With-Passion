/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSDAngleGradient.h>

@class NSArray, NSString, TSUColor;

@interface TSDMutableAngleGradient : TSDAngleGradient

@property (nonatomic) double gradientAngleInDegrees;
@property (nonatomic) double gradientAngle;
@property (nonatomic) unsigned long long gradientType;
@property (nonatomic) double opacity;
@property (nonatomic) _Bool isAdvancedGradient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) NSArray *gradientStops;
@property (retain, nonatomic) TSUColor *firstColor;
@property (retain, nonatomic) TSUColor *lastColor;

- (void)setColorOfStopAtIndex:(unsigned long long)arg1 toColor:(id)arg2;
- (void)insertGradientStop:(id)arg1;
- (id)insertStopAtFraction:(double)arg1;
- (void)swapStopAtIndex:(unsigned long long)arg1 withStopAtIndex:(unsigned long long)arg2;
- (id)insertStopAtFraction:(double)arg1 withColor:(id)arg2;
- (void)removeStop:(id)arg1;
- (id)removeStopAtIndex:(unsigned long long)arg1;
- (void)reverseStopOrder;
- (void)evenlyDistributeStops;
- (void)moveStopAtIndex:(unsigned long long)arg1 toFraction:(double)arg2;
- (void)setInflectionOfStopAtIndex:(unsigned long long)arg1 toInflection:(double)arg2;

@end
