/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVMomentCaptureMovieRecordingResolvedSettings, NSArray, NSString, NSURL;

@interface AVMomentCaptureMovie : NSObject

{
    AVMomentCaptureMovieRecordingResolvedSettings *_resolvedSettings;
    NSURL *_outputFileURL;
    NSURL *_debugMetadataSidecarFileURL;
    struct __CVBuffer *_previewPixelBuffer;
    CDStruct_1b6d18a9 _duration;
    NSArray *_movieMetadata;
    NSString *_overCaptureGroupIdentifier;
    _Bool _hasOverCapture;
}

@property (nonatomic, readonly) AVMomentCaptureMovieRecordingResolvedSettings *resolvedSettings;
@property (nonatomic, readonly) NSURL *outputFileURL;
@property (nonatomic, readonly) NSURL *debugMetadataSidecarFileURL;
@property (nonatomic, readonly) struct __CVBuffer *previewPixelBuffer;
@property (nonatomic, readonly) CDStruct_1b6d18a9 duration;
@property (nonatomic, readonly) NSArray *movieMetadata;

+ (id)movieWithResolvedSettings:(id)arg1 outputFileURL:(id)arg2 movieMetadata:(id)arg3;

- (void)dealloc;
- (id)description;
- (id)debugDescription;
- (void)_setDuration:(CDStruct_1b6d18a9)arg1;
- (void)_setDebugMetadataSidecarFileURL:(id)arg1;
- (void)_setPreviewPixelBuffer:(struct __CVBuffer *)arg1;
- (id)_initWithResolvedSettings:(id)arg1 outputFileURL:(id)arg2 movieMetadata:(id)arg3;

@end
