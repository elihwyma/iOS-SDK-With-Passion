/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVOutputContextDestinationChangeInternal : NSObject

{
    NSObject<OS_dispatch_queue> *ivarAccessQueue;
    long long status;
    NSString *cancellationReason;
}

@end
