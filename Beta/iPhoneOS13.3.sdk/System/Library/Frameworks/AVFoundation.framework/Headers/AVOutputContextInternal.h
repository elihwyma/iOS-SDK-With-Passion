/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@protocol AVOutputContextCommunicationChannelDelegate, AVOutputContextImpl, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVOutputContextInternal : NSObject

{
    NSObject<OS_dispatch_queue> *ivarAccessQueue;
    id <AVOutputContextImpl> impl;
    unsigned long long outputDeviceFeatures;
    int applicationPID;
    _Bool applicationPIDWasSet;
    id <AVOutputContextCommunicationChannelDelegate> communicationChannelDelegate;
}

@end
