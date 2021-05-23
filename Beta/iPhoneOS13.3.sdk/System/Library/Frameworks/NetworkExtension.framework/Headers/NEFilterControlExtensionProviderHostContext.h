/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <NetworkExtension/NEFilterExtensionProviderHostContext.h>

@class NSString;

@interface NEFilterControlExtensionProviderHostContext : NEFilterExtensionProviderHostContext

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)handleNewFlow:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)handleReport:(id)arg1;
- (void)notifyRulesChanged;
- (void)provideRemediationMap:(id)arg1;
- (void)provideURLAppendStringMap:(id)arg1;

@end
