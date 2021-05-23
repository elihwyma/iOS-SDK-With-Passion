/*
 Image: /System/Library/PrivateFrameworks/AttentionAwareness.framework/AttentionAwareness
 */

#import <Foundation/NSObject.h>

@protocol NSXPCProxyCreating, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AWUnitTestSampler : NSObject

{
    id <NSXPCProxyCreating> _remoteSamplerProxy;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedSampler;

- (id)init;
- (id)connect;
- (id)_connect;
- (void)setDisplayState:(_Bool)arg1;
- (void)setSmartCoverClosed:(_Bool)arg1;
- (void)getStatsWithBlock:(CDUnknownBlockType)arg1;
- (void)resetStats;
- (void)setSampleState:(_Bool)arg1;
- (void)setSampleState:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;
- (void)setSampleState:(_Bool)arg1 deliverEvent:(_Bool)arg2;
- (void)setSampleState:(_Bool)arg1 deliverEvent:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;
- (void)setDisplayState:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;
- (void)setDisplayCallback:(CDUnknownBlockType)arg1;
- (void)setSmartCoverClosed:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;
- (void)setSmartCoverCallback:(CDUnknownBlockType)arg1;
- (void)setPearlErrorState:(_Bool)arg1;
- (void)setPearlErrorState:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;
- (id)invokeSampler:(CDUnknownBlockType)arg1;

@end
