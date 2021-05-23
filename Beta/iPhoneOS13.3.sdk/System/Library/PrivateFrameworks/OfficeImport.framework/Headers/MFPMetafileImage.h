/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/MFPImage.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface MFPMetafileImage : MFPImage

{
    NSData *mMetafileData;
}

- (id)initWithMetafileData:(id)arg1;
- (void)drawInRect:(struct CGRect)arg1 fromRect:(struct CGRect)arg2 unit:(int)arg3 effect:(id)arg4;
- (id)phoneImage;

@end
