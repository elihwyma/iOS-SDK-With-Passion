/*
 Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

#import <PhotoFoundation/PFDispatchQueueStatisticsBlockInfo.h>

@class _PFDQDECallSite;

@interface _PFDQDEBlockInfo : PFDispatchQueueStatisticsBlockInfo

{
    _PFDQDECallSite *_callSite;
}

@property (readonly) _PFDQDECallSite *callSite;

- (id)init;
- (id)backtraceWithPrefix:(id)arg1;

@end
