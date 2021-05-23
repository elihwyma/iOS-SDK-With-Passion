/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSDShadow.h>

@interface TSDCurvedShadow : TSDShadow

{
    double mCurve;
}

@property (nonatomic, readonly) double curve;

+ (id)curvedShadowWithOffset:(double)arg1 angle:(double)arg2 radius:(double)arg3 curve:(double)arg4 opacity:(double)arg5 color:(struct CGColor *)arg6 enabled:(_Bool)arg7;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (long long)mixingTypeWithObject:(id)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (id)initWithOffset:(double)arg1 angle:(double)arg2 radius:(double)arg3 curve:(double)arg4 opacity:(double)arg5 color:(struct CGColor *)arg6 enabled:(_Bool)arg7;
- (unsigned long long)shadowType;
- (struct CGRect)shadowBoundsForRect:(struct CGRect)arg1 additionalTransform:(struct CGAffineTransform)arg2;
- (double)clampOffset:(double)arg1;
- (id)newShadowClampedForSwatches;
- (_Bool)showForEditingText;
- (struct CGRect)boundsInNaturalSpaceForRep:(id)arg1;
- (struct CGRect)boundsForRep:(id)arg1;
- (struct CGImage *)newShadowImageForRep:(id)arg1 withSize:(struct CGSize)arg2 drawSelector:(SEL)arg3 unflipped:(_Bool)arg4;
- (double)paddingForBlur;
- (struct CGRect)expandedBoundsForRect:(struct CGRect)arg1;
- (double)offsetFromCurve;
- (double)getVerticalOffset:(struct CGSize)arg1;
- (struct CGPoint)boundsShiftForSize:(struct CGSize)arg1;

@end
