/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/MFPBrush.h>

@class OITSUColor, OITSUImage;

__attribute__((visibility("hidden")))
@interface MFPImageBrush : MFPBrush

{
    OITSUImage *mPhoneImage;
    OITSUColor *mPhonePatternColor;
}

- (id)color;
- (void)fillPath:(id)arg1;
- (id)initWithPhoneImage:(id)arg1;

@end
