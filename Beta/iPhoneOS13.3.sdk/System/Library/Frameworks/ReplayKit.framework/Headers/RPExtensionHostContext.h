/*
 Image: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
 */

#import <Foundation/NSExtensionContext.h>

@interface RPExtensionHostContext : NSExtensionContext

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)didConnectToVendor:(id)arg1;

@end
