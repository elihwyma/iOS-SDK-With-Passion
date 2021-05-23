/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSInvocation.h>

@class NSString;

@interface NSInvocation (MailExtensions)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)log;
+ (id)mf_invocationWithSelector:(SEL)arg1 target:(id)arg2 object:(id)arg3;
+ (id)mf_invocationWithSelector:(SEL)arg1 target:(id)arg2;
+ (id)mf_invocationWithSelector:(SEL)arg1 target:(id)arg2 object1:(id)arg3 object2:(id)arg4;

- (_Bool)mf_shouldLogInvocation;

@end
