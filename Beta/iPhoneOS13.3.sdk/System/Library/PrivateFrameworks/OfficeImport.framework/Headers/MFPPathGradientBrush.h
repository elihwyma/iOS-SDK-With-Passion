/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/MFPGradientBrush.h>

@class NSArray, OITSUBezierPath, OITSUColor;

__attribute__((visibility("hidden")))
@interface MFPPathGradientBrush : MFPGradientBrush

{
    OITSUColor *mCenterColor;
    struct CGPoint mCenterPoint;
    NSArray *mSurroundColors;
    OITSUBezierPath *mPath;
}

- (void)setPath:(id)arg1;
- (id)startColor;
- (id)endColor;
- (void)setCenterColor:(id)arg1;
- (void)setCenterPoint:(struct CGPoint)arg1;
- (void)setSurroundColors:(id)arg1;
- (void)createShading;

@end
