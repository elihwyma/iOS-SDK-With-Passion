/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/MFPImage.h>

@class NSData, OITSUImage;

__attribute__((visibility("hidden")))
@interface MFPBitmapImage : MFPImage

{
    NSData *mBitmapData;
    OITSUImage *mPhoneBitmapImage;
    struct CGSize mPixelSize;
    struct CGSize mPointSize;
}

- (struct CGSize)pointSize;
- (id)initWithBitmapData:(id)arg1;
- (struct CGSize)pixelSize;
- (void)drawInRect:(struct CGRect)arg1 fromRect:(struct CGRect)arg2 unit:(int)arg3 effect:(id)arg4;
- (id)phoneImage;

@end
