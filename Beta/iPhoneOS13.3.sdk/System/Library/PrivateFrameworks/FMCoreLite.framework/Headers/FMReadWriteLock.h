/*
 Image: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface FMReadWriteLock : NSObject

{
    NSString *_lockName;
    struct _opaque_pthread_rwlock_t _lock;
}

@property (retain, nonatomic) NSString *lockName;
@property (nonatomic) struct _opaque_pthread_rwlock_t lock;

- (id)init;
- (id)initWithLockName:(id)arg1;
- (void)performWithReadLock:(CDUnknownBlockType)arg1;
- (void)performWithWriteLock:(CDUnknownBlockType)arg1;

@end
