/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIViewController.h>

@class DOCConfiguration, NSArray, NSMutableArray, NSString, NSURL;

@protocol UIDocumentPickerDelegate;

@interface UIDocumentPickerViewController : UIViewController

{
    id <UIDocumentPickerDelegate> _weak_delegate;
    NSMutableArray *_securityScopedURLs;
    _Bool _ignoreApplicationEntitlementForImport;
    _Bool _allowsMultipleSelection;
    _Bool _isContentManaged;
    id <UIDocumentPickerDelegate> _delegate;
    unsigned long long _documentPickerMode;
    NSURL *_directoryURL;
    NSArray *_documentTypes;
    UIViewController *_childViewController;
    NSArray *_uploadURLs;
    DOCConfiguration *_configuration;
}

@property (nonatomic) unsigned long long documentPickerMode;
@property (copy, nonatomic) NSArray *documentTypes;
@property (retain, nonatomic, getter=_childViewController, setter=_setChildViewController:) UIViewController *childViewController;
@property (copy, nonatomic) NSArray *uploadURLs;
@property (retain, nonatomic) NSMutableArray *_securityScopedURLs;
@property (retain, nonatomic) DOCConfiguration *configuration;
@property (nonatomic, getter=_ignoreApplicationEntitlementForImport, setter=_setIgnoreApplicationEntitlementForImport:) _Bool _ignoreApplicationEntitlementForImport;
@property (nonatomic, getter=_isContentManaged, setter=_setIsContentManaged:) _Bool isContentManaged;
@property (nonatomic, getter=_sourceIsManaged, setter=_setSourceIsManaged:) _Bool sourceIsManaged;
@property (nonatomic) unsigned long long pickerUserInterfaceStyle;
@property (nonatomic, getter=_forPickingDownloadsFolder, setter=_setForPickingDownloadsFolder:) _Bool forPickingDownloadsFolder;
@property (weak, nonatomic) id <UIDocumentPickerDelegate> delegate;
@property (nonatomic) _Bool allowsMultipleSelection;
@property (nonatomic) _Bool shouldShowFileExtensions;
@property (copy, nonatomic) NSURL *directoryURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (id)initWithDocumentTypes:(id)arg1 inMode:(unsigned long long)arg2;
- (id)initWithURL:(id)arg1 inMode:(unsigned long long)arg2;
- (id)_initIgnoringApplicationEntitlementForImportOfTypes:(id)arg1;
- (void)_commonInitWithDocumentTypes:(id)arg1;
- (void)_tellDelegateDocumentPickerWasCancelled;
- (void)_callDelegateWithSelectedURLsAndDismiss:(id)arg1;
- (void)_didTapCancel;
- (void)_consumeSandboxExtensionForURL:(id)arg1;
- (void)documentBrowser:(id)arg1 didPickDocumentURLs:(id)arg2;
- (void)documentManagerWasCancelled:(id)arg1;
- (id)initWithURLs:(id)arg1 inMode:(unsigned long long)arg2;
- (id)_initWithViewController:(id)arg1 inMode:(unsigned long long)arg2 uploadURLOrNil:(id)arg3;

@end
