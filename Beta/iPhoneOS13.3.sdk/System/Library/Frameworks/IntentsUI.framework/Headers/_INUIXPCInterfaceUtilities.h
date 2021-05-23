/*
 Image: /System/Library/Frameworks/IntentsUI.framework/IntentsUI
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _INUIXPCInterfaceUtilities : NSObject

+ (id)remoteViewControllerHostingInterface;
+ (id)remoteViewControllerServingInterface;
+ (id)extensionContextHostingInterface;
+ (id)extensionContextVendingInterface;

@end
