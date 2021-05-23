/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@class CAMVideoThumbnailOutputConfiguration, NSArray;

@interface CAMCaptureGraphConfiguration : NSObject

{
    _Bool _videoHDRSuspended;
    _Bool _enableAutoLowLightVideoIfSupported;
    long long _mode;
    long long _device;
    long long _videoConfiguration;
    long long _audioConfiguration;
    unsigned long long _previewConfiguration;
    long long _previewSampleBufferVideoFormat;
    NSArray *_previewFilters;
    CAMVideoThumbnailOutputConfiguration *_videoThumbnailOutputConfiguration;
    long long _photoEncodingBehavior;
    long long _videoEncodingBehavior;
    long long _aspectRatioCrop;
    long long _photoQualityPrioritization;
}

@property (nonatomic, readonly) long long mode;
@property (nonatomic, readonly) long long devicePosition;
@property (nonatomic, readonly) long long device;
@property (nonatomic, readonly) long long videoConfiguration;
@property (nonatomic, readonly) long long audioConfiguration;
@property (nonatomic, readonly) unsigned long long previewConfiguration;
@property (nonatomic, readonly) long long previewSampleBufferVideoFormat;
@property (nonatomic, readonly) NSArray *previewFilters;
@property (nonatomic, readonly) CAMVideoThumbnailOutputConfiguration *videoThumbnailOutputConfiguration;
@property (nonatomic, readonly) long long photoEncodingBehavior;
@property (nonatomic, readonly) long long videoEncodingBehavior;
@property (nonatomic, readonly, getter=isVideoHDRSuspended) _Bool videoHDRSuspended;
@property (nonatomic, readonly) _Bool enableAutoLowLightVideoIfSupported;
@property (nonatomic, readonly) long long aspectRatioCrop;
@property (nonatomic, readonly) long long photoQualityPrioritization;

- (id)description;
- (id)shortDescription;
- (id)initWithCaptureMode:(long long)arg1 captureDevice:(long long)arg2 videoConfiguration:(long long)arg3 audioConfiguration:(long long)arg4 previewConfiguration:(unsigned long long)arg5 previewSampleBufferVideoFormat:(long long)arg6 previewFilters:(id)arg7 videoThumbnailOutputConfiguration:(id)arg8 photoEncodingBehavior:(long long)arg9 videoEncodingBehavior:(long long)arg10 enableAutoLowLightVideoIfSupported:(_Bool)arg11 videoHDRSuspended:(_Bool)arg12 aspectRatioCrop:(long long)arg13 photoQualityPrioritization:(long long)arg14;
- (id)completeDescription;

@end
