/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <NetworkExtension/NEFilterExtensionProviderHostContext.h>

#import <NetworkExtension/Swift-Protocol.h>

@class NSString;

@interface NEFilterPacketExtensionProviderHostContext : NEFilterExtensionProviderHostContext <Swift>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_extensionAuxiliaryHostProtocol;

- (void)createPacketChannelWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
