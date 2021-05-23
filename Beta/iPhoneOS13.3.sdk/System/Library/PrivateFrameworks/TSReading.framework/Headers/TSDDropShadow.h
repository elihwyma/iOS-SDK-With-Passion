/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSDShadow.h>

@interface TSDDropShadow : TSDShadow

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (long long)mixingTypeWithObject:(id)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (id)initWithAngle:(double)arg1 offset:(double)arg2 radius:(double)arg3 opacity:(double)arg4 color:(struct CGColor *)arg5 enabled:(_Bool)arg6;
- (unsigned long long)shadowType;
- (id)newShadowClampedForSwatches;
- (struct CGRect)boundsInNaturalSpaceForRep:(id)arg1;
- (struct CGRect)boundsForRep:(id)arg1;
- (struct CGImage *)newShadowImageForRep:(id)arg1 withSize:(struct CGSize)arg2 drawSelector:(SEL)arg3 unflipped:(_Bool)arg4;

@end
