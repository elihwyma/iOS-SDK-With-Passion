/*
 Image: /System/Library/PrivateFrameworks/AppSSO.framework/AppSSO
 */

#import <Foundation/NSObject.h>

@class NSData, NSDictionary, NSError, NSString, NSURL, SOAuthorizationCredential, SOAuthorizationRequestParameters, SORemoteExtensionContext;

@interface SOAuthorizationRequest : NSObject

{
    SOAuthorizationRequestParameters *_requestParameters;
    SORemoteExtensionContext *_remoteExtensionContext;
    _Bool _authorizationCanceled;
    SOAuthorizationCredential *_canceledAuthorizationCredential;
    NSError *_canceledAuthorizationError;
}

@property (nonatomic, getter=isAuthorizationCanceled) _Bool authorizationCanceled;
@property (retain, nonatomic) SOAuthorizationCredential *canceledAuthorizationCredential;
@property (retain, nonatomic) NSError *canceledAuthorizationError;
@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSString *requestedOperation;
@property (retain, nonatomic) NSDictionary *httpHeaders;
@property (retain, nonatomic) NSData *httpBody;
@property (retain, nonatomic) NSString *realm;
@property (retain, nonatomic) NSDictionary *extensionData;
@property (retain, nonatomic) NSString *callerBundleIdentifier;
@property (retain, nonatomic) NSDictionary *authorizationOptions;

- (void)cancel;
- (void)complete;
- (void)completeWithError:(id)arg1;
- (id)_hostExtensionContext;
- (void)doNotHandle;
- (void)completeWithHTTPAuthorizationHeaders:(id)arg1;
- (void)completeWithHTTPResponse:(id)arg1 httpBody:(id)arg2;
- (void)presentAuthorizationViewControllerWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithRequestParameters:(id)arg1 remoteExtensionContext:(id)arg2;
- (_Bool)_isUserInterfaceAllowed;

@end
