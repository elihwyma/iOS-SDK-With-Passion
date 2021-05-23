/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class MFPBrush, MFPCustomLineCap;

__attribute__((visibility("hidden")))
@interface MFPPen : NSObject

{
    MFPBrush *mBrush;
    float mWidth;
    struct CGAffineTransform mTransform;
    int mStartCap;
    int mEndCap;
    int mLineJoin;
    float mMiterLimit;
    int mDashStyle;
    int mDashCap;
    float mDashOffset;
    int mDashPatternCount;
    float *mDashPattern;
    int mAlignment;
    int mCompoundArrayCount;
    float *mCompoundArray;
    MFPCustomLineCap *mCustomStartCap;
    MFPCustomLineCap *mCustomEndCap;
}

- (id)init;
- (void)dealloc;
- (struct CGAffineTransform)transform;
- (int)alignment;
- (void)setAlignment:(int)arg1;
- (float)width;
- (void)setWidth:(float)arg1;
- (void)setTransform:(struct CGAffineTransform)arg1;
- (float)miterLimit;
- (void)setMiterLimit:(float)arg1;
- (void)setLineJoin:(int)arg1;
- (int)lineJoin;
- (const float *)dashPattern;
- (void)strokePath:(id)arg1;
- (id)brush;
- (int)dashStyle;
- (void)setDashStyle:(int)arg1;
- (void)setStartCap:(int)arg1;
- (void)setEndCap:(int)arg1;
- (void)setDashCap:(int)arg1;
- (void)setDashOffset:(float)arg1;
- (void)setDashPattern:(const float *)arg1 count:(int)arg2;
- (void)setCompoundArray:(const float *)arg1 count:(int)arg2;
- (void)setBrush:(id)arg1;
- (void)setDashPattern:(const float *)arg1 count:(int)arg2 toPath:(id)arg3;
- (void)applyLineCapToPath:(id)arg1;
- (void)applyDashCapToPath:(id)arg1;
- (void)applyLineJoinToPath:(id)arg1;
- (void)applyDashPatternToPath:(id)arg1;
- (int)startCap;
- (int)endCap;
- (int)dashCap;
- (float)dashOffset;
- (int)dashPatternCount;
- (int)compoundArrayCount;
- (const float *)compoundArray;
- (id)customStartCap;
- (void)setCustomStartCap:(id)arg1;
- (id)customEndCap;
- (void)setCustomEndCap:(id)arg1;

@end
