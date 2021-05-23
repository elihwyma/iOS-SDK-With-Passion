/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVCaptureFileOutputDelegateWrapper.h>

@class AVMomentCaptureMovieRecordingResolvedSettings, NSArray, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface AVMomentCaptureMovieFileOutputDelegateWrapper : AVCaptureFileOutputDelegateWrapper

{
    NSString *_videoCodecType;
    NSURL *_spatialOverCaptureMovieFileURL;
    NSArray *_spatialOverCaptureMovieMetadata;
    AVMomentCaptureMovieRecordingResolvedSettings *_resolvedSettings;
    _Bool _didFinishWritingMovieCallbackFired;
    _Bool _didFinishWritingSpatialOverCaptureMovieCallbackFired;
}

@property (readonly) NSString *videoCodecType;
@property (readonly) NSURL *spatialOverCaptureMovieFileURL;
@property (readonly) NSArray *spatialOverCaptureMovieMetadata;
@property (retain, nonatomic) AVMomentCaptureMovieRecordingResolvedSettings *resolvedSettings;
@property (nonatomic) _Bool didFinishWritingMovieCallbackFired;
@property (nonatomic) _Bool didFinishWritingSpatialOverCaptureMovieCallbackFired;

+ (id)wrapperWithSettings:(id)arg1 delegate:(id)arg2 connections:(id)arg3;

- (void)dealloc;
- (id)initWithSettings:(id)arg1 delegate:(id)arg2 connections:(id)arg3;

@end
