/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <StoreServices/SSRequest.h>

@class NSObject, NSString, SSAuthenticationContext;

@protocol OS_xpc_object;

@interface SSVServerAuthenticateRequest : SSRequest

{
    SSAuthenticationContext *_authenticationContext;
    NSObject<OS_xpc_object> *_dialog;
}

@property (nonatomic, readonly) NSObject<OS_xpc_object> *encodedDialog;
@property (copy, nonatomic) SSAuthenticationContext *authenticationContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (id)initWithEncodedDialog:(id)arg1;
- (void)startWithAuthenticateResponse:(CDUnknownBlockType)arg1;

@end
