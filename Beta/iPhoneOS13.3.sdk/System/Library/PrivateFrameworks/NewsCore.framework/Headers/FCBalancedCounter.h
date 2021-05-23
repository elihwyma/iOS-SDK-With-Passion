/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_group;

@interface FCBalancedCounter : NSObject

{
    struct os_unfair_lock_s _lock;
    long long _count;
    NSObject<OS_dispatch_group> *_dispatchGroup;
}

@property (nonatomic) long long count;
@property (nonatomic) struct os_unfair_lock_s lock;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *dispatchGroup;

- (id)init;
- (void)decrement;
- (void)increment;
- (void)_bumpCounterPositively:(_Bool)arg1;
- (void)notifyWhenCountReachesZeroOnQueue:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;

@end
