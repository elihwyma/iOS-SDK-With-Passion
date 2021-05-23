/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

#import <TSReading/Swift-Protocol.h>

@class TSUColor;

@interface TSDGradientStop : NSObject <Swift>

{
    TSUColor *mColor;
    double mFraction;
    double mInflection;
}

@property (copy, nonatomic, readonly) TSUColor *color;
@property (nonatomic, readonly) double fraction;
@property (nonatomic, readonly) double inflection;

+ (id)gradientStopWithColor:(id)arg1 fraction:(double)arg2;
+ (id)gradientStopWithColor:(id)arg1 fraction:(double)arg2 inflection:(double)arg3;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (long long)mixingTypeWithObject:(id)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (id)gradientStopWithColor:(id)arg1;
- (id)initWithGradientStop:(id)arg1;
- (void)p_setFraction:(double)arg1;
- (id)initWithColor:(id)arg1 fraction:(double)arg2 inflection:(double)arg3;
- (void)p_setColor:(id)arg1;
- (void)p_setInflection:(double)arg1;
- (id)initWithColor:(id)arg1 fraction:(double)arg2;
- (id)gradientStopWithInflection:(double)arg1;

@end
