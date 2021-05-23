/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@protocol AFAudioPowerProviding, AFAudioPowerUpdaterDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface AFAudioPowerUpdater : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timer;
    id <AFAudioPowerUpdaterDelegate> _delegate;
    void *_sharedMemory;
    float _averagePower;
    float _peakPower;
    id <AFAudioPowerProviding> _provider;
    long long _frequency;
}

@property (nonatomic, readonly) id <AFAudioPowerProviding> provider;
@property (nonatomic, readonly) long long frequency;

- (void)dealloc;
- (void)invalidate;
- (void)_invalidate;
- (void)_timerFired;
- (id)initWithProvider:(id)arg1 queue:(id)arg2 frequency:(long long)arg3 delegate:(id)arg4;
- (void)beginUpdate;
- (void)endUpdate;
- (float)_unsafeAveragePower;
- (float)_unsafePeakPower;
- (void)_beginUpdate;
- (void)_getPowerWithCompletion:(CDUnknownBlockType)arg1;
- (void)_endUpdate;
- (void)_createNewXPCWrapperWithCompletion:(CDUnknownBlockType)arg1;
- (void)_updatePowerWithAveragePower:(float)arg1 andPeakPower:(float)arg2;
- (void)_writeSharedMemoryWithAveragePower:(float)arg1 peakPower:(float)arg2;
- (void)_destroySharedMemory;
- (_Bool)_createSharedMemory;
- (id)_createNewXPCWrapper;
- (id)_createSharedMemoryXPCObject;
- (void)getPowerWithCompletion:(CDUnknownBlockType)arg1;
- (void)createNewXPCWrapperWithCompletion:(CDUnknownBlockType)arg1;

@end
