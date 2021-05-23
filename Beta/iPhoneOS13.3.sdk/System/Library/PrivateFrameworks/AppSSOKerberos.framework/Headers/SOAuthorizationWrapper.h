/*
 Image: /System/Library/PrivateFrameworks/AppSSOKerberos.framework/AppSSOKerberos
 */

#import <Foundation/NSObject.h>

@class NSString, SOAuthorization;

@interface SOAuthorizationWrapper : NSObject

{
    SOAuthorization *_authorization;
    CDUnknownBlockType _authorizationCompletion;
}

@property (copy) CDUnknownBlockType authorizationCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)authorizationDidNotHandle:(id)arg1;
- (void)authorizationDidCancel:(id)arg1;
- (void)authorizationDidComplete:(id)arg1;
- (void)authorization:(id)arg1 didCompleteWithHTTPAuthorizationHeaders:(id)arg2;
- (void)authorization:(id)arg1 didCompleteWithHTTPResponse:(id)arg2 httpBody:(id)arg3;
- (void)authorization:(id)arg1 didCompleteWithError:(id)arg2;
- (void)beginAuthorizationWithOperation:(id)arg1 url:(id)arg2 httpHeaders:(id)arg3 httpBody:(id)arg4 andCompletion:(CDUnknownBlockType)arg5;

@end
