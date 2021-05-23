/*
 Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

#import <Foundation/NSMutableAttributedString.h>

@interface NSMutableAttributedString (FIUISizing)

- (double)scaleFontSizeByAmount:(double)arg1 minimumFontSize:(double)arg2;
- (double)scaleNumericAttribute:(id)arg1 byAmount:(double)arg2;
- (struct CGSize)scaleFontAndKerningToFitSize:(struct CGSize)arg1 minimumFontSize:(double)arg2 minimumKerning:(double)arg3 stillDidntFit:(_Bool *)arg4;
- (void)scaleToFitWidth:(double)arg1;

@end
