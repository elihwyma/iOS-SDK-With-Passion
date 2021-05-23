/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <Foundation/NSObject.h>

@interface ICRWLock : NSObject

{
    struct _opaque_pthread_rwlock_t {
        long long __sig;
        char __opaque[192];
    } _rwLock;
}

- (id)init;
- (void)dealloc;
- (void)unlock;
- (void)writeLock;
- (int)tryReadLock;
- (void)readLock;

@end
