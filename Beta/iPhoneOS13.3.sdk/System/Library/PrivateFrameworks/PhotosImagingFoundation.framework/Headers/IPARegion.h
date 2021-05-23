/*
 Image: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
 */

#import <NSObject.h>

@interface IPARegion : NSObject

{
    struct Region *_imp;
}

+ (id)region;
+ (id)regionWithRectArray:(id)arg1;
+ (id)regionWithRect:(struct CGRect)arg1;
+ (id)regionWithRegion:(id)arg1;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)count;
- (_Bool)isEmpty;
- (struct CGRect)bounds;
- (id)initWithRect:(struct CGRect)arg1;
- (_Bool)intersectsRect:(struct CGRect)arg1;
- (_Bool)intersectsRegion:(id)arg1;
- (double)area;
- (id)initWithRegion:(id)arg1;
- (_Bool)isEqualToRegion:(id)arg1;
- (id)regionByAddingRegion:(id)arg1;
- (id)initWithRectArray:(id)arg1;
- (void)enumerateRects:(CDUnknownBlockType)arg1;
- (_Bool)includesRect:(struct CGRect)arg1;
- (_Bool)includesRegion:(id)arg1;
- (id)regionByAddingRect:(struct CGRect)arg1;
- (id)regionByAddingRectArray:(id)arg1;
- (id)regionByRemovingRect:(struct CGRect)arg1;
- (id)regionByRemovingRegion:(id)arg1;
- (id)regionByRemovingRectArray:(id)arg1;
- (id)regionByClippingToRect:(struct CGRect)arg1;
- (id)regionByClippingToRegion:(id)arg1;
- (id)regionByClippingToRectArray:(id)arg1;
- (id)regionByExcludingRect:(struct CGRect)arg1;
- (id)regionByExcludingRegion:(id)arg1;
- (id)regionByScalingBy:(struct CGPoint)arg1;
- (id)regionByTranslatingBy:(struct CGPoint)arg1;
- (id)regionByGrowingBy:(struct CGPoint)arg1;
- (id)regionByGrowingBy:(struct CGPoint)arg1 inRect:(struct CGRect)arg2;
- (id)regionByShrinkingBy:(struct CGPoint)arg1;
- (id)regionByShrinkingBy:(struct CGPoint)arg1 inRect:(struct CGRect)arg2;
- (id)regionByRoundingUp;
- (id)regionByRoundingDown;
- (id)regionByApplyingOrientation:(long long)arg1 imageSize:(struct CGSize)arg2;
- (id)regionByApplyingAffineTransform:(struct CGAffineTransform)arg1;
- (id)regionByFlippingInRect:(struct CGRect)arg1;

@end
