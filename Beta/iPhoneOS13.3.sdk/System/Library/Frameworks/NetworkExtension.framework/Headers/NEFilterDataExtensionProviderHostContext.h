/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <NetworkExtension/NEFilterExtensionProviderHostContext.h>

@class NSString;

@interface NEFilterDataExtensionProviderHostContext : NEFilterExtensionProviderHostContext

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)provideRemediationMap:(id)arg1;
- (void)provideURLAppendStringMap:(id)arg1;
- (void)fetchProviderConnectionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)providerControlSocketFileHandle:(id)arg1;
- (void)handleRulesChanged;
- (void)report:(id)arg1;
- (void)sendBrowserContentFilterServerRequest;
- (void)sendSocketContentFilterRequest;
- (void)fetchCurrentRulesForFlow:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getSourceAppInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)applySettings:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
