/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@protocol AVOutputDeviceAuthorizationSessionDelegate, AVOutputDeviceAuthorizationSessionImpl, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVOutputDeviceAuthorizationSessionInternal : NSObject

{
    NSObject<OS_dispatch_queue> *ivarAccessQueue;
    id <AVOutputDeviceAuthorizationSessionDelegate> delegate;
    id <AVOutputDeviceAuthorizationSessionImpl> impl;
}

@end
