/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

@class CUMobileDevice, CUMobileDeviceDiscovery;

__attribute__((visibility("hidden")))
@interface CUMobileDeviceMonitorContext : NSObject

{
    CUMobileDevice *_device;
    CUMobileDeviceDiscovery *_discovery;
}

@property (retain, nonatomic) CUMobileDevice *device;
@property (retain, nonatomic) CUMobileDeviceDiscovery *discovery;

@end
