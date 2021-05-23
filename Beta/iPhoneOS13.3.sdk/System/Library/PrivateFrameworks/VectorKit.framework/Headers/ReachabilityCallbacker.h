/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface ReachabilityCallbacker : NSObject

{
    function_84aba934 _listener;
    NSObject<OS_dispatch_queue> *_queue;
    struct mutex _lock;
}

- (void)dealloc;
- (id).cxx_construct;
- (void)_reachabilityChanged:(id)arg1;
- (id)initWithListener:(function_84aba934)arg1 queue:(id)arg2;
- (void)clearListener;

@end
