/*
 Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <CoreFoundation/_CFXNotificationRegistrationBase.h>

__attribute__((visibility("hidden")))
@interface _CFXNotificationRegistrationContainer : _CFXNotificationRegistrationBase

{
    CDStruct_a86bd46d _children;
}

+ (Class)childClass;

- (void)dealloc;
- (void)invalidate;
- (void)addChild:(id)arg1;
- (id)initWithParent:(id)arg1 childKeyCallbacks:(const CDStruct_90be15af *)arg2;
- (id)initWithParent:(id)arg1;
- (void)resetChildren;
- (void)removeChild:(id)arg1 token:(unsigned long long)arg2;
- (_Bool)enumerate:(CDUnknownBlockType)arg1;

@end
