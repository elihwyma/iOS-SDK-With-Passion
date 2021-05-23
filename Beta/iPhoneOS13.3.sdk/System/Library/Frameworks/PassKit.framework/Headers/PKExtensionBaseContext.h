/*
 Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

#import <Foundation/NSExtensionContext.h>

@interface PKExtensionBaseContext : NSExtensionContext

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (id)remoteContext;
- (id)remoteContextWithErrorHandler:(CDUnknownBlockType)arg1;

@end
