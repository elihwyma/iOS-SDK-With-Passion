/*
 Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

#import <Foundation/NSObject.h>

@class BSMutableIntegerMap, FBSSerialQueue, NSString;

@protocol OS_dispatch_queue;

@interface FBSWorkspaceFencingImpl : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    FBSSerialQueue *_callOutQueue;
    unsigned long long _signpostName;
    BSMutableIntegerMap *_triggerToFenceNameMap;
    _Bool _synchronizingFence;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)trackSystemAnimationFence:(id)arg1;
- (id)requestSystemAnimationFence;
- (void)synchronizeSystemAnimationFencesWithCleanUpBlock:(CDUnknownBlockType)arg1;
- (_Bool)isTrackingAnySystemAnimationFence;
- (id)initWithQueue:(id)arg1 calloutQueue:(id)arg2;

@end
