/*
 Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import <NSObject.h>

__attribute__((visibility("hidden")))
@interface WebCoreAVCaptureDeviceManagerObserver : NSObject

{
    struct AVCaptureDeviceManager *m_callback;
}

- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)disconnect;
- (id)initWithCallback:(struct AVCaptureDeviceManager *)arg1;
- (void)deviceConnectedDidChange:(id)arg1;

@end
