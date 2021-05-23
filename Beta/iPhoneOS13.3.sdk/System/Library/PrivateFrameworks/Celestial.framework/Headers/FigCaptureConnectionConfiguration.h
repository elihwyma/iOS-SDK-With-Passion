/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

#import <Celestial/Swift-Protocol.h>

@class FigCaptureDepthDataSinkConfiguration, FigCaptureIrisSinkConfiguration, FigCaptureSinkConfiguration, FigCaptureSourceConfiguration, FigCaptureStillImageSinkConfiguration, FigCaptureVideoDataSinkConfiguration, FigCaptureVideoPreviewSinkConfiguration, FigCaptureVideoThumbnailSinkConfiguration, NSString;

@interface FigCaptureConnectionConfiguration : NSObject <Swift>

{
    NSString *_connectionID;
    unsigned int _mediaType;
    int _underlyingDeviceType;
    FigCaptureSourceConfiguration *_sourceConfiguration;
    FigCaptureSinkConfiguration *_sinkConfiguration;
    _Bool _enabled;
}

@property (copy, nonatomic) NSString *connectionID;
@property (nonatomic) unsigned int mediaType;
@property (nonatomic) int underlyingDeviceType;
@property (retain, nonatomic) FigCaptureSourceConfiguration *sourceConfiguration;
@property (retain, nonatomic) FigCaptureSinkConfiguration *sinkConfiguration;
@property (nonatomic) _Bool enabled;
@property (readonly) FigCaptureIrisSinkConfiguration *irisSinkConfiguration;
@property (readonly) FigCaptureStillImageSinkConfiguration *stillImageSinkConfiguration;
@property (readonly) FigCaptureVideoDataSinkConfiguration *videoDataSinkConfiguration;
@property (readonly) FigCaptureVideoPreviewSinkConfiguration *videoPreviewSinkConfiguration;
@property (readonly) FigCaptureDepthDataSinkConfiguration *depthDataSinkConfiguration;
@property (readonly) FigCaptureVideoThumbnailSinkConfiguration *thumbnailSinkConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (_Bool)sourcesFromUnderlyingStream;

@end
