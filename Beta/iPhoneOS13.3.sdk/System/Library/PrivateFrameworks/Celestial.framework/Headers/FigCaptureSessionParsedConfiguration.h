/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class FigCaptureSessionParsedMicSourceConfiguration, NSArray;

@interface FigCaptureSessionParsedConfiguration : NSObject

{
    _Bool _empty;
    _Bool _isMultiCamSession;
    NSArray *_parsedCameraSourceConfigurations;
    FigCaptureSessionParsedMicSourceConfiguration *_parsedMicSourceConfiguration;
    NSArray *_metadataSourceConfigurations;
    NSArray *_parsedPreviewSinkConfigurations;
    NSArray *_videoThumbnailSinkConfigurations;
    NSArray *_parsedStillImageSinkConfigurations;
    NSArray *_parsedVideoDataSinkConfigurations;
    NSArray *_parsedVisionDataSinkConfigurations;
    NSArray *_parsedDepthDataSinkConfigurations;
    NSArray *_parsedMetadataSinkConfigurations;
    NSArray *_parsedMovieFileSinkConfigurations;
    NSArray *_audioFileSinkConnectionConfigurations;
    NSArray *_audioDataSinkConnectionConfigurations;
}

@property (nonatomic, readonly) _Bool empty;
@property (nonatomic, readonly, getter=isMultiCamSession) _Bool multiCamSession;
@property (nonatomic, readonly) NSArray *parsedCameraSourceConfigurations;
@property (nonatomic, readonly) FigCaptureSessionParsedMicSourceConfiguration *parsedMicSourceConfiguration;
@property (nonatomic, readonly) NSArray *metadataSourceConfigurations;
@property (nonatomic, readonly) NSArray *parsedPreviewSinkConfigurations;
@property (nonatomic, readonly) NSArray *videoThumbnailSinkConfigurations;
@property (nonatomic, readonly) NSArray *parsedStillImageSinkConfigurations;
@property (nonatomic, readonly) NSArray *parsedVideoDataSinkConfigurations;
@property (nonatomic, readonly) NSArray *parsedVisionDataSinkConfigurations;
@property (nonatomic, readonly) NSArray *parsedDepthDataSinkConfigurations;
@property (nonatomic, readonly) NSArray *parsedMetadataSinkConfigurations;
@property (nonatomic, readonly) NSArray *parsedMovieFileSinkConfigurations;
@property (nonatomic, readonly) NSArray *audioFileSinkConnectionConfigurations;
@property (nonatomic, readonly) NSArray *audioDataSinkConnectionConfigurations;

+ (void)initialize;

- (void)dealloc;
- (int)_parseMultiCamConfiguration:(id)arg1 clientSetsUserInitiatedCaptureRequestTime:(_Bool)arg2;
- (id)initWithSessionConfiguration:(id)arg1 clientSetsUserInitiatedCaptureRequestTime:(_Bool)arg2;

@end
