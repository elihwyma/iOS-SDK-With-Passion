/*
 Image: /System/Library/PrivateFrameworks/AppSSOCore.framework/AppSSOCore
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SOAuthorizationResult : NSObject

{
    CDUnknownBlockType _authorizationHandleResponseCompletion;
    CDUnknownBlockType _authorizationHandleCredentialCompletion;
}

@property (copy) CDUnknownBlockType authorizationHandleResponseCompletion;
@property (copy) CDUnknownBlockType authorizationHandleCredentialCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)authorizationDidNotHandle:(id)arg1;
- (void)authorizationDidCancel:(id)arg1;
- (void)authorizationDidComplete:(id)arg1;
- (void)authorization:(id)arg1 didCompleteWithHTTPAuthorizationHeaders:(id)arg2;
- (void)authorization:(id)arg1 didCompleteWithHTTPResponse:(id)arg2 httpBody:(id)arg3;
- (void)authorization:(id)arg1 didCompleteWithError:(id)arg2;

@end
