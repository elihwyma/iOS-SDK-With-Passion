/*
 Image: /System/Library/PrivateFrameworks/AppSSO.framework/AppSSO
 */

#import <Foundation/NSExtensionContext.h>

@class ASAuthorizationProviderExtensionAuthorizationRequest, NSString, NSValue, SOExtensionServiceConnection, SOExtensionViewService;

@protocol ASAuthorizationProviderExtensionAuthorizationRequestHandler;

__attribute__((visibility("hidden")))
@interface SORemoteExtensionContext : NSExtensionContext

{
    SOExtensionServiceConnection *_extensionServiceConnection;
    SOExtensionViewService *_viewService;
    ASAuthorizationProviderExtensionAuthorizationRequest *_extensionAuthorizationRequest;
    NSValue *_extensionWindowSize;
}

@property (weak) SOExtensionViewService *viewService;
@property (nonatomic, readonly) id <ASAuthorizationProviderExtensionAuthorizationRequestHandler> extensionViewController;
@property (nonatomic, readonly) ASAuthorizationProviderExtensionAuthorizationRequest *extensionAuthorizationRequest;
@property (retain, nonatomic) NSValue *extensionWindowSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)openURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)canOpenURL:(id)arg1;
- (id)hostContextWithError:(id *)arg1;
- (void)beginAuthorizationWithRequestParameters:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)beginAuthorizationWithServiceXPCEndpoint:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)cancelAuthorizationWithCompletion:(CDUnknownBlockType)arg1;
- (void)_disableAppSSOInCFNetwork;
- (id)synchronousHostContextWithError:(id *)arg1;

@end
