/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

#import <TSReading/Swift-Protocol.h>

@interface TSDPathSource : NSObject <Swift>

{
    _Bool mHorizontalFlip;
    _Bool mVerticalFlip;
}

@property _Bool hasHorizontalFlip;
@property _Bool hasVerticalFlip;

+ (id)pathSourceForShapeType:(int)arg1 naturalSize:(struct CGSize)arg2;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)bezierPath;
- (struct CGSize)naturalSize;
- (void)setNaturalSize:(struct CGSize)arg1;
- (_Bool)isCircular;
- (_Bool)isRectangular;
- (long long)mixingTypeWithObject:(id)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (id)bezierPathWithoutFlips;
- (struct CGAffineTransform)pathFlipTransform;
- (_Bool)isRectangularForever;
- (id)interiorWrapPath;
- (Class)preferredControllerClass;
- (double)uniformScaleForScalingToNaturalSize:(struct CGSize)arg1;
- (void)scaleToNaturalSize:(struct CGSize)arg1;
- (id)valueForSetSelector:(SEL)arg1;

@end
