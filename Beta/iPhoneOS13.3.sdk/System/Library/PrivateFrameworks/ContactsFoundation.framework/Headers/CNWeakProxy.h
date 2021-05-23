/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <Foundation/NSProxy.h>

@interface CNWeakProxy : NSProxy

{
    Class _targetClass;
    id _weakReference;
}

+ (id)weakProxyWithObject:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (Class)class;
- (_Bool)isKindOfClass:(Class)arg1;
- (_Bool)conformsToProtocol:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithObject:(id)arg1;

@end
