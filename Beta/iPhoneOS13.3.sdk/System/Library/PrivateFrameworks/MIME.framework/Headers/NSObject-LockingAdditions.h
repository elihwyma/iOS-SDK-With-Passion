/*
 Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <Foundation/NSObject.h>

@interface NSObject (LockingAdditions)

+ (void)mf_clearLocks;

- (void)mf_lock;
- (void)mf_unlock;
- (_Bool)mf_tryLock;
- (id)mf_lockOrdering;
- (id)mf_strictLockOrdering;
- (id)mf_exclusiveLocks;
- (id)_mf_lockOrderingForType:(int)arg1;
- (void)_mf_dumpLockCallStacks:(unsigned long long)arg1 ordering:(id)arg2;
- (_Bool)_mf_ntsIsLocked;
- (void)_mf_ntsCheckToAllowLock:(id)arg1;
- (void)_mf_checkToAllowOrderingWithLock:(id)arg1;
- (void)_mf_checkToAllowStrictProgressionWithLock:(id)arg1;
- (void)_mf_checkToAllowExclusiveLocksWithLock:(id)arg1;
- (void)_mf_checkToAllowLock:(id)arg1;
- (void)mf_lockWithPriority;
- (_Bool)mf_tryLockWithPriority;

@end
