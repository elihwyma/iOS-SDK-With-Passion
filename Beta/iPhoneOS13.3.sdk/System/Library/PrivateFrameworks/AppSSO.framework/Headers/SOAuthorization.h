/*
 Image: /System/Library/PrivateFrameworks/AppSSO.framework/AppSSO
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, SOAuthorizationCore, SOExtension, SORemoteExtensionViewController;

@protocol OS_dispatch_queue, SOAuthorizationDelegate;

@interface SOAuthorization : NSObject

{
    SOAuthorizationCore *_authorizationCore;
    SOExtension *_extension;
    SORemoteExtensionViewController *_extensionViewController;
    _Bool _enableEmbeddedAuthorizationViewController;
    id <SOAuthorizationDelegate> _delegate;
}

@property (weak) id <SOAuthorizationDelegate> delegate;
@property (retain) NSObject<OS_dispatch_queue> *delegateDispatchQueue;
@property (retain, nonatomic) NSDictionary *authorizationOptions;
@property (nonatomic) _Bool enableEmbeddedAuthorizationViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)canPerformAuthorizationWithURL:(id)arg1 responseCode:(long long)arg2;
+ (_Bool)canPerformAuthorizationWithURL:(id)arg1 responseCode:(long long)arg2 useInternalExtensions:(_Bool)arg3;

- (id)init;
- (void)cancelAuthorization;
- (void)beginAuthorizationWithURL:(id)arg1 httpHeaders:(id)arg2 httpBody:(id)arg3;
- (void)beginAuthorizationWithParameters:(id)arg1;
- (void)beginAuthorizationWithOperation:(id)arg1 url:(id)arg2 httpHeaders:(id)arg3 httpBody:(id)arg4;
- (void)viewControllerDidCancel:(id)arg1;
- (void)presentAuthorizationViewControllerWithHints:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)authorizationDidCompleteWithCredential:(id)arg1 error:(id)arg2;
- (id)realms;
- (void)debugHintsWithCompletion:(CDUnknownBlockType)arg1;
- (void)getAuthorizationHintsWithURL:(id)arg1 responseCode:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_finishAuthorizationWithCredential:(id)arg1 error:(id)arg2;
- (void)_cancelAuthorization;
- (void)_extensionCleanup;

@end
