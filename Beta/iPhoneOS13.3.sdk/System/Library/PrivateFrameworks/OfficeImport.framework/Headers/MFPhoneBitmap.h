/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/MFBitmap.h>

@class OITSUImage;

__attribute__((visibility("hidden")))
@interface MFPhoneBitmap : MFBitmap

{
    OITSUImage *m_image;
}

- (id)getImage;

@end
