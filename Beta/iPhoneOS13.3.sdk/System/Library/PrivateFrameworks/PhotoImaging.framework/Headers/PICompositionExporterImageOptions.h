/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <PhotoImaging/PICompositionExporterOptions.h>

@class NUImageExportFormat;

@interface PICompositionExporterImageOptions : PICompositionExporterOptions

{
    _Bool _optimizeForSharing;
    NUImageExportFormat *_imageExportFormat;
    CDUnknownBlockType _metadataProcessor;
}

@property (copy) NUImageExportFormat *imageExportFormat;
@property (copy) CDUnknownBlockType metadataProcessor;
@property _Bool optimizeForSharing;

- (void)setImageExportFormatJpegWithQuality:(double)arg1;
- (id)imageExportFormatForURL:(id)arg1;

@end
