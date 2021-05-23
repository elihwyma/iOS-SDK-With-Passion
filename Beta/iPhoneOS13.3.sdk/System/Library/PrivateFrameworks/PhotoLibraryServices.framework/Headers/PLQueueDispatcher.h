/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_workloop;

@interface PLQueueDispatcher : NSObject

{
    NSObject<OS_dispatch_queue> *_uiQueue;
    NSObject<OS_dispatch_queue> *_utilityQueue;
    NSObject<OS_dispatch_queue> *_backgroundQueue;
    NSObject<OS_dispatch_queue> *_sharedUtilityQueue;
    NSObject<OS_dispatch_queue> *_sharedBackgroundQueue;
    NSObject<OS_dispatch_workloop> *_sharedWorkloop;
}

+ (id)sharedQueueDispatcher;

- (id)init;
- (void)async:(CDUnknownBlockType)arg1;
- (void)sync:(CDUnknownBlockType)arg1;
- (void)_handleUnexpectedQoSClass:(unsigned int)arg1;
- (id)queueForCurrentQoS;
- (id)sharedUtilityQueue;
- (id)sharedBackgroundQueue;

@end
