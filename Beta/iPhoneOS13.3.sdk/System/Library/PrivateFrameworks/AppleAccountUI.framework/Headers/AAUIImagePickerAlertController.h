/*
 Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

#import <UIKit/UIViewController.h>

@class NSString;

@interface AAUIImagePickerAlertController : UIViewController

{
    CDUnknownBlockType _selectionHandler;
}

@property (copy, nonatomic) CDUnknownBlockType selectionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)alertControllerWithSelectionHandler:(CDUnknownBlockType)arg1;

- (void)viewDidLoad;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;
- (void)presentationControllerDidDismiss:(id)arg1;
- (long long)modalPresentationStyle;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)documentPickerWasCancelled:(id)arg1;
- (void)documentPicker:(id)arg1 didPickDocumentsAtURLs:(id)arg2;
- (void)_dismissViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_presentImagePickerAnimated:(_Bool)arg1;
- (void)_presentDocumentPickerAnimated:(_Bool)arg1;
- (void)_presentImageSourcePickerAnimated:(_Bool)arg1;
- (void)_presentImagePickerWithSourceType:(long long)arg1 animated:(_Bool)arg2;
- (void)_callSelectionHandlerWithImage:(id)arg1 cropRect:(id)arg2;
- (id)_propertiesForImagePickerController:(id)arg1;

@end
