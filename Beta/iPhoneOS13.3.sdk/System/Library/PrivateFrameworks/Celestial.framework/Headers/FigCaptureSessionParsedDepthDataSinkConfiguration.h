/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class FigDepthDataCaptureConnectionConfiguration, FigMetadataObjectCaptureConnectionConfiguration, FigVideoCaptureConnectionConfiguration;

@interface FigCaptureSessionParsedDepthDataSinkConfiguration : NSObject

{
    FigDepthDataCaptureConnectionConfiguration *_depthDataConnectionConfiguration;
    FigVideoCaptureConnectionConfiguration *_videoDataConnectionConfiguration;
    FigMetadataObjectCaptureConnectionConfiguration *_metadataObjectConnectionConfiguration;
}

@property (nonatomic, readonly) FigDepthDataCaptureConnectionConfiguration *depthDataConnectionConfiguration;
@property (nonatomic, readonly) FigVideoCaptureConnectionConfiguration *videoDataConnectionConfiguration;
@property (nonatomic, readonly) FigMetadataObjectCaptureConnectionConfiguration *metadataObjectConnectionConfiguration;

- (void)dealloc;
- (id)initWithDepthDataConnectionConfiguration:(id)arg1 videoDataConnectionConfiguration:(id)arg2 metadataObjectConnectionConfiguration:(id)arg3;

@end
