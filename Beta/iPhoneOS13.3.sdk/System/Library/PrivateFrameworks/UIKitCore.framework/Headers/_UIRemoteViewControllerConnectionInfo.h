/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class BSMachPortSendRight, NSArray, _UIHostedWindowHostingHandle, _UIViewServiceInterface;

__attribute__((visibility("hidden")))
@interface _UIRemoteViewControllerConnectionInfo : NSObject

{
    int _preferredStatusBarVisibility;
    _UIViewServiceInterface *_interface;
    id _viewControllerOperatorProxy;
    id _serviceViewControllerProxy;
    id _serviceViewControllerControlMessageProxy;
    id _textEffectsOperatorProxy;
    NSArray *_serviceViewControllerSupportedInterfaceOrientations;
    BSMachPortSendRight *_serviceAccessibilityServerPortWrapper;
    long long _preferredStatusBarStyle;
    _UIHostedWindowHostingHandle *_hostedWindowHostingHandle;
    _UIHostedWindowHostingHandle *_textEffectsWindowHostingHandle;
    _UIHostedWindowHostingHandle *_textEffectsWindowAboveStatusBarHostingHandle;
    _UIHostedWindowHostingHandle *_remoteKeyboardsWindowHostingHandle;
}

@property (retain) _UIViewServiceInterface *interface;
@property (retain) id viewControllerOperatorProxy;
@property (retain) id serviceViewControllerProxy;
@property (retain) id serviceViewControllerControlMessageProxy;
@property (retain) id textEffectsOperatorProxy;
@property (retain) NSArray *serviceViewControllerSupportedInterfaceOrientations;
@property (retain) BSMachPortSendRight *serviceAccessibilityServerPortWrapper;
@property long long preferredStatusBarStyle;
@property int preferredStatusBarVisibility;
@property (retain) _UIHostedWindowHostingHandle *hostedWindowHostingHandle;
@property (retain) _UIHostedWindowHostingHandle *textEffectsWindowHostingHandle;
@property (retain) _UIHostedWindowHostingHandle *textEffectsWindowAboveStatusBarHostingHandle;
@property (retain) _UIHostedWindowHostingHandle *remoteKeyboardsWindowHostingHandle;

@end
