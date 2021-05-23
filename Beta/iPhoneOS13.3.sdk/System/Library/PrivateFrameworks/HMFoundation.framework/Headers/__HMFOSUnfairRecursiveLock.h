/*
 Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

__attribute__((visibility("hidden")))
@interface __HMFOSUnfairRecursiveLock

{
    struct os_unfair_recursive_lock_s _internal;
    unsigned int _internalOptions;
}

- (id)initWithOptions:(unsigned long long)arg1;
- (void)lock;
- (void)unlock;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (void)assertOwner;
- (void)assertNotOwner;

@end
