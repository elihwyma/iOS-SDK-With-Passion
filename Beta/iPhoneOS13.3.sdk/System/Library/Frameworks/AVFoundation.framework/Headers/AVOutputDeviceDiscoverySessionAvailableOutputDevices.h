/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVOutputDeviceDiscoverySessionAvailableOutputDevicesInternal, NSArray;

@interface AVOutputDeviceDiscoverySessionAvailableOutputDevices : NSObject

{
    AVOutputDeviceDiscoverySessionAvailableOutputDevicesInternal *_availableOutputDevices;
}

@property (nonatomic, readonly) NSArray *recentlyUsedDevices;
@property (nonatomic, readonly) NSArray *otherDevices;

+ (id)outputDeviceDiscoverySessionAvailableOutputDevicesWithAvailableFigEndpoints:(id)arg1;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)impl;
- (id)initWithOutputDeviceDiscoverySessionAvailableOutputDevicesImpl:(id)arg1;
- (void)_loadOutputDevices;

@end
