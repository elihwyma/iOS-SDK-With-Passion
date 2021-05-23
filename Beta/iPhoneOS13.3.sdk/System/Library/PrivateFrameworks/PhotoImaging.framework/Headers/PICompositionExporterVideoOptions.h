/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <PhotoImaging/PICompositionExporterOptions.h>

@interface PICompositionExporterVideoOptions : PICompositionExporterOptions

{
    _Bool _increaseBitRateIfNecessary;
    _Bool _bypassOutputSettingsIfNoComposition;
    CDUnknownBlockType _metadataProcessor;
}

@property (copy) CDUnknownBlockType metadataProcessor;
@property (nonatomic) _Bool increaseBitRateIfNecessary;
@property (nonatomic) _Bool bypassOutputSettingsIfNoComposition;

@end
