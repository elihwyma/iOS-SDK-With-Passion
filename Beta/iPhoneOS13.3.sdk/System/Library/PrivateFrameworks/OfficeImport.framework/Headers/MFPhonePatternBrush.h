/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/MFPhoneBrush.h>

@class MFPhoneBitmap;

__attribute__((visibility("hidden")))
@interface MFPhonePatternBrush : MFPhoneBrush

{
    MFPhoneBitmap *m_pattern;
    _Bool m_usePaletteForBilevel;
}

+ (id)patternBrushWithBitmap:(id)arg1 usePaletteForBilevel:(_Bool)arg2;

- (void)fillPath:(id)arg1 in_path:(id)arg2;
- (id)initWithBitmap:(id)arg1 usePaletteForBilevel:(_Bool)arg2;

@end
