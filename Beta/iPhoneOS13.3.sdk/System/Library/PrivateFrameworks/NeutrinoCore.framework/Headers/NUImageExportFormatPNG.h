/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NUImageExportFormat.h>

@interface NUImageExportFormatPNG : NUImageExportFormat

{
    _Bool _preserveAlpha;
}

@property _Bool preserveAlpha;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)fileType;
- (int)renderFormat;
- (void)addImageDestinationOptionsToImageProperties:(id)arg1;

@end
