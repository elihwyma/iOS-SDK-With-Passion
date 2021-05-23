/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIViewController.h>

@class DOMNode, NSArray, NSObject, NSString, UIDocumentMenuViewController, UIImagePickerController, UIPopoverController, UIWebDocumentView;

@protocol UIWebFileUploadPanelDelegate, WebOpenPanelResultListener;

__attribute__((visibility("hidden")))
@interface UIWebFileUploadPanel : UIViewController

{
    UIDocumentMenuViewController *_documentMenuController;
    UIImagePickerController *_imagePicker;
    UIViewController *_presentationViewController;
    UIPopoverController *_presentationPopover;
    struct CGPoint _interactionPoint;
    DOMNode *_interactionElement;
    _Bool _allowMultipleFiles;
    _Bool _isUsingCamera;
    NSArray *_mimeTypes;
    UIWebDocumentView *_documentView;
    NSObject<WebOpenPanelResultListener> *_resultListener;
    id <UIWebFileUploadPanelDelegate> _delegate;
    long long _mediaCaptureType;
}

@property (copy, nonatomic) NSArray *mimeTypes;
@property (nonatomic) UIWebDocumentView *documentView;
@property (retain, nonatomic) NSObject<WebOpenPanelResultListener> *resultListener;
@property (nonatomic) _Bool allowMultipleFiles;
@property (nonatomic) _Bool isUsingCamera;
@property (nonatomic) long long mediaCaptureType;
@property (nonatomic) id <UIWebFileUploadPanelDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)dismiss;
- (void)present;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerController:(id)arg1 didFinishPickingMultipleMediaWithInfo:(id)arg2;
- (void)documentMenu:(id)arg1 didPickDocumentPicker:(id)arg2;
- (void)documentMenuWasCancelled:(id)arg1;
- (void)documentPickerWasCancelled:(id)arg1;
- (void)documentPicker:(id)arg1 didPickDocumentAtURL:(id)arg2;
- (void)_dispatchDidDismiss;
- (_Bool)_string:(id)arg1 hasPrefixCaseInsensitive:(id)arg2;
- (id)_UTIsForMIMETypes;
- (id)_mediaTypesForPickerSourceType:(long long)arg1;
- (id)_photoPickerWithSourceType:(long long)arg1;
- (void)_presentPopoverWithContentViewController:(id)arg1 animated:(_Bool)arg2;
- (void)_presentFullscreenViewController:(id)arg1 animated:(_Bool)arg2;
- (id)_documentPickerMenuMediaTypes;
- (void)_showPhotoPickerWithSourceType:(long long)arg1;
- (id)_cameraButtonLabel;
- (void)_presentForCurrentInterfaceIdiom:(id)arg1;
- (void)_dismissDisplayAnimated:(_Bool)arg1;
- (_Bool)_shouldMediaCaptureOpenMediaDevice;
- (void)_adjustMediaCaptureType;
- (void)_showDocumentPickerMenu;
- (void)_cancel;
- (void)_chooseFilename:(id)arg1 displayString:(id)arg2 iconImage:(id)arg3;
- (void)_processMediaInfoDictionaries:(id)arg1 atIndex:(unsigned long long)arg2 processedResults:(id)arg3 processedImageCount:(unsigned long long)arg4 processedVideoCount:(unsigned long long)arg5 successBlock:(CDUnknownBlockType)arg6 failureBlock:(CDUnknownBlockType)arg7;
- (id)_displayStringForPhotos:(unsigned long long)arg1 videos:(unsigned long long)arg2;
- (void)_uploadItemFromMediaInfo:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)_uploadItemForImageData:(id)arg1 imageName:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)_uploadItemForJPEGRepresentationOfImage:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (_Bool)_willMultipleSelectionDelegateBeCalled;
- (void)_processMediaInfoDictionaries:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)_chooseFilenames:(id)arg1 displayString:(id)arg2 iconImage:(id)arg3;
- (id)initWithResultListener:(id)arg1 configuration:(id)arg2 documentView:(id)arg3;

@end
