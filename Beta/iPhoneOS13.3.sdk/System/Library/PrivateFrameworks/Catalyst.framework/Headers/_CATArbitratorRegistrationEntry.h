/*
 Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface _CATArbitratorRegistrationEntry : NSObject

{
    id mResource;
    unsigned long long mMaxConcurrentCount;
    NSMutableArray *mPendingWaits;
    NSObject<OS_dispatch_source> *mPendingWaitsSource;
    NSObject<OS_dispatch_queue> *mPendingWaitsQueue;
    unsigned long long _currentCount;
}

@property (nonatomic, readonly) unsigned long long currentCount;

- (void)invalidate;
- (id)makeResourceProxyIfPossible:(_Bool)arg1;
- (id)initWithResource:(id)arg1 maxConcurrentCount:(unsigned long long)arg2;
- (void)servicePendingWaitTokens;
- (id)makeResourceProxyIfPossibleWithoutLocking:(_Bool)arg1;
- (void)pendingWaitsNeedServicing;
- (id)waitForResourceWithExclusive:(_Bool)arg1 group:(id)arg2;
- (void)resourceProxyDidInvalidate:(id)arg1;

@end
