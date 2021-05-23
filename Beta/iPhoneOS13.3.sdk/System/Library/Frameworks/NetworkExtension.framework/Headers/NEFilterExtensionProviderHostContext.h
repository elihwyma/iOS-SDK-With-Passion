/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <NetworkExtension/NEExtensionProviderHostContext.h>

#import <NetworkExtension/Swift-Protocol.h>

@class NSString;

@interface NEFilterExtensionProviderHostContext : NEExtensionProviderHostContext <Swift>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)startFilterWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
