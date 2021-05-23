/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface CMActivityManagerInternal : NSObject

{
    struct CLConnectionClient *fLocationdConnection;
    CDUnknownBlockType fActivityHandler;
    NSObject<OS_dispatch_queue> *fPrivateQueue;
    _Bool fSubscribedToMotionState;
    NSObject<OS_dispatch_semaphore> *fSidebandOverrideSemaphore;
    NSObject<OS_dispatch_queue> *fSidebandOverrideQueue;
    _Bool fSidebandOverrideWaiting;
    long long fSidebandOverrideResult;
    NSObject<OS_dispatch_semaphore> *fMotionStateSimSemaphore;
    NSObject<OS_dispatch_queue> *fMotionStateSimQueue;
    _Bool fMotionStateSimWaiting;
    long long fMotionStateSimResult;
    long long fMotionStateYouthSimResult;
}

- (id)init;
- (void)dealloc;
- (void)disconnect;
- (void)connect;
- (void)startActivityUpdatesWithHandlerPrivate:(CDUnknownBlockType)arg1;
- (void)stopActivityUpdatesPrivate;
- (void)overrideOscarSideband:(_Bool)arg1 withState:(long long)arg2;
- (void)simulateMotionState:(_Bool)arg1 withState:(long long)arg2;
- (void)simulateMotionStateYouthWithState:(long long)arg1;

@end
