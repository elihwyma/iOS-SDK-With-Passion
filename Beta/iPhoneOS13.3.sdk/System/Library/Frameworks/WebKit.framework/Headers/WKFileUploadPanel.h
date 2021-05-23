/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <UIKit/UIViewController.h>

@class NSString, WKContentView;

@protocol WKFileUploadPanelDelegate;

__attribute__((visibility("hidden")))
@interface WKFileUploadPanel : UIViewController

{
    WKContentView *_view;
    struct RefPtr<WebKit::WebOpenPanelResultListenerProxy, WTF::DumbPtrTraits<WebKit::WebOpenPanelResultListenerProxy>> _listener;
    RetainPtr_f649c0c3 _mimeTypes;
    struct CGPoint _interactionPoint;
    _Bool _allowMultipleFiles;
    _Bool _usingCamera;
    struct RetainPtr<UIImagePickerController> _imagePicker;
    struct RetainPtr<UIViewController> _presentationViewController;
    struct RetainPtr<UIPopoverController> _presentationPopover;
    struct RetainPtr<UIDocumentMenuViewController> _documentMenuController;
    struct RetainPtr<UIDocumentPickerViewController> _documentPickerController;
    int _mediaCaptureType;
    id <WKFileUploadPanelDelegate> _delegate;
}

@property (nonatomic) id <WKFileUploadPanelDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id).cxx_construct;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)dismiss;
- (id)initWithView:(id)arg1;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerController:(id)arg1 didFinishPickingMultipleMediaWithInfo:(id)arg2;
- (void)documentMenu:(id)arg1 didPickDocumentPicker:(id)arg2;
- (void)documentMenuWasCancelled:(id)arg1;
- (void)documentPickerWasCancelled:(id)arg1;
- (void)documentPicker:(id)arg1 didPickDocumentsAtURLs:(id)arg2;
- (void)_dispatchDidDismiss;
- (id)_mediaTypesForPickerSourceType:(long long)arg1;
- (void)_presentPopoverWithContentViewController:(id)arg1 animated:(_Bool)arg2;
- (void)_presentFullscreenViewController:(id)arg1 animated:(_Bool)arg2;
- (void)_showPhotoPickerWithSourceType:(long long)arg1;
- (void)_dismissDisplayAnimated:(_Bool)arg1;
- (_Bool)_shouldMediaCaptureOpenMediaDevice;
- (void)_adjustMediaCaptureType;
- (void)_showDocumentPickerMenu;
- (void)_cancel;
- (void)_processMediaInfoDictionaries:(id)arg1 atIndex:(unsigned long long)arg2 processedResults:(id)arg3 processedImageCount:(unsigned long long)arg4 processedVideoCount:(unsigned long long)arg5 successBlock:(CDUnknownBlockType)arg6 failureBlock:(CDUnknownBlockType)arg7;
- (void)_uploadItemFromMediaInfo:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)_uploadItemForImageData:(id)arg1 imageName:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)_uploadItemForJPEGRepresentationOfImage:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (_Bool)_willMultipleSelectionDelegateBeCalled;
- (void)_processMediaInfoDictionaries:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (id)currentAvailableActionTitles;
- (_Bool)platformSupportsPickerViewController;
- (id)_photoLibraryButtonLabel;
- (id)_cameraButtonLabelAllowingPhoto:(_Bool)arg1 allowingVideo:(_Bool)arg2;
- (void)_presentMenuOptionForCurrentInterfaceIdiom:(id)arg1;
- (void)_configureImagePicker:(id)arg1;
- (void)_chooseFiles:(id)arg1 displayString:(id)arg2 iconImage:(id)arg3;
- (void)presentWithParameters:(struct OpenPanelParameters *)arg1 resultListener:(struct WebOpenPanelResultListenerProxy *)arg2;

@end
