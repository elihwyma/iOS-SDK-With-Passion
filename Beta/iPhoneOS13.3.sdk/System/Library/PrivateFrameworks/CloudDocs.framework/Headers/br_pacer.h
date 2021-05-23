/*
 Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface br_pacer : NSObject

{
    NSObject<OS_dispatch_source> *source;
    NSObject<OS_dispatch_source> *timer;
    NSObject<OS_dispatch_queue> *queue;
    CDUnknownBlockType event_block;
    double last_fire_time;
    double min_fire_interval;
    _Atomic _Bool ever_resumed;
}

- (void)dealloc;

@end
