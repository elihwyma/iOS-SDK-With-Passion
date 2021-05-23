/*
 Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <CoreFoundation/_CFXNotificationRegistrationBase.h>

__attribute__((visibility("hidden")))
@interface _CFXNotificationTokenRegistration : _CFXNotificationRegistrationBase

{
    unsigned long long _token;
    unsigned long long _options;
    CDUnknownBlockType _handler;
    _Atomic _Bool _registered;
}

@property (retain) id queue;
@property (readonly) unsigned long long token;
@property (readonly) unsigned long long options;
@property (copy, readonly) CDUnknownBlockType handler;
@property (readonly, getter=isRegistered) _Bool registered;
@property (readonly) struct __CFString *name;
@property (readonly) void *object;
@property (readonly) void *observer;

+ (const CDStruct_90be15af *)keyCallbacks;
+ (id)createTokenRegistration:(int)arg1 token:(unsigned long long)arg2 connection:(id)arg3 notifyToken:(int)arg4 options:(unsigned long long)arg5 queue:(id)arg6 handler:(CDUnknownBlockType)arg7;

- (void)dealloc;
- (id)initWithToken:(unsigned long long)arg1 options:(unsigned long long)arg2 queue:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)invalidate;
- (void)removeFromParent:(unsigned long long)arg1;
- (void)_invalidate;
- (void *)key;
- (CDUnknownBlockType)copyHandler;
- (void)addToObserver:(id)arg1;
- (void)_removeFromParent;

@end
