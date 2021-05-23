/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVCaptureOutput.h>

@class AVCaptureVideoThumbnailOutputInternal, NSArray;

@protocol AVCaptureVideoThumbnailContentsDelegate;

@interface AVCaptureVideoThumbnailOutput : AVCaptureOutput

{
    AVCaptureVideoThumbnailOutputInternal *_internal;
}

@property (nonatomic) id <AVCaptureVideoThumbnailContentsDelegate> thumbnailContentsDelegate;
@property (copy, nonatomic) NSArray *filters;
@property (nonatomic) struct CGSize thumbnailSize;

+ (void)initialize;
+ (struct CGRect)contentsRectForFilterAtIndex:(unsigned long long)arg1 thumbnailSize:(struct CGSize)arg2 filterCount:(unsigned long long)arg3;

- (id)init;
- (void)dealloc;
- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;
- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;
- (void)_signalInvalidationOfPropagatedContentsIfNecessary;
- (void)safelyHandleServerConnectionDeathForFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;
- (id)connectionMediaTypes;
- (_Bool)canAddConnection:(id)arg1 failureReason:(id *)arg2;
- (void)_handleNotification:(id)arg1 payload:(id)arg2;

@end
