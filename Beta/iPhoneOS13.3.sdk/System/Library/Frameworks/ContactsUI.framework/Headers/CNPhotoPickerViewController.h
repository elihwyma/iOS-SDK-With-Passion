/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <UIKit/UIViewController.h>

#import <ContactsUI/Swift-Protocol.h>

@class CNAvatarEditingManager, CNContactStyle, CNMutableContact, CNPhotoPickerActionsViewController, CNPhotoPickerDataSource, CNPhotoPickerHeaderView, CNPhotoPickerProviderItem, NSString, UICollectionView;

@protocol CNPhotoPickerViewControllerDelegate;

@interface CNPhotoPickerViewController : UIViewController <Swift>

{
    _Bool _allowRotation;
    id <CNPhotoPickerViewControllerDelegate> _delegate;
    UICollectionView *_collectionView;
    CNMutableContact *_pendingEditContact;
    CNPhotoPickerDataSource *_dataSource;
    CNPhotoPickerHeaderView *_headerView;
    CNPhotoPickerProviderItem *_editingProviderItem;
    CNPhotoPickerProviderItem *_duplicatingProviderItem;
    CNAvatarEditingManager *_posePickerController;
    CNPhotoPickerActionsViewController *_actionsViewController;
    CNContactStyle *_contactStyle;
    NSString *_assignActionTitleOverride;
}

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) CNMutableContact *pendingEditContact;
@property (nonatomic, readonly) CNPhotoPickerDataSource *dataSource;
@property (nonatomic, readonly) CNPhotoPickerHeaderView *headerView;
@property (retain, nonatomic) CNPhotoPickerProviderItem *editingProviderItem;
@property (retain, nonatomic) CNPhotoPickerProviderItem *duplicatingProviderItem;
@property (retain, nonatomic) CNAvatarEditingManager *posePickerController;
@property (retain, nonatomic) CNPhotoPickerActionsViewController *actionsViewController;
@property (retain, nonatomic) CNContactStyle *contactStyle;
@property (nonatomic) _Bool allowRotation;
@property (retain, nonatomic) NSString *assignActionTitleOverride;
@property (weak, nonatomic) id <CNPhotoPickerViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) _Bool isPresentingModalViewController;

+ (id)log;
+ (id)descriptorForRequiredKeys;
+ (_Bool)canShowAvatarEditor;
+ (double)itemsPerRowForWidth:(double)arg1;
+ (_Bool)canShowPhotoPickerForView:(id)arg1 withTraitCollection:(id)arg2;
+ (struct CGSize)defaultContentSize;
+ (id)navigationControllerForPicker:(id)arg1;
+ (id)photoPickerForGameCenterWithContact:(id)arg1;

- (id)contact;
- (void)viewDidLoad;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)presentationControllerDidAttemptToDismiss:(id)arg1;
- (void)viewDidLayoutSubviews;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (_Bool)isModalInPresentation;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)done:(id)arg1;
- (void)cancel:(id)arg1;
- (id)contactViewCache;
- (void)photoViewDidUpdate:(id)arg1;
- (void)photoView:(id)arg1 didSaveImageDropToContact:(id)arg2;
- (id)viewControllerForPhotoView:(id)arg1;
- (void)sender:(id)arg1 presentViewController:(id)arg2;
- (void)sender:(id)arg1 dismissViewController:(id)arg2;
- (void)sender:(id)arg1 dismissViewController:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)photoPickerProviderGroupDidUpdate:(id)arg1;
- (void)photoPickerProviderGroup:(id)arg1 didUpdateItem:(id)arg2;
- (void)photoPickerVariantListController:(id)arg1 didSelectProviderItem:(id)arg2;
- (void)photoPickerVariantListControllerDidCancel:(id)arg1;
- (void)buildCollectionView;
- (void)avatarPosePickerManager:(id)arg1 didFinishWithProviderItem:(id)arg2;
- (void)photoPickerActionsViewControllerDidFinish:(id)arg1;
- (void)photoPickerActionsViewController:(id)arg1 didPerformAction:(long long)arg2 withProviderItem:(id)arg3 atIndexPath:(id)arg4;
- (void)avatarEditorViewController:(id)arg1 didFinishWithAvatarRecord:(id)arg2;
- (void)avatarEditorViewControllerDidCancel:(id)arg1;
- (void)headerViewPhotoViewTapped;
- (id)initWithContact:(id)arg1 style:(id)arg2 configuration:(id)arg3;
- (id)initWithPhotosDataSource:(id)arg1 style:(id)arg2 allowRotation:(_Bool)arg3;
- (void)confirmCancelAction;
- (void)buildHeaderView;
- (id)photoPickerNavigationControllerForRootController:(id)arg1;
- (void)updateActiveIndexPath:(id)arg1 reload:(_Bool)arg2;
- (void)updateActiveIndexPath:(id)arg1;
- (_Bool)photoHasChanged;
- (void)updateContactWithProviderItem:(id)arg1;
- (void)insertNewItem:(id)arg1 toGroupType:(long long)arg2 updateActive:(_Bool)arg3;
- (void)deleteExistingItem:(id)arg1;
- (id)contactImageForCurrentActiveItem;
- (void)headerActionPressedAtIndexPath:(id)arg1;
- (_Bool)isEditingOrDuplicatingItem;
- (void)selectItem:(id)arg1 presentFromViewControllerIfNeeded:(id)arg2;
- (void)presentPhotoPickerVariantListFor:(id)arg1 FromViewController:(id)arg2;
- (long long)defaultModalPresentationStyle;
- (void)showAvatarEditorForCreation;
- (void)showAvatarPosePickerFromItem:(id)arg1;
- (void)showAvatarCropAndScaleForItem:(id)arg1 fromViewController:(id)arg2;
- (id)currentImageDataAndCropRect:(struct CGRect *)arg1;
- (void)presentLibraryImagePicker;
- (void)presentCameraImagePicker;
- (void)presentEditImagePickerForImageData:(id)arg1 cropRect:(struct CGRect)arg2 fromViewController:(id)arg3;
- (id)createImagePickerForEditingImageData:(id)arg1 withCropRect:(struct CGRect)arg2;
- (void)presentImagePicker:(id)arg1 withStyle:(long long)arg2 fromViewController:(id)arg3;
- (id)providerItemFromPhotoPickerInfo:(id)arg1;
- (void)presentActionsViewControllerForProviderItem:(id)arg1 atIndexPath:(id)arg2;
- (void)presentDismissConfirmation;
- (void)deleteItemFromRecentsImageStore:(id)arg1;
- (void)saveItemToRecentsImageStore:(id)arg1;

@end
