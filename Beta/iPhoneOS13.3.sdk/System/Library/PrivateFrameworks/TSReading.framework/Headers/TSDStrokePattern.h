/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

#import <TSReading/Swift-Protocol.h>

@interface TSDStrokePattern : NSObject <Swift>

{
    double mPattern[6];
    unsigned long long mCount;
    double mPhase;
    int mType;
}

@property (nonatomic, readonly) int patternType;
@property (nonatomic, readonly) double *pattern;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) double phase;
@property (nonatomic, readonly) _Bool isDash;
@property (nonatomic, readonly) _Bool isRoundDash;

+ (id)strokePatternWithPattern:(const double *)arg1 count:(unsigned long long)arg2 phase:(double)arg3;
+ (id)solidPattern;
+ (id)emptyPattern;
+ (id)shortDashPattern;
+ (id)mediumDashPattern;
+ (id)longDashPattern;
+ (id)roundDashPattern;
+ (id)roundDashPatternWithSpacing:(double)arg1;
+ (id)dashPatternWithSpacing:(double)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)mixingTypeWithObject:(id)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (id)p_initWithType:(int)arg1 pattern:(const double *)arg2 count:(unsigned long long)arg3 phase:(double)arg4;
- (id)initWithPattern:(const double *)arg1 count:(unsigned long long)arg2 phase:(double)arg3;
- (void)i_applyToContext:(struct CGContext *)arg1 lineWidth:(double)arg2 capStyle:(unsigned long long *)arg3;
- (void)p_applyToCAShapeLayer:(id)arg1 lineWidth:(double)arg2;
- (void)applyToContext:(struct CGContext *)arg1 lineWidth:(double)arg2;
- (void)applyToCAShapeLayer:(id)arg1;

@end
