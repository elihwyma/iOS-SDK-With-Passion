/*
 Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <CoreFoundation/_CFXNotificationRegistrationContainer.h>

__attribute__((visibility("hidden")))
@interface _CFXNotificationObjectRegistration : _CFXNotificationRegistrationContainer

{
    void *_object;
}

@property (readonly) void *object;

+ (Class)childClass;
+ (const CDStruct_90be15af *)stringKeyCallbacks;

- (void *)key;
- (_Bool)enumerate:(CDUnknownBlockType)arg1;
- (id)initWithObject:(void *)arg1 parent:(id)arg2;
- (id)acquireObserver:(void *)arg1 options:(unsigned long long)arg2;
- (void)find:(void *)arg1 matching:(CDStruct_3de10e06 *)arg2;
- (void)match:(void *)arg1 matching:(CDStruct_3de10e06 *)arg2;

@end
