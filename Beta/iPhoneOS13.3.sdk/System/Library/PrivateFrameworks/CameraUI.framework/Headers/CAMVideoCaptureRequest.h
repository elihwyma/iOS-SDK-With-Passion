/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <CameraUI/CAMCaptureRequest.h>

#import <CameraUI/Swift-Protocol.h>

@protocol CAMVideoCaptureRequestDelegate;

@interface CAMVideoCaptureRequest : CAMCaptureRequest <Swift>

{
    _Bool _timelapse;
    _Bool _shouldGenerateVideoPreviewImage;
    double _maximumRecordedDuration;
    long long _maximumRecordedFileSize;
    long long _remainingDiskUsageThreshold;
    id <CAMVideoCaptureRequestDelegate> _delegate;
    long long _captureVideoConfiguration;
    long long _torchMode;
    double _userInitationTimestamp;
}

@property (nonatomic, readonly, getter=isTimelapse) _Bool timelapse;
@property (nonatomic, readonly) _Bool shouldGenerateVideoPreviewImage;
@property (nonatomic, readonly) double maximumRecordedDuration;
@property (nonatomic, readonly) long long maximumRecordedFileSize;
@property (nonatomic, readonly) long long remainingDiskUsageThreshold;
@property (weak, nonatomic, readonly) id <CAMVideoCaptureRequestDelegate> delegate;
@property (nonatomic, readonly) long long captureVideoConfiguration;
@property (nonatomic, readonly) long long torchMode;
@property (nonatomic, readonly) double userInitationTimestamp;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)initWithRequest:(id)arg1 distinctPersistence:(_Bool)arg2;

@end
