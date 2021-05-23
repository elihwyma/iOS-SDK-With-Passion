/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NUImageExportFormat.h>

@interface NUImageExportFormatJPEG : NUImageExportFormat

{
    double _compressionQuality;
}

@property (nonatomic) double compressionQuality;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)fileType;
- (int)renderFormat;
- (void)addImageDestinationOptionsToImageProperties:(id)arg1;

@end
