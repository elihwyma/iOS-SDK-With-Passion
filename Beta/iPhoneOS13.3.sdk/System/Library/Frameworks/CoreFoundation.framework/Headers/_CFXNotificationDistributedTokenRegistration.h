/*
 Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <CoreFoundation/_CFXNotificationTokenRegistration.h>

@class NSObject;

@protocol OS_xpc_object;

__attribute__((visibility("hidden")))
@interface _CFXNotificationDistributedTokenRegistration : _CFXNotificationTokenRegistration

{
    NSObject<OS_xpc_object> *_connection;
    struct _opaque_pthread_mutex_t _connectionLock;
}

- (id)initWithToken:(unsigned long long)arg1 connection:(id)arg2 options:(unsigned long long)arg3 queue:(id)arg4 handler:(CDUnknownBlockType)arg5;
- (void)invalidate;

@end
