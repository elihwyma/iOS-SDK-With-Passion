/*
 Image: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
 */

#import <Foundation/NSExtensionContext.h>

@class RPBroadcastActivityHostViewController;

@interface RPBroadcastActivityExtensionHostContext : NSExtensionContext

{
    RPBroadcastActivityHostViewController *_hostViewController;
}

@property (weak, nonatomic) RPBroadcastActivityHostViewController *hostViewController;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (id)extensionObjectProxy;
- (oneway void)extensionDidFinishWithLaunchURL:(id)arg1 broadcastURL:(id)arg2 extensionBundleID:(id)arg3 cancelled:(_Bool)arg4;
- (oneway void)presentationInfoWithCompletion:(CDUnknownBlockType)arg1;

@end
