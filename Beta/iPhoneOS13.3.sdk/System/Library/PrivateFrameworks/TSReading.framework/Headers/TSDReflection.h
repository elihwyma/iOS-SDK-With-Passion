/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

#import <TSReading/Swift-Protocol.h>

@interface TSDReflection : NSObject <Swift>

{
    double mOpacity;
    double mFadeAcceleration;
}

@property (nonatomic, readonly) double opacity;
@property (nonatomic, readonly) double fadeAcceleration;

+ (_Bool)canMixWithNilObjects;
+ (id)reflection;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (long long)mixingTypeWithObject:(id)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (id)initWithOpacity:(double)arg1;
- (id)initWithOpacity:(double)arg1 fadeAcceleration:(double)arg2;

@end
