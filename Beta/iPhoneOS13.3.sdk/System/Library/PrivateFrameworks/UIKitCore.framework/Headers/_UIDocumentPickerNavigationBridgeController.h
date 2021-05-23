/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UINavigationController.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerNavigationBridgeController : UINavigationController

{
    _Bool _hasSetInitialNavigationItem;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;

- (void)_setTintColor:(id)arg1;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (id)popToRootViewControllerAnimated:(_Bool)arg1;
- (id)popViewControllerAnimated:(_Bool)arg1;
- (void)setViewControllers:(id)arg1 animated:(_Bool)arg2;
- (id)popToViewController:(id)arg1 animated:(_Bool)arg2;
- (void)_setPickableTypes:(id)arg1;
- (void)_setPickerMode:(unsigned long long)arg1;
- (void)_setUploadURLWrapper:(id)arg1;
- (void)_prepareWithExtensionInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_documentPickerDidDismiss;
- (id)hostingViewController;
- (void)_doneButton:(id)arg1;
- (void)_updateNavigationItem;
- (void)_locationsMenu:(id)arg1;

@end
