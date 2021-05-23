/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/EQKitCompoundBox.h>

@interface EQKitVBox : EQKitCompoundBox

{
    unsigned long long mPivotIndex;
}

@property (nonatomic, readonly) unsigned long long pivotIndex;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)p_getTransform:(struct CGAffineTransform *)arg1 fromDescendant:(id)arg2;
- (void)renderIntoContext:(struct CGContext *)arg1 offset:(struct CGPoint)arg2;
- (_Bool)appendOpticalAlignToSpec:(struct Spec *)arg1 offset:(struct CGPoint)arg2;
- (struct CGRect)p_cacheErasableBounds;
- (id)initWithChildBoxes:(id)arg1;
- (void)p_cacheDimensionsForHeight:(double *)arg1 depth:(double *)arg2 width:(double *)arg3;
- (id)initWithChildBoxes:(id)arg1 pivotIndex:(unsigned long long)arg2;

@end
