/*
 Image: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
 */

#import <Foundation/NSExtensionContext.h>

@class RPBroadcastPickerHostViewController;

@interface RPBroadcastPickerExtensionHostContext : NSExtensionContext

{
    RPBroadcastPickerHostViewController *_hostViewController;
}

@property (weak, nonatomic) RPBroadcastPickerHostViewController *hostViewController;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (id)extensionObjectProxy;
- (oneway void)viewControllerDidFinish;

@end
