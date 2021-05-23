/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <UIKit/UIViewController.h>

#import <ContactsUI/Swift-Protocol.h>

@class CNContact, CNPhotoPickerColorVariant, CNPhotoPickerVariantsManager, CNSharingProfileAvatarItemProvider, CNSharingProfileAvatarItemProviderConfiguration, CNSharingProfileLogger, CNSharingProfilePhotoPickerItem, NSArray, NSString, PRMonogramColor, UICollectionView, UICollectionViewFlowLayout, UIImageView;

@protocol AVTAvatarRecord, CNSharingProfilePhotoPickerViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface CNSharingProfilePhotoPickerViewController : UIViewController <Swift>

{
    _Bool _isSmallScreenDevice;
    id <CNSharingProfilePhotoPickerViewControllerDelegate> _delegate;
    CNSharingProfilePhotoPickerItem *_selectedItem;
    CNContact *_contact;
    id <AVTAvatarRecord> _avatarRecord;
    CNSharingProfileLogger *_logger;
    UICollectionViewFlowLayout *_selectorLayout;
    UIImageView *_previewView;
    UICollectionView *_selectorView;
    CNSharingProfileAvatarItemProviderConfiguration *_avatarItemProviderConfiguration;
    CNSharingProfileAvatarItemProvider *_itemProvider;
    NSArray *_items;
    CNPhotoPickerVariantsManager *_variantsManager;
    CNPhotoPickerColorVariant *_animojiBackgroundColor;
    PRMonogramColor *_monogramBackgroundColor;
}

@property (nonatomic) _Bool isSmallScreenDevice;
@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) id <AVTAvatarRecord> avatarRecord;
@property (retain, nonatomic) CNSharingProfileLogger *logger;
@property (retain, nonatomic) UICollectionViewFlowLayout *selectorLayout;
@property (retain, nonatomic) UIImageView *previewView;
@property (retain, nonatomic) UICollectionView *selectorView;
@property (retain, nonatomic) CNSharingProfilePhotoPickerItem *selectedItem;
@property (retain, nonatomic) CNSharingProfileAvatarItemProviderConfiguration *avatarItemProviderConfiguration;
@property (retain, nonatomic) CNSharingProfileAvatarItemProvider *itemProvider;
@property (retain, nonatomic) NSArray *items;
@property (retain, nonatomic) CNPhotoPickerVariantsManager *variantsManager;
@property (retain, nonatomic) CNPhotoPickerColorVariant *animojiBackgroundColor;
@property (retain, nonatomic) PRMonogramColor *monogramBackgroundColor;
@property (weak, nonatomic) id <CNSharingProfilePhotoPickerViewControllerDelegate> delegate;
@property (retain, nonatomic) PRMonogramColor *monogramColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)reloadData;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)setupConstraints;
- (id)initWithContact:(id)arg1 avatarRecord:(id)arg2 avatarItemProviderConfiguration:(id)arg3 logger:(id)arg4;
- (void)updateInteritemSpacing;
- (double)previewEdgeSize;
- (void)reloadItems;
- (id)buildItems;
- (void)updateWithContact:(id)arg1 fromFullPhotoPicker:(_Bool)arg2;
- (void)updatePreviewForSelectedItem;

@end
