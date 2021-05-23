/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <StoreServices/SSRequest.h>

@class NSString, SSAuthenticationContext, SSLogConfig, UIViewController;

@protocol SSAuthenticateRequestDelegate;

@interface SSAuthenticateRequest : SSRequest

{
    SSAuthenticationContext *_authenticationContext;
    SSLogConfig *_logConfig;
    UIViewController *__parentViewController;
}

@property (retain, nonatomic) SSLogConfig *logConfig;
@property (nonatomic, readonly) NSString *logUUID;
@property (weak, nonatomic) UIViewController *_parentViewController;
@property (nonatomic) id <SSAuthenticateRequestDelegate> delegate;
@property (readonly) SSAuthenticationContext *authenticationContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)_isAuthkitEntitled;
+ (id)_accountToAuthenticateWithAuthenticationContext:(id)arg1;
+ (_Bool)localAuthenticationAvailable;

- (id)init;
- (id)run;
- (_Bool)start;
- (id)initWithAccount:(id)arg1;
- (id)initWithAuthenticationContext:(id)arg1;
- (void)startWithAuthenticateResponseBlock:(CDUnknownBlockType)arg1;
- (void)startWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (void)_performRemoteAuthenticationWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)_shouldRunAuthenticationForAccount:(id)arg1;
- (id)_verifyCredentialsOptionsFromUpdateAccountResponse:(id)arg1 skipAuthKit:(_Bool)arg2;
- (void)_handleDialogFromError:(id)arg1;
- (long long)_responseTypeForError:(id)arg1;

@end
