/*
 Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

#import <Foundation/NSExtensionContext.h>

@interface CXProviderExtensionContext : NSExtensionContext

@property (retain, readonly) id remoteObjectProxy;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;

@end
