//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FrontBoardServices/FBSWorkspaceFencing-Protocol.h>

@class BSMutableIntegerMap, FBSSerialQueue;
@protocol OS_dispatch_queue;

@interface FBSWorkspaceFencingImpl : NSObject <FBSWorkspaceFencing>
{
    NSObject<OS_dispatch_queue> *_queue;
    FBSSerialQueue *_callOutQueue;
    NSUInteger _signpostName;
    BSMutableIntegerMap *_triggerToFenceNameMap;
    BOOL _synchronizingFence;
}

// - (void).cxx_destruct;
- (void)synchronizeSystemAnimationFencesWithCleanUpBlock:(id /* CDUnknownBlockType */)arg1;
- (BOOL)trackSystemAnimationFence:(id)arg1;
- (BOOL)isTrackingAnySystemAnimationFence;
- (id)requestSystemAnimationFence;
- (id)initWithQueue:(id)arg1 calloutQueue:(id)arg2;

@end

