/*
 Image: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _FMQueueScheduler : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithQueue:(id)arg1;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (id)performCancelableBlock:(CDUnknownBlockType)arg1;
- (id)afterDelay:(double)arg1 performBlock:(CDUnknownBlockType)arg2;

@end
