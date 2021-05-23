/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/MFPhoneBrush.h>

@class OITSUColor;

__attribute__((visibility("hidden")))
@interface MFPhoneSolidBrush : MFPhoneBrush

{
    OITSUColor *m_colour;
}

+ (id)solidBrushWithColour:(id)arg1;

- (void)fillPath:(id)arg1 in_path:(id)arg2;
- (id)initWithColour:(id)arg1;

@end
