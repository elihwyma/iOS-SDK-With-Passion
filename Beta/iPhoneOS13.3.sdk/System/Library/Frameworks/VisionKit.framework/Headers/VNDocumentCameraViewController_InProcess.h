/*
 Image: /System/Library/Frameworks/VisionKit.framework/VisionKit
 */

#import <VisionKit/VNDocumentCameraViewController.h>

@class ICDocCamViewController, NSString;

__attribute__((visibility("hidden")))
@interface VNDocumentCameraViewController_InProcess : VNDocumentCameraViewController

{
    ICDocCamViewController *_viewController;
}

@property (retain, nonatomic) ICDocCamViewController *viewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (long long)_preferredModalPresentationStyle;
- (void)_autoDismiss;
- (void)didReceiveMemoryWarning;
- (_Bool)documentCameraController:(id)arg1 canAddImages:(unsigned long long)arg2;
- (void)documentCameraControllerDidCancel:(id)arg1;
- (id)documentCameraControllerCreateDataCryptorIfNecessary;
- (id)scanDataDelegateWithIdentifier:(id)arg1;
- (void)documentCameraController:(id)arg1 didFinishWithImage:(id)arg2;
- (void)documentCameraController:(id)arg1 didFinishWithDocInfoCollection:(id)arg2 imageCache:(id)arg3 warnUser:(_Bool)arg4;

@end
