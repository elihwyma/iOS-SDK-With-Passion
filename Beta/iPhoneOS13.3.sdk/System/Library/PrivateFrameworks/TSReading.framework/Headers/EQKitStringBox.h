/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/EQKitBox.h>

@class NSAttributedString;

@interface EQKitStringBox : EQKitBox

{
    NSAttributedString *mAttributedString;
    struct __CTLine *mLine;
    double mHeight;
    double mDepth;
    double mWidth;
    struct CGRect mErasableBounds;
    _Bool mDimensionsValid;
    struct CGColor *mCGColor;
}

@property (nonatomic, readonly) double height;
@property (nonatomic, readonly) double depth;
@property (nonatomic, readonly) double width;
@property (nonatomic, readonly) NSAttributedString *attributedString;
@property (nonatomic, readonly) struct __CTLine *line;
@property (nonatomic, readonly) struct CGColor *color;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct CGRect)erasableBounds;
- (void)renderIntoContext:(struct CGContext *)arg1 offset:(struct CGPoint)arg2;
- (_Bool)appendOpticalAlignToSpec:(struct Spec *)arg1 offset:(struct CGPoint)arg2;
- (id)initWithAttributedString:(id)arg1 cgColor:(struct CGColor *)arg2;
- (void)p_cacheDimensions;
- (double)positionOfCharacterAtIndex:(unsigned long long)arg1;

@end
