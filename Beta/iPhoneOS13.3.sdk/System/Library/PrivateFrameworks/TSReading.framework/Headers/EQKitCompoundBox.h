/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/EQKitBox.h>

@class NSArray;

@interface EQKitCompoundBox : EQKitBox

{
    NSArray *mChildBoxes;
    double mHeight;
    double mDepth;
    double mWidth;
    _Bool mDimensionsValid;
    struct CGRect mErasableBounds;
    _Bool mErasableBoundsValid;
}

@property (nonatomic, readonly) double height;
@property (nonatomic, readonly) double depth;
@property (nonatomic, readonly) double width;
@property (nonatomic, readonly) NSArray *childBoxes;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct CGRect)erasableBounds;
- (struct CGRect)p_cacheErasableBounds;
- (id)initWithChildBoxes:(id)arg1;
- (void)p_cacheDimensionsForHeight:(double *)arg1 depth:(double *)arg2 width:(double *)arg3;

@end
