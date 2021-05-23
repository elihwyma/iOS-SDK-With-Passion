/*
 Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <CoreFoundation/_CFXNotificationRegistrationContainer.h>

__attribute__((visibility("hidden")))
@interface _CFXNotificationObserverRegistration : _CFXNotificationRegistrationContainer

{
    void *_observer;
}

@property (readonly) void *observer;

+ (Class)childClass;

- (void *)key;
- (_Bool)enumerate:(CDUnknownBlockType)arg1;
- (id)initWithObserver:(void *)arg1 parent:(id)arg2;
- (void)find:(CDStruct_3de10e06 *)arg1;
- (void)match:(CDStruct_3de10e06 *)arg1;
- (void)resetObserverAndChildren:(void *)arg1;

@end
