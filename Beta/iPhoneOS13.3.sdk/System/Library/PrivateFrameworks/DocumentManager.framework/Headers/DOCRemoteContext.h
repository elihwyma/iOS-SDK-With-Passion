/*
 Image: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager
 */

#import <Foundation/NSExtensionContext.h>

@interface DOCRemoteContext : NSExtensionContext

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)updateAppearance:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)updateAppearance:(id)arg1 shouldFlushCA:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)updateEditingTo:(_Bool)arg1 animated:(_Bool)arg2;
- (id)serviceProxyWithErrorHandler:(CDUnknownBlockType)arg1;

@end
