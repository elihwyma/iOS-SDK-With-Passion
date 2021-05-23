/*
 Image: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
 */

#import <CloudDocsUI/_UIViewServiceViewController.h>

@class NSArray, NSString, NSURL, UIViewController;

@protocol _UIDocumentPickerViewControllerHost;

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerViewServiceViewController : _UIViewServiceViewController

{
    _Bool _displayedAsMenu;
    _Bool _hasBeenDismissed;
    _Bool _showingSpinner;
    int _sortOrder;
    NSArray *_pickableTypes;
    unsigned long long _pickerMode;
    NSURL *_uploadURL;
    NSArray *_auxiliaryOptions;
    NSString *_currentPickerIdentifier;
    UIViewController *_currentPicker;
}

@property (copy, nonatomic, setter=_setPickableTypes:) NSArray *pickableTypes;
@property (nonatomic, setter=_setPickerMode:) unsigned long long pickerMode;
@property (copy, nonatomic, setter=_setUploadURL:) NSURL *uploadURL;
@property (retain, nonatomic, setter=_setAuxiliaryOptions:) NSArray *auxiliaryOptions;
@property (retain, nonatomic) NSString *currentPickerIdentifier;
@property (nonatomic) _Bool displayedAsMenu;
@property (nonatomic) _Bool hasBeenDismissed;
@property (nonatomic) _Bool showingSpinner;
@property (retain, nonatomic) UIViewController *currentPicker;
@property (nonatomic, readonly) id <_UIDocumentPickerViewControllerHost> hostingViewController;
@property (nonatomic) int sortOrder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;
+ (id)_logicalURLForPhysicalURL:(id)arg1;
+ (id)_urlByResolvingExternalDocumentReferenceForURL:(id)arg1;

- (void)dealloc;
- (void)_setTintColor:(id)arg1;
- (void)_dismissViewController;
- (void)_setUploadURLWrapper:(id)arg1;
- (void)_documentPickerDidDismiss;
- (void)_didSelectPicker;
- (void)_dismissWithOption:(id)arg1;
- (void)_stitchFileCreationAtURL:(id)arg1;
- (void)_doneButton:(id)arg1;
- (void)_prepareForDisplayWithCompletion:(CDUnknownBlockType)arg1;
- (void)_setIsContentManaged:(_Bool)arg1;
- (void)_didSelectURL:(id)arg1;
- (void)_displayLocationsMenuFromRect:(struct CGRect)arg1;
- (void)_setSourceIsManaged:(_Bool)arg1;
- (void)_showDefaultPicker;
- (void)_willAppearInRemoteViewController;
- (void)_showPicker:(id)arg1;
- (void)documentListController:(id)arg1 didSelectContainerWithViewController:(id)arg2;
- (void)documentListController:(id)arg1 didSelectItemAtURL:(id)arg2;
- (void)documentListController:(id)arg1 performAction:(long long)arg2 URL:(id)arg3 originatingView:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (struct CGSize)_updatedContentSizeForPreferredContentSize:(struct CGSize)arg1;
- (void)documentTargetSelectionController:(id)arg1 didSelectItemAtURL:(id)arg2;
- (void)overviewController:(id)arg1 selectedDocumentPickerWithIdentifier:(id)arg2;
- (void)overviewController:(id)arg1 selectedAuxiliaryOptionWithIdentifier:(id)arg2;
- (void)setNavigationItemSpinner:(_Bool)arg1;
- (void)_createBookmarkAndDismissWithCloudURL:(id)arg1;
- (void)_dismissWithFileProviderURL:(id)arg1 bundleIdentifier:(id)arg2;
- (void)_updateDefaultPicker;
- (void)_showTopLevelViewController;
- (void)_warnSharingPreMove;
- (void)_cloudEnabledStatusDidChange:(id)arg1;
- (void)setupNavigationItemForPicker:(id)arg1 isRoot:(_Bool)arg2;
- (void)_showLocationPopup:(id)arg1;
- (void)_didInstantiateThirdPartyPickerWithDescription:(id)arg1 placeholder:(id)arg2;
- (void)_presentError:(id)arg1 forThirdPartyPickerWithDescription:(id)arg2;
- (void)_invalidatePicker:(id)arg1;
- (void)dismissWithURL:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)_showLocationPopupFromBarButtonItem:(id)arg1 rect:(struct CGRect)arg2;
- (void)_waitForDownloadOfURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)pickLocationForUpload:(id)arg1;
- (void)_warnSharingForTarget:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_tryExportingFile:(id)arg1 toLocation:(id)arg2;
- (id)_mangledFilenameForURL:(id)arg1;
- (void)_showExistsAlertForFile:(id)arg1 withSourceURL:(id)arg2;
- (_Bool)_shouldWarnForSharing;
- (void)_dismissWithImportURL:(id)arg1;

@end
