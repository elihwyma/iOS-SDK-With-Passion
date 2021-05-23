/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface AVFigRouteDescriptorOutputDeviceDiscoverySessionAvailableOutputDevicesImpl : NSObject

{
    NSArray *_routeDescriptors;
    struct OpaqueFigRouteDiscoverer *_routeDiscoverer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSArray *allDevices;

- (id)init;
- (void)dealloc;
- (id)initWithRouteDescriptors:(id)arg1 routeDiscoverer:(struct OpaqueFigRouteDiscoverer *)arg2;

@end
