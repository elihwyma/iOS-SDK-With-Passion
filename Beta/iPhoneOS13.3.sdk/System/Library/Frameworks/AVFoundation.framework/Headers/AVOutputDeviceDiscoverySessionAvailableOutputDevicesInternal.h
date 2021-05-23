/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@protocol AVOutputDeviceDiscoverySessionAvailableOutputDevicesImpl;

__attribute__((visibility("hidden")))
@interface AVOutputDeviceDiscoverySessionAvailableOutputDevicesInternal : NSObject

{
    id <AVOutputDeviceDiscoverySessionAvailableOutputDevicesImpl> impl;
    NSMutableArray *_recentlyUsedDevices;
    NSMutableArray *_otherDevices;
}

@end
