/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class NSError;

@protocol AVOutputDeviceAuthorizationRequestImpl, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVOutputDeviceAuthorizationRequestInternal : NSObject

{
    id <AVOutputDeviceAuthorizationRequestImpl> impl;
    NSObject<OS_dispatch_queue> *ivarAccessQueue;
    long long status;
    NSError *error;
}

@end
