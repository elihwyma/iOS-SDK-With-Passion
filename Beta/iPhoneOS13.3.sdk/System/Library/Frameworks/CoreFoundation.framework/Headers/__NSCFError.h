/*
 Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <CoreFoundation/__NSCFType.h>

__attribute__((visibility("hidden")))
@interface __NSCFError : __NSCFType

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;

- (unsigned long long)retainCount;
- (_Bool)isEqual:(id)arg1;
- (id)retain;
- (oneway void)release;
- (unsigned long long)hash;
- (_Bool)_tryRetain;
- (_Bool)_isDeallocating;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)domain;
- (long long)code;
- (id)userInfo;
- (id)initWithCoder:(id)arg1;
- (Class)classForCoder;

@end
