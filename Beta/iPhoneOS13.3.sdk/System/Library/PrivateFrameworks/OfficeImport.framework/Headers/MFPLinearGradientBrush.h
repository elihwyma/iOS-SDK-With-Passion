/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/MFPGradientBrush.h>

@class OITSUColor;

__attribute__((visibility("hidden")))
@interface MFPLinearGradientBrush : MFPGradientBrush

{
    struct CGRect mBounds;
    OITSUColor *mStartColor;
    OITSUColor *mEndColor;
}

- (void)setBounds:(struct CGRect)arg1;
- (void)setStartColor:(id)arg1;
- (void)setEndColor:(id)arg1;
- (id)startColor;
- (id)endColor;
- (void)createShading;

@end
