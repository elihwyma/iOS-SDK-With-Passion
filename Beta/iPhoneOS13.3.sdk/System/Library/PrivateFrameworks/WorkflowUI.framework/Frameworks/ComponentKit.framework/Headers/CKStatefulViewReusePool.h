/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/Frameworks/ComponentKit.framework/ComponentKit
 */

#import <Foundation/NSObject.h>

@interface CKStatefulViewReusePool : NSObject

{
    struct unordered_map<std::__1::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem, PoolKeyHasher, std::__1::equal_to<std::__1::pair<__unsafe_unretained Class, id>>, std::__1::allocator<std::__1::pair<const std::__1::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem>>> _pool;
    struct unordered_map<std::__1::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem, PoolKeyHasher, std::__1::equal_to<std::__1::pair<__unsafe_unretained Class, id>>, std::__1::allocator<std::__1::pair<const std::__1::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem>>> _pendingPool;
    _Bool _enqueuedPendingPurge;
    _Bool _pendingReusePoolEnabled;
}

@property (nonatomic) _Bool pendingReusePoolEnabled;

+ (id)sharedPool;

- (id).cxx_construct;
- (void)enqueueStatefulView:(id)arg1 forControllerClass:(Class)arg2 context:(id)arg3 mayRelinquishBlock:(CDUnknownBlockType)arg4;
- (id)dequeueStatefulViewForControllerClass:(Class)arg1 preferredSuperview:(id)arg2 context:(id)arg3;
- (void)purgePendingPool;

@end
