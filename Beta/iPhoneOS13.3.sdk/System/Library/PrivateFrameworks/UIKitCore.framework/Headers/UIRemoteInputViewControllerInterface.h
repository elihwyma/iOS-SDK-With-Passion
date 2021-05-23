/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSExtensionContext.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString;

@protocol _UIIVCResponseDelegate;

__attribute__((visibility("hidden")))
@interface UIRemoteInputViewControllerInterface : NSExtensionContext <Swift>

{
    id <_UIIVCResponseDelegate> _responseDelegate;
}

@property (retain, nonatomic) id <_UIIVCResponseDelegate> responseDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)dealloc;
- (void)_openURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_tearDownRemoteService;
- (void)_handleInputViewControllerState:(id)arg1;
- (void)_performInputViewControllerOutput:(id)arg1;

@end
