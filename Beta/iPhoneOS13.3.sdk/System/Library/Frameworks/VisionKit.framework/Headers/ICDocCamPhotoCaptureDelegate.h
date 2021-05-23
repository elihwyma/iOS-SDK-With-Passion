/*
 Image: /System/Library/Frameworks/VisionKit.framework/VisionKit
 */

#import <Foundation/NSObject.h>

@class AVCapturePhotoSettings, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface ICDocCamPhotoCaptureDelegate : NSObject

{
    AVCapturePhotoSettings *_requestedPhotoSettings;
    NSDictionary *_metaData;
    struct __CVBuffer *_pbRef;
    CDUnknownBlockType _willCapturePhotoAnimation;
    CDUnknownBlockType _completed;
}

@property (retain, nonatomic) AVCapturePhotoSettings *requestedPhotoSettings;
@property (retain, nonatomic) NSDictionary *metaData;
@property (nonatomic) struct __CVBuffer *pbRef;
@property (copy, nonatomic) CDUnknownBlockType willCapturePhotoAnimation;
@property (copy, nonatomic) CDUnknownBlockType completed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)didFinish;
- (void)captureOutput:(id)arg1 didFinishProcessingPhotoSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 previewPhotoSampleBuffer:(struct opaqueCMSampleBuffer *)arg3 resolvedSettings:(id)arg4 bracketSettings:(id)arg5 error:(id)arg6;
- (void)captureOutput:(id)arg1 willBeginCaptureForResolvedSettings:(id)arg2;
- (void)captureOutput:(id)arg1 willCapturePhotoForResolvedSettings:(id)arg2;
- (void)captureOutput:(id)arg1 didFinishRecordingLivePhotoMovieForEventualFileAtURL:(id)arg2 resolvedSettings:(id)arg3;
- (void)captureOutput:(id)arg1 didFinishProcessingLivePhotoToMovieFileAtURL:(id)arg2 duration:(CDStruct_198678f7)arg3 photoDisplayTime:(CDStruct_198678f7)arg4 resolvedSettings:(id)arg5 error:(id)arg6;
- (void)captureOutput:(id)arg1 didFinishCaptureForResolvedSettings:(id)arg2 error:(id)arg3;
- (id)initWithRequestedPhotoSettings:(id)arg1 willCapturePhotoAnimation:(CDUnknownBlockType)arg2 completed:(CDUnknownBlockType)arg3;

@end
