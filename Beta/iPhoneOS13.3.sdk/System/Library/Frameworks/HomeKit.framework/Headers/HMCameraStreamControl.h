/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <HomeKit/HMCameraControl.h>

@class HMCameraStream, HMFUnfairLock, NSString, _HMCameraStreamControl;

@protocol HMCameraStreamControlDelegate;

@interface HMCameraStreamControl : HMCameraControl

{
    HMFUnfairLock *_lock;
    id <HMCameraStreamControlDelegate> _delegate;
    _HMCameraStreamControl *_streamControl;
}

@property (retain, nonatomic) _HMCameraStreamControl *streamControl;
@property (weak, nonatomic) id <HMCameraStreamControlDelegate> delegate;
@property (nonatomic, readonly) unsigned long long streamState;
@property (nonatomic, readonly) HMCameraStream *cameraStream;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)startStreamWithPreferences:(id)arg1;
- (void)stopStream;
- (void)cameraStreamControlDidStartStream:(id)arg1;
- (void)cameraStreamControl:(id)arg1 didStopStream:(id)arg2;
- (id)initWithStreamControl:(id)arg1;
- (void)startStream;

@end
