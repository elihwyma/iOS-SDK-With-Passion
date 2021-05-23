/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface WebDeviceOrientationProviderMockInternal : NSObject

{
    struct unique_ptr<WebCore::DeviceOrientationClientMock, std::__1::default_delete<WebCore::DeviceOrientationClientMock>> m_core;
}

- (id)init;
- (id).cxx_construct;
- (void)setOrientation:(id)arg1;
- (void)setController:(struct DeviceOrientationController *)arg1;
- (void)startUpdating;
- (void)stopUpdating;
- (id)lastOrientation;

@end
