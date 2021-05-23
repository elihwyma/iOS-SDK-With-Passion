/*
 Image: /System/Library/PrivateFrameworks/DiagnosticExtensions.framework/DiagnosticExtensions
 */

#import <Foundation/NSExtensionContext.h>

@class NSString;

@interface DEExtensionHostContext : NSExtensionContext

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (_Bool)hasEntitlement;
- (void)attachmentListWithHandler:(CDUnknownBlockType)arg1;
- (void)attachmentsForParameters:(id)arg1 withHandler:(CDUnknownBlockType)arg2;

@end
