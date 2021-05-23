/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface CMStepCounterProxy : NSObject

{
    struct CLConnectionClient *fLocationdConnection;
    _Bool fStartedUpdates;
    NSObject<OS_dispatch_queue> *fInternalQueue;
    long long fStepCountFromStart;
    long long fPrevStepCount;
}

- (id)init;
- (void)dealloc;
- (void)_teardown;
- (void)_handleQueryResponse:(shared_ptr_bdcc6d0f)arg1 onQueue:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)_queryStepCountStartingFromInternal:(id)arg1 to:(id)arg2 toQueue:(id)arg3 withHandler:(CDUnknownBlockType)arg4;
- (void)_startStepCountingUpdatesToQueue:(id)arg1 updateOn:(long long)arg2 withHandler:(CDUnknownBlockType)arg3;

@end
