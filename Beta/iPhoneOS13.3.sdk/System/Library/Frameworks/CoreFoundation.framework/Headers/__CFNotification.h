/*
 Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface __CFNotification : NSObject

{
    id _name;
    id _object;
    id _userInfo;
    _Bool _fouSemantics;
    _Bool _dyingObject;
}

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)name;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)object;
- (id)userInfo;
- (id)initWithName:(struct __CFString *)arg1 object:(const void *)arg2 userInfo:(struct __CFDictionary *)arg3 foundation:(_Bool)arg4;

@end
