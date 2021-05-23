/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIViewController.h>

#import <PhotosUI/Swift-Protocol.h>

@class NSArray, NSDictionary, NSString, PUPhotoPickerExtensionContext, PUPhotoPickerRemoteNavigationController, PUPhotoPickerRemoteViewControllerRequestOptions;

__attribute__((visibility("hidden")))
@interface PUPhotoPickerRemoteViewController : UIViewController <Swift>

{
    PUPhotoPickerExtensionContext *_extensionContext;
    UIViewController *_contentViewController;
    PUPhotoPickerRemoteNavigationController *_contentNavigationController;
    PUPhotoPickerRemoteViewControllerRequestOptions *_options;
}

@property (weak, nonatomic) PUPhotoPickerExtensionContext *extensionContext;
@property (retain, nonatomic) UIViewController *contentViewController;
@property (retain, nonatomic) PUPhotoPickerRemoteNavigationController *contentNavigationController;
@property (retain, nonatomic) PUPhotoPickerRemoteViewControllerRequestOptions *options;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long savingOptions;
@property (nonatomic, readonly) NSArray *mediaTypes;
@property (nonatomic, readonly) _Bool allowsMultipleSelection;
@property (nonatomic, readonly) unsigned long long multipleSelectionLimit;
@property (nonatomic, readonly) _Bool requiresPickingConfirmation;
@property (nonatomic, readonly) _Bool showsFileSizePicker;
@property (nonatomic, readonly) _Bool showsPrompt;
@property (nonatomic, readonly) _Bool convertAutoloopsToGIF;
@property (nonatomic, readonly) NSDictionary *properties;

- (void)beginRequestWithExtensionContext:(id)arg1;
- (void)loadView;
- (void)viewWillLayoutSubviews;
- (void)performPhotoPickerPreviewOfFirstAsset;
- (void)cancelPhotoPicker;
- (void)didDisplayPhotoPickerSourceType:(long long)arg1;
- (void)didDisplayPhotoPickerPreview;
- (void)didSelectMultipleMediaItemsWithInfoDictionaries:(id)arg1;
- (void)presentViewController:(id)arg1;
- (_Bool)_useLibraryPresentation;
- (void)performTraitCollectionUpdateUsingData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)performPhotosSelection;
- (void)didSelectMediaWithInfoDictionary:(id)arg1 allowedHandler:(CDUnknownBlockType)arg2;
- (void)photoPickerRemoteNavigationController:(id)arg1 viewControllerToPush:(id)arg2;
- (void)_handleViewControllerRequestWithOptions:(id)arg1 error:(id)arg2;
- (void)_loadContentViewIfNeeded;
- (void)_setPhotoPickerInViewController:(id)arg1;
- (void)_handlePerformTraitCollectionUpdateUsingData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_logAssetSelectionIfNeeded:(id)arg1;
- (void)_allowSharingSelectionOfInfoDictionaries:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
