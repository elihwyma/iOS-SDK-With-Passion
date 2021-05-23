/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/EQKitBox.h>

@interface EQKitPaddedBox : EQKitBox

{
    EQKitBox *mBox;
    double mHeight;
    double mDepth;
    double mWidth;
    double mLspace;
    double mVoffset;
}

@property (nonatomic, readonly) EQKitBox *box;
@property (nonatomic, readonly) double height;
@property (nonatomic, readonly) double depth;
@property (nonatomic, readonly) double width;
@property (nonatomic, readonly) double lspace;
@property (nonatomic, readonly) double voffset;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)p_getTransform:(struct CGAffineTransform *)arg1 fromDescendant:(id)arg2;
- (double)opticalAlignWidth;
- (struct CGRect)erasableBounds;
- (void)renderIntoContext:(struct CGContext *)arg1 offset:(struct CGPoint)arg2;
- (_Bool)appendOpticalAlignToSpec:(struct Spec *)arg1 offset:(struct CGPoint)arg2;
- (id)initWithBox:(id)arg1 height:(double)arg2 width:(double)arg3 depth:(double)arg4 lspace:(double)arg5 voffset:(double)arg6;

@end
