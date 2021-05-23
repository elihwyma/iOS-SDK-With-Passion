/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSDPathSource.h>

@class TSDBezierPath;

@interface TSDBezierPathSource : TSDPathSource

{
    TSDBezierPath *mPath;
    _Bool mIsRectangular;
    struct CGSize mNaturalSize;
}

@property (nonatomic) struct CGSize naturalSize;

+ (id)pathSourceWithBezierPath:(id)arg1;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isCircular;
- (_Bool)isRectangular;
- (long long)mixingTypeWithObject:(id)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (id)bezierPathWithoutFlips;
- (_Bool)isRectangularForever;
- (id)initWithBezierPath:(id)arg1;
- (void)p_setBezierPath:(id)arg1;
- (struct CGAffineTransform)transformToNaturalSize;
- (id)initWithNaturalSize:(struct CGSize)arg1;

@end
