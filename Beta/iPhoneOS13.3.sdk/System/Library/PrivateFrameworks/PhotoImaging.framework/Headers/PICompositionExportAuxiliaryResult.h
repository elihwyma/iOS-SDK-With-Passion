/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <PhotoImaging/PICompositionExportResult.h>

@class NSData, NSDictionary, NSURL;

@interface PICompositionExportAuxiliaryResult : PICompositionExportResult

{
    NSData *_companionImageData;
    NSURL *_companionVideoURL;
    NSDictionary *_auxiliaryImages;
    NSDictionary *_properties;
}

@property (retain) NSDictionary *auxiliaryImages;
@property (copy) NSDictionary *properties;
@property CDStruct_912cb5d2 inputSize;
@property (retain) NSData *companionImageData;
@property (retain) NSURL *companionVideoURL;

@end
