/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/EQKitCompoundBox.h>

@interface EQKitHBox : EQKitCompoundBox

- (_Bool)p_getTransform:(struct CGAffineTransform *)arg1 fromDescendant:(id)arg2;
- (void)renderIntoContext:(struct CGContext *)arg1 offset:(struct CGPoint)arg2;
- (_Bool)appendOpticalAlignToSpec:(struct Spec *)arg1 offset:(struct CGPoint)arg2;
- (struct CGRect)p_cacheErasableBounds;
- (void)p_cacheDimensionsForHeight:(double *)arg1 depth:(double *)arg2 width:(double *)arg3;

@end
