/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Photos/PHMediaRequest.h>

@class NSObject, NSString, NSURL, PHImageDecoderAsyncDecodeRequestHandle, PHImageDisplaySpec, PHImageRequestBehaviorSpec, PHImageResourceChooser, PHImageResult;

@protocol OS_dispatch_semaphore, PHImageRequestDelegate;

@interface PHImageRequest : PHMediaRequest

{
    struct os_unfair_lock_s _lock;
    PHImageDecoderAsyncDecodeRequestHandle *_asyncDecodeRequestHandle;
    PHImageResult *_imageResult;
    PHImageResourceChooser *_chooser;
    struct CGSize _desiredImageSize;
    _Bool _forceIgnoreCache;
    NSObject<OS_dispatch_semaphore> *_syncDownloadWaitSemaphore;
    NSURL *_configuredImageURL;
    NSString *_configuredImageUTI;
    long long _configuredExifOrientation;
    id <PHImageRequestDelegate> _delegate;
    PHImageDisplaySpec *_displaySpec;
    PHImageRequestBehaviorSpec *_behaviorSpec;
}

@property (nonatomic, readonly) struct CGSize desiredImageSize;
@property (weak, nonatomic, readonly) id <PHImageRequestDelegate> delegate;
@property (retain, nonatomic) PHImageDisplaySpec *displaySpec;
@property (retain, nonatomic) PHImageRequestBehaviorSpec *behaviorSpec;

- (id)description;
- (void)cancel;
- (void)_decodeImageConfiguredWithURL:(id)arg1 isPrimaryFormat:(_Bool)arg2 exifOrientation:(long long)arg3;
- (id)initWithRequestID:(int)arg1 requestIndex:(unsigned long long)arg2 contextType:(long long)arg3 managerID:(unsigned long long)arg4 asset:(id)arg5 displaySpec:(id)arg6 behaviorSepc:(id)arg7 chooser:(id)arg8 delegate:(id)arg9;
- (_Bool)isSynchronous;
- (void)startRequest;
- (void)handleAvailabilityChangeForResource:(id)arg1 url:(id)arg2 info:(id)arg3 error:(id)arg4;
- (void)configureWithURL:(id)arg1 uniformTypeIdentifier:(id)arg2 exifOrientation:(int)arg3;
- (void)configureWithURL:(id)arg1;

@end
