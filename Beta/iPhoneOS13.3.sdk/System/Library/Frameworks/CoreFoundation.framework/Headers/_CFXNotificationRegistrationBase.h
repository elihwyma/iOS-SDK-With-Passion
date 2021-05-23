/*
 Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <Foundation/NSObject.h>

@class _CFXNotificationRegistrar, _CFXNotificationRegistrationContainer;

__attribute__((visibility("hidden")))
@interface _CFXNotificationRegistrationBase : NSObject

{
    _CFXNotificationRegistrationContainer *_parent;
    struct os_unfair_lock_s _lock;
}

@property (weak, readonly) _CFXNotificationRegistrationContainer *parent;
@property (readonly) _CFXNotificationRegistrar *registrar;
@property (readonly) void *key;

+ (const CDStruct_90be15af *)keyCallbacks;

- (id)init;
- (void)dealloc;
- (void)removeFromParent:(unsigned long long)arg1;
- (id)initWithParent:(id)arg1;
- (void)setParent:(id)arg1;

@end
