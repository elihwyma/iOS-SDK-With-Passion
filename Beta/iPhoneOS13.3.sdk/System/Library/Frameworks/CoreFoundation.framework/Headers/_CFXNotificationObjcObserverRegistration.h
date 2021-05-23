/*
 Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <CoreFoundation/_CFXNotificationObserverRegistration.h>

__attribute__((visibility("hidden")))
@interface _CFXNotificationObjcObserverRegistration : _CFXNotificationObserverRegistration

{
    id _object;
    _Atomic _Bool _useFallback;
}

- (void)dealloc;
- (void *)observer;
- (id)initWithObserver:(void *)arg1 parent:(id)arg2;
- (void)find:(CDStruct_3de10e06 *)arg1;
- (void)resetObserverAndChildren:(void *)arg1;
- (id)retainedObserver;

@end
