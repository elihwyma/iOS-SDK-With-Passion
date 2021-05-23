/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSExtensionContext.h>

@protocol _UIIVCInterface;

__attribute__((visibility("hidden")))
@interface UIInputViewControllerInterfaceClient : NSExtensionContext

{
    id <_UIIVCInterface> _forwardingInterface;
}

@property (retain, nonatomic) id <_UIIVCInterface> forwardingInterface;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)dealloc;
- (void)_tearDownRemoteService;
- (void)_handleInputViewControllerState:(id)arg1;
- (id)responseDelegate;

@end
