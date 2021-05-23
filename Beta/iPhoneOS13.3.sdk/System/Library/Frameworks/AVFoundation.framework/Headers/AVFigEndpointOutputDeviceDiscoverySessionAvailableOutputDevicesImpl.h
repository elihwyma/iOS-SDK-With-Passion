/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface AVFigEndpointOutputDeviceDiscoverySessionAvailableOutputDevicesImpl : NSObject

{
    NSArray *_figEndpoints;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSArray *allDevices;

- (id)init;
- (void)dealloc;
- (id)initWithAvailableFigEndpoints:(id)arg1;

@end
