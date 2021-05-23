/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@class CAMCaptureCoordinationInfo, NSArray, NSDate, NSError, NSURL;

@interface CAMVideoCaptureResult : NSObject

{
    NSURL *_localDestinationURL;
    NSURL *_filteredLocalDestinationURL;
    CDStruct_79c71658 _dimensions;
    NSArray *_metadata;
    double _videoZoomFactor;
    long long _reason;
    struct __CVBuffer *_videoPreviewPixelBuffer;
    NSDate *_captureDate;
    CAMCaptureCoordinationInfo *_coordinationInfo;
    NSError *_error;
    CDStruct_1b6d18a9 _duration;
    CDStruct_1b6d18a9 _stillDisplayTime;
}

@property (nonatomic, readonly) NSURL *localDestinationURL;
@property (nonatomic, readonly) NSURL *filteredLocalDestinationURL;
@property (nonatomic, readonly) CDStruct_1b6d18a9 duration;
@property (nonatomic, readonly) CDStruct_1b6d18a9 stillDisplayTime;
@property (nonatomic, readonly) CDStruct_79c71658 dimensions;
@property (copy, nonatomic, readonly) NSArray *metadata;
@property (nonatomic, readonly) double videoZoomFactor;
@property (nonatomic, readonly) long long reason;
@property (nonatomic, readonly) _Bool stoppedUnexpectedly;
@property (nonatomic, readonly) struct __CVBuffer *videoPreviewPixelBuffer;
@property (nonatomic, readonly) NSDate *captureDate;
@property (nonatomic, readonly) CAMCaptureCoordinationInfo *coordinationInfo;
@property (nonatomic, readonly) NSError *error;

- (void)dealloc;
- (id)initWithURL:(id)arg1 filteredLocalDestinationURL:(id)arg2 duration:(CDStruct_1b6d18a9)arg3 stillDisplayTime:(CDStruct_1b6d18a9)arg4 dimensions:(CDStruct_79c71658)arg5 metadata:(id)arg6 videoZoomFactor:(double)arg7 reason:(long long)arg8 videoPreviewPixelBuffer:(struct __CVBuffer *)arg9 coordinationInfo:(id)arg10 error:(id)arg11;

@end
