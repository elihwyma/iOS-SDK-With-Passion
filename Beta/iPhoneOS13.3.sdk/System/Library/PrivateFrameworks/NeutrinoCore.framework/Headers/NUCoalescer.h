/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface NUCoalescer : NSObject

{
    NSObject<OS_dispatch_source> *_timer;
    double _delay;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) double delay;
@property (readonly) NSObject<OS_dispatch_queue> *queue;

- (id)init;
- (void)dealloc;
- (id)initWithDelay:(double)arg1;
- (id)initWithDelay:(double)arg1 queue:(id)arg2;
- (void)coalesceBlock:(CDUnknownBlockType)arg1;

@end
