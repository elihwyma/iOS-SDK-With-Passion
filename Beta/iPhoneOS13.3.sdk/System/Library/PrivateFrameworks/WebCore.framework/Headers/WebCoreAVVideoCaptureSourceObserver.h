/*
 Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import <NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WebCoreAVVideoCaptureSourceObserver : NSObject

{
    struct AVVideoCaptureSource *m_callback;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)disconnect;
- (id)initWithCallback:(struct AVVideoCaptureSource *)arg1;
- (void)deviceConnectedDidChange:(id)arg1;
- (void)addNotificationObservers;
- (void)removeNotificationObservers;
- (void)sessionRuntimeError:(id)arg1;
- (void)beginSessionInterrupted:(id)arg1;
- (void)endSessionInterrupted:(id)arg1;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;

@end
