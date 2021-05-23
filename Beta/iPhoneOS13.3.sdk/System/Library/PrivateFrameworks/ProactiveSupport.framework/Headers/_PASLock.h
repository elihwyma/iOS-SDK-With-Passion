/*
 Image: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
 */

#import <Foundation/NSObject.h>

@interface _PASLock : NSObject

{
    struct _opaque_pthread_mutex_t _lock;
    struct _opaque_pthread_t {
        long long _field1;
        struct __darwin_pthread_handler_rec *_field2;
        char _field3[8176];
    } *_owner;
    id _guardedData;
}

- (void)dealloc;
- (void)runWithLockAcquired:(CDUnknownBlockType)arg1;
- (id)initWithGuardedData:(id)arg1;
- (id)guardedDataAssertingLockContext;
- (id)unsafeGuardedData;

@end
