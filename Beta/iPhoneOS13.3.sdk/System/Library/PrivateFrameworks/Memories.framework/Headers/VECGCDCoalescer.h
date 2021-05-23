/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@protocol OS_dispatch_group, OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface VECGCDCoalescer : NSObject

{
    double _delay;
    NSObject<OS_dispatch_source> *_processingTimer;
    NSObject<OS_dispatch_group> *_processDoneGroup;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    _Bool _processingTimerActive;
    NSMutableArray *_keys;
    NSMutableArray *_blocks;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)coalescerWithDelay:(double)arg1;
+ (id)sharedFiveSecondCoalescer;

- (id)init;
- (void)dealloc;
- (void)_applicationWillTerminate:(id)arg1;
- (void)_processImmediately;
- (void)_processTimer;
- (id)initWithQueue:(id)arg1 delay:(double)arg2;
- (void)_addBlock:(CDUnknownBlockType)arg1 withKey:(id)arg2;
- (void)debugWaitUntilBlocksHaveBeenProcessed;
- (void)coalesceBlock:(CDUnknownBlockType)arg1 withKey:(id)arg2;

@end
