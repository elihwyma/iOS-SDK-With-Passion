/*
 Image: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
 */

#import <UIKit/UINavigationController.h>

@class DCScannedDocument, ICDocCamDocumentInfoCollection, ICDocCamExtractedDocumentViewController, ICDocCamImageCache, NSIndexPath, NSString, UIImage, UIView;

@protocol DCDocumentEditorViewControllerDelegate;

@interface DCDocumentEditorViewController : UINavigationController

{
    _Bool _useCustomRecropTransition;
    ICDocCamExtractedDocumentViewController *_extractedDocumentController;
    id <DCDocumentEditorViewControllerDelegate> _docCamDelegate;
    DCScannedDocument *_scannedDocument;
    ICDocCamDocumentInfoCollection *_docInfoCollection;
    ICDocCamImageCache *_imageCache;
    long long _orientationForRecrop;
    NSIndexPath *_indexPathForRecrop;
    UIImage *_filteredImageForRecrop;
    UIImage *_unfilteredImageForRecrop;
    UIView *_sourceViewForZoomTransition;
}

@property (retain, nonatomic) ICDocCamExtractedDocumentViewController *extractedDocumentController;
@property (weak, nonatomic) id <DCDocumentEditorViewControllerDelegate> docCamDelegate;
@property (retain, nonatomic) DCScannedDocument *scannedDocument;
@property (retain, nonatomic) ICDocCamDocumentInfoCollection *docInfoCollection;
@property (retain, nonatomic) ICDocCamImageCache *imageCache;
@property (nonatomic) _Bool useCustomRecropTransition;
@property (nonatomic) long long orientationForRecrop;
@property (retain, nonatomic) NSIndexPath *indexPathForRecrop;
@property (retain, nonatomic) UIImage *filteredImageForRecrop;
@property (retain, nonatomic) UIImage *unfilteredImageForRecrop;
@property (retain, nonatomic) UIView *sourceViewForZoomTransition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)isAvailable;
+ (id)activityTypeOrder;
+ (id)docInfoCollectionFromScannedDocument:(id)arg1 imageCache:(id)arg2;

- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;
- (void)_autoDismiss;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)initWithRootViewController:(id)arg1;
- (id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2;
- (void)didReceiveMemoryWarning;
- (id)extractedDocumentControllerTitle;
- (void)extractedDocumentControllerDidTapAddImage;
- (void)extractedDocumentController:(id)arg1 didTapRecrop:(id)arg2 index:(long long)arg3;
- (void)extractedDocumentControllerDidTapRetake:(unsigned long long)arg1;
- (void)extractedDocumentControllerDidTapDone:(unsigned long long)arg1 scanDataDelegate:(id)arg2;
- (void)extractedDocumentControllerDidTapDone:(unsigned long long)arg1;
- (void)extractedDocumentController:(id)arg1 shareDocument:(id)arg2 sender:(id)arg3;
- (void)extractedDocumentControllerDiscardMarkupModelDataForDocument:(id)arg1;
- (id)extractedDocumentControllerMarkupModelDataForDocument:(id)arg1;
- (void)extractedDocumentControllerDidChangeTitle:(id)arg1;
- (void)extractedDocumentControllerDidSelectShareFromMenuForDocument:(id)arg1 sourceRect:(struct CGRect)arg2 sourceView:(id)arg3;
- (void)extractedDocumentControllerDidSelectCopyFromMenuForDocument:(id)arg1;
- (_Bool)documentCameraController:(id)arg1 canAddImages:(unsigned long long)arg2;
- (void)documentCameraController:(id)arg1 didFinishWithDocInfoCollection:(id)arg2 imageCache:(id)arg3 warnUser:(_Bool)arg4 closeViewController:(_Bool)arg5;
- (void)documentCameraControllerDidCancel:(id)arg1;
- (id)documentCameraControllerCreateDataCryptorIfNecessary;
- (id)scanDataDelegateWithIdentifier:(id)arg1;
- (void)documentCameraController:(id)arg1 didFinishWithDocInfoCollection:(id)arg2 imageCache:(id)arg3 warnUser:(_Bool)arg4;
- (id)documentCameraControllerImageCache;
- (id)initWithDelegate:(id)arg1 scannedDocument:(id)arg2;

@end
