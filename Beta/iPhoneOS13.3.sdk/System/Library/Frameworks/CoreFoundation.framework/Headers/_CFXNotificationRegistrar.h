/*
 Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <CoreFoundation/_CFXNotificationRegistrationContainer.h>

__attribute__((visibility("hidden")))
@interface _CFXNotificationRegistrar : _CFXNotificationRegistrationContainer

{
    CDStruct_a86bd46d _wildcardNames;
    CDStruct_a86bd46d _wildcardObjects;
    CDStruct_a86bd46d _doubleWildcards;
    struct __CFDictionary *_tokenRegistrations;
    unsigned long long _options;
}

@property (readonly) _Bool isEmpty;

+ (Class)childClass;

- (id)init;
- (void)invalidate;
- (void)addChild:(id)arg1;
- (void)removeChild:(id)arg1 token:(unsigned long long)arg2;
- (id)find:(unsigned long long)arg1;
- (id)initWithOptions:(unsigned long long)arg1;
- (struct __CFString *)_copyDebugDescription;
- (void)remove:(unsigned long long)arg1;
- (void)match:(struct __CFString *)arg1 object:(void *)arg2 observer:(void *)arg3 enumerator:(CDUnknownBlockType)arg4;
- (void)find:(struct __CFString *)arg1 object:(void *)arg2 observer:(void *)arg3 enumerator:(CDUnknownBlockType)arg4;
- (void)add:(struct __CFString *)arg1 object:(void *)arg2 observer:(void *)arg3 tokenRegistration:(id)arg4;
- (id)registrar;
- (id)invalidate:(unsigned long long)arg1;
- (id)acquireDoubleWildcard:(void *)arg1 options:(unsigned long long)arg2;
- (id)acquireWildcardName:(void *)arg1;
- (id)acquireWildcardObject:(struct __CFString *)arg1;
- (id)acquireName:(struct __CFString *)arg1;
- (void)enumerateRegistrations:(CDUnknownBlockType)arg1;

@end
