/*
 Image: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
 */

#import <Foundation/NSInvocation.h>

@interface NSInvocation (MailExtensions)

+ (id)mf_invocationWithSelector:(SEL)arg1 target:(id)arg2 object:(id)arg3;
+ (id)mf_invocationWithSelector:(SEL)arg1 target:(id)arg2;
+ (id)mf_invocationWithSelector:(SEL)arg1 target:(id)arg2 object1:(id)arg3 object2:(id)arg4;

- (_Bool)mf_shouldLogInvocation;

@end
