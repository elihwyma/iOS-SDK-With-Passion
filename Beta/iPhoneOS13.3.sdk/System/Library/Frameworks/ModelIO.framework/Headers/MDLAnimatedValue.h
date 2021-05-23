/*
 Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

#import <Foundation/NSObject.h>

#import <ModelIO/Swift-Protocol.h>

@class NSArray;

@interface MDLAnimatedValue : NSObject <Swift>

{
    struct vector<(anonymous namespace)::TimeSampledVtValue, std::__1::allocator<(anonymous namespace)::TimeSampledVtValue>> _timeSampledData;
    unsigned long long _interpolation;
}

@property (nonatomic, readonly) unsigned long long precision;
@property (nonatomic, readonly) unsigned long long timeSampleCount;
@property (nonatomic, readonly) double minimumTime;
@property (nonatomic, readonly) double maximumTime;
@property (nonatomic) unsigned long long interpolation;
@property (nonatomic, readonly) NSArray *keyTimes;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)clear;
- (id).cxx_construct;
- (_Bool)isAnimated;
- (void)resetWithAnimatedValue:(id)arg1;
- (unsigned long long)getTimes:(double *)arg1 maxCount:(unsigned long long)arg2;
- (void)resetWithUsdAttribute:(const struct UsdAttribute *)arg1 timeScale:(double)arg2;
- (void)resetWithUsdAttribute:(const struct UsdAttribute *)arg1 timeScale:(double)arg2 time:(double)arg3;
- (struct VtValue)defaultVtValue;

@end
