/*
 Image: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
 */

#import <Foundation/NSExtensionContext.h>

@class RPVideoEditorHostViewController;

@interface RPVideoEditorExtensionHostContext : NSExtensionContext

{
    RPVideoEditorHostViewController *_hostViewController;
}

@property (weak, nonatomic) RPVideoEditorHostViewController *hostViewController;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (id)extensionObjectProxy;
- (oneway void)extensionDidFinishWithActivityTypes:(id)arg1;

@end
