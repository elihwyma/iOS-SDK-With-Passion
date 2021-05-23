/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVOutputDeviceDiscoverySession;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVRouteDetectorInternal : NSObject

{
    _Bool multipleRoutesDetected;
    NSObject<OS_dispatch_queue> *ivarAccessQueue;
    AVOutputDeviceDiscoverySession *outputDeviceDiscoverySession;
}

@end
