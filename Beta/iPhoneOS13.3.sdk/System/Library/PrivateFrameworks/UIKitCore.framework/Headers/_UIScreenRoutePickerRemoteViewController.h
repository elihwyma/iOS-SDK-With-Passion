/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIRemoteViewController.h>

@class NSExtension, NSString, _UIScreenRoutePickerViewController;

@protocol NSCopying><NSObject;

__attribute__((visibility("hidden")))
@interface _UIScreenRoutePickerRemoteViewController : _UIRemoteViewController

{
    _UIScreenRoutePickerViewController *_publicController;
    NSExtension *_extension;
    id <NSCopying><NSObject> _extensionRequestIdentifier;
}

@property (weak, nonatomic) _UIScreenRoutePickerViewController *publicController;
@property (retain, nonatomic) NSExtension *extension;
@property (copy, nonatomic) id <NSCopying><NSObject> extensionRequestIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void)invalidate;
- (void)setPreferredContentSize:(struct CGSize)arg1;
- (void)_dismissViewController;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end
