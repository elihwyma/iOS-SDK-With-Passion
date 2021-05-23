/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <CameraUI/CAMCaptureRequest.h>

#import <CameraUI/Swift-Protocol.h>

@protocol CAMPanoramaCaptureRequestDelegate;

@interface CAMPanoramaCaptureRequest : CAMCaptureRequest <Swift>

{
    id <CAMPanoramaCaptureRequestDelegate> _delegate;
}

@property (weak, nonatomic, readonly) id <CAMPanoramaCaptureRequestDelegate> delegate;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)initWithRequest:(id)arg1 distinctPersistence:(_Bool)arg2;

@end
