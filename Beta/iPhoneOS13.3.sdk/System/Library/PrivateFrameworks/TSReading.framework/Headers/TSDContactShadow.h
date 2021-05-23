/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSDShadow.h>

@interface TSDContactShadow : TSDShadow

{
    double mHeight;
}

@property (nonatomic, readonly) double height;
@property (nonatomic, readonly) double perspective;

+ (id)contactShadowWithOffset:(double)arg1 height:(double)arg2 radius:(double)arg3 opacity:(double)arg4 color:(struct CGColor *)arg5 enabled:(_Bool)arg6;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (long long)mixingTypeWithObject:(id)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (id)initWithOffset:(double)arg1 height:(double)arg2 radius:(double)arg3 opacity:(double)arg4 color:(struct CGColor *)arg5 enabled:(_Bool)arg6;
- (unsigned long long)shadowType;
- (struct CGRect)shadowBoundsForRect:(struct CGRect)arg1 additionalTransform:(struct CGAffineTransform)arg2;
- (double)clampOffset:(double)arg1;
- (double)clampRadius:(double)arg1;
- (id)newShadowClampedForSwatches;
- (struct CGRect)boundsInNaturalSpaceForRep:(id)arg1;
- (struct CGRect)boundsForRep:(id)arg1;
- (struct CGImage *)newShadowImageForRep:(id)arg1 withSize:(struct CGSize)arg2 drawSelector:(SEL)arg3 unflipped:(_Bool)arg4;
- (struct CGImage *)newShadowImageFromContext:(struct CGContext *)arg1 withSize:(struct CGSize)arg2 bounds:(struct CGRect)arg3 unflipped:(_Bool)arg4;

@end
