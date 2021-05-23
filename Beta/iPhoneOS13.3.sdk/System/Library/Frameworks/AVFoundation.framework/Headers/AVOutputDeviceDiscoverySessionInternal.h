/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@protocol AVOutputDeviceDiscoverySessionImpl, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVOutputDeviceDiscoverySessionInternal : NSObject

{
    NSObject<OS_dispatch_queue> *ivarAccessQueue;
    id <AVOutputDeviceDiscoverySessionImpl> impl;
    long long discoveryMode;
}

@end
