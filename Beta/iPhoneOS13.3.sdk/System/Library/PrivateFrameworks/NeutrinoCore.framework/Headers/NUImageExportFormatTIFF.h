/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NUImageExportFormat.h>

@interface NUImageExportFormatTIFF : NUImageExportFormat

{
    _Bool _preserveAlpha;
    long long _pixelType;
    long long _compression;
}

@property long long pixelType;
@property long long compression;
@property _Bool preserveAlpha;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)fileType;
- (int)depth;
- (int)renderFormat;
- (void)addImageDestinationOptionsToImageProperties:(id)arg1;

@end
