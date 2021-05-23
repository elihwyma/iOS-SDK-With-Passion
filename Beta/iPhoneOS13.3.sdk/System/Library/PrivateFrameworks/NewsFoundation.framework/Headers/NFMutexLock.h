/*
 Image: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
 */

#import <Foundation/NSObject.h>

@interface NFMutexLock : NSObject

{
    struct _opaque_pthread_mutex_t {
        long long __sig;
        char __opaque[56];
    } _lock;
}

- (id)init;
- (void)dealloc;
- (id)initWithOptions:(unsigned long long)arg1;
- (void)lock;
- (void)unlock;
- (void)performWithLockSync:(CDUnknownBlockType)arg1;

@end
