/*
 Image: /System/Library/PrivateFrameworks/WelcomeKit.framework/WelcomeKit
 */

#import <WelcomeKit/WLSourceDevicesController.h>

@class NSObject, NSString;

@protocol OS_dispatch_queue;

@interface WLSourceDevicesControllerSurrogate : WLSourceDevicesController

{
    NSObject<OS_dispatch_queue> *_serialQueue;
    _Bool _wifiStarted;
    NSString *_deviceDiscoverySession;
}

- (id)initWithDelegate:(id)arg1;
- (void)startWiFiAndDeviceDiscoveryWithCompletion:(CDUnknownBlockType)arg1;
- (void)stopDeviceDiscoveryWithCompletion:(CDUnknownBlockType)arg1;
- (void)stopWiFiAndDeviceDiscoveryWithCompletion:(CDUnknownBlockType)arg1;

@end
