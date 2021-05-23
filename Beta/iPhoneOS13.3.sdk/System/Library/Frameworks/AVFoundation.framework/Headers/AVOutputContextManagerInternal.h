/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@protocol AVOutputContextManagerImpl, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVOutputContextManagerInternal : NSObject

{
    NSObject<OS_dispatch_queue> *ivarAccessQueue;
    id <AVOutputContextManagerImpl> impl;
}

@end
