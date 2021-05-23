/*
 Image: /System/Library/Frameworks/ClassKit.framework/ClassKit
 */

#import <Foundation/NSExtensionContext.h>

#import <ClassKit/Swift-Protocol.h>

@interface CLSContextProviderExtensionContext : NSExtensionContext <Swift>

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)updateDescendantsOfContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getMainAppContextPathWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateDescendantsOfContextPath:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
