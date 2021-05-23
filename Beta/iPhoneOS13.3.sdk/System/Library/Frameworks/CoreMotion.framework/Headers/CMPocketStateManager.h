/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@protocol CMPocketStateDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface CMPocketStateManager : NSObject

{
    NSObject<OS_dispatch_source> *fQueryTimer;
    NSObject<OS_dispatch_queue> *fPrivateQueue;
    int fCachedState;
    struct Dispatcher *fDispatcher;
    double fMaxMonitorTime;
    NSMutableArray *fQueryBlocks;
    id <CMPocketStateDelegate> _delegate;
}

@property (nonatomic) id <CMPocketStateDelegate> delegate;

- (id)init;
- (void)dealloc;
- (void)onNotification:(id)arg1;
- (void)onPocketStateUpdated:(int)arg1;
- (void)queryStateOntoQueue:(id)arg1 andMonitorFor:(double)arg2 withTimeout:(double)arg3 andHandler:(CDUnknownBlockType)arg4;
- (void)addToAggdScalarWithName:(id)arg1 andScalar:(unsigned long long)arg2;
- (long long)translateInternalState:(int)arg1;
- (id)externalStateToString:(long long)arg1;
- (void)_disableDispatcher;
- (void)queryStateOntoQueue:(id)arg1 withTimeout:(double)arg2 andHandler:(CDUnknownBlockType)arg3;

@end
