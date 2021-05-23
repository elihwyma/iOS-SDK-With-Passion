/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NUImageExportFormat.h>

@class NSDictionary, NSString;

@interface NUImageExportFormatGeneric : NUImageExportFormat

{
    int _renderFormat;
    NSString *_fileType;
    NSDictionary *_options;
}

@property (copy) NSString *fileType;
@property int renderFormat;
@property (copy) NSDictionary *options;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFileType:(id)arg1;
- (void)addImageDestinationOptionsToImageProperties:(id)arg1;

@end
