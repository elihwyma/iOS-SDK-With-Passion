//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RunningBoard/RBStateCapturing-Protocol.h>
#import <RunningBoard/RBThrottleBestEffortNetworkingManaging-Protocol.h>

@class NSString, RBProcessIndex, RBProcessMap, RBSystemState;
@protocol OS_dispatch_queue;

@interface RBThrottleBestEffortNetworkingManager : NSObject <RBThrottleBestEffortNetworkingManaging, RBStateCapturing>
{
    NSObject<OS_dispatch_queue> *_queue;
    RBProcessIndex *_processIndex;
    RBProcessMap *_stateMap;
    RBSystemState *_systemState;
    BOOL _throttleBestEffortNetworking;
//     struct os_unfair_lock_s _lock;
}

// - (void).cxx_destruct;
- (void)_updateThrottleBestEffortNetworking;
- (id)captureState;
@property(readonly, copy, nonatomic) NSString *stateCaptureTitle;
@property(readonly, copy) NSString *debugDescription;
- (BOOL)isThrottleBestEffortNetworkingEnabled;
- (void)removeProcess:(id)arg1;
- (void)addProcess:(id)arg1;
- (void)applySystemState:(id)arg1;
- (void)didUpdateProcessStates:(id)arg1;
- (id)init;

@end

