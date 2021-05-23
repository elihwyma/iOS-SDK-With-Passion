/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/EQKitBox.h>

@interface EQKitPathBox : EQKitBox

{
    struct CGPath *mCGPath;
    double mHeight;
    double mPaddingLeft;
    double mPaddingRight;
    double mDepth;
    double mWidth;
    _Bool mDimensionsValid;
    struct CGRect mErasableBounds;
    _Bool mErasableBoundsValid;
    struct CGColor *mCGColor;
    int mDrawingMode;
    double mLineWidth;
}

@property (nonatomic, readonly) double height;
@property (nonatomic, readonly) double depth;
@property (nonatomic, readonly) double width;
@property (nonatomic, readonly) double paddingLeft;
@property (nonatomic, readonly) double paddingRight;
@property (nonatomic, readonly) struct CGPath *cgPath;
@property (nonatomic, readonly) struct CGColor *color;
@property (nonatomic, readonly) int drawingMode;
@property (nonatomic, readonly) double lineWidth;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct CGRect)erasableBounds;
- (void)renderIntoContext:(struct CGContext *)arg1 offset:(struct CGPoint)arg2;
- (_Bool)appendOpticalAlignToSpec:(struct Spec *)arg1 offset:(struct CGPoint)arg2;
- (void)p_cacheDimensions;
- (id)initWithCGPath:(struct CGPath *)arg1 height:(double)arg2 paddingLeft:(double)arg3 paddingRight:(double)arg4 cgColor:(struct CGColor *)arg5 drawingMode:(int)arg6 lineWidth:(double)arg7;
- (struct CGRect)p_cacheErasableBounds;
- (id)initWithCGPath:(struct CGPath *)arg1 height:(double)arg2 paddingLeft:(double)arg3 paddingRight:(double)arg4 cgColor:(struct CGColor *)arg5;
- (id)initWithCGPath:(struct CGPath *)arg1 height:(double)arg2 cgColor:(struct CGColor *)arg3;
- (id)initWithCGPath:(struct CGPath *)arg1 height:(double)arg2 cgColor:(struct CGColor *)arg3 drawingMode:(int)arg4 lineWidth:(double)arg5;

@end
