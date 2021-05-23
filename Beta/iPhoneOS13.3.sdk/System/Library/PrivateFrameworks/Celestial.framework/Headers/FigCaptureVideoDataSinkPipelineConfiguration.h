/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class FigVideoCaptureConnectionConfiguration, NSDictionary, NSNumber;

@interface FigCaptureVideoDataSinkPipelineConfiguration : NSObject

{
    struct FigCaptureVideoTransform _sourceVideoTransform;
    unsigned int _sourcePixelFormat;
    _Bool _sourceHasAppliedAllZoom;
    int _videoStabilizationType;
    int _motionAttachmentsSource;
    _Bool _faceTrackingEnabled;
    _Bool _offlineVISMotionDataEnabled;
    FigVideoCaptureConnectionConfiguration *_videoDataConnectionConfiguration;
    NSNumber *_clientPID;
    NSDictionary *_colorInfo;
}

@property (nonatomic) struct FigCaptureVideoTransform sourceVideoTransform;
@property (nonatomic) unsigned int sourcePixelFormat;
@property (nonatomic) _Bool sourceHasAppliedAllZoom;
@property (nonatomic) int videoStabilizationType;
@property (nonatomic) int motionAttachmentsSource;
@property (nonatomic) _Bool faceTrackingEnabled;
@property (nonatomic) _Bool offlineVISMotionDataEnabled;
@property (retain, nonatomic) FigVideoCaptureConnectionConfiguration *videoDataConnectionConfiguration;
@property (retain, nonatomic) NSNumber *clientPID;
@property (retain, nonatomic) NSDictionary *colorInfo;

- (void)dealloc;

@end
