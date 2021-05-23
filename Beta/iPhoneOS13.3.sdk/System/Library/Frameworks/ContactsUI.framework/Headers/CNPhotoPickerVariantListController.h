/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <UIKit/UIViewController.h>

#import <ContactsUI/Swift-Protocol.h>

@class CNPhotoPickerPreviewView, CNPhotoPickerProviderItem, CNPhotoPickerVariantsManager, NSArray, NSString, UICollectionView, UIImageView, UIView;

@protocol CNPhotoPickerVariantListControllerDelegate;

__attribute__((visibility("hidden")))
@interface CNPhotoPickerVariantListController : UIViewController <Swift>

{
    _Bool _wantsScrollingHeader;
    _Bool _showSelection;
    _Bool _showPreview;
    _Bool _shouldShowCaptions;
    id <CNPhotoPickerVariantListControllerDelegate> _delegate;
    CNPhotoPickerProviderItem *_originalItem;
    UICollectionView *_collectionView;
    UIView *_sectionHeaderView;
    CDUnknownBlockType _numberOfItemsPerRowProvider;
    unsigned long long _cellStyle;
    NSString *_rightBarButtonTitle;
    UIView *_headerView;
    UIImageView *_previewImageView;
    CNPhotoPickerPreviewView *_posePreview;
    NSString *_selectedVariantIdentifier;
    NSArray *_providerItems;
    CNPhotoPickerVariantsManager *_variantsManager;
}

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) UIImageView *previewImageView;
@property (retain, nonatomic) CNPhotoPickerPreviewView *posePreview;
@property (retain, nonatomic) NSString *selectedVariantIdentifier;
@property (retain, nonatomic) NSArray *providerItems;
@property (retain, nonatomic) CNPhotoPickerVariantsManager *variantsManager;
@property (nonatomic) _Bool shouldShowCaptions;
@property (weak, nonatomic) id <CNPhotoPickerVariantListControllerDelegate> delegate;
@property (nonatomic, readonly) CNPhotoPickerProviderItem *originalItem;
@property (nonatomic, readonly) NSString *variantsDisplayTitle;
@property (retain, nonatomic) UIView *sectionHeaderView;
@property (copy, nonatomic) CDUnknownBlockType numberOfItemsPerRowProvider;
@property (nonatomic) _Bool wantsScrollingHeader;
@property (nonatomic) _Bool showSelection;
@property (nonatomic) _Bool showPreview;
@property (nonatomic) unsigned long long cellStyle;
@property (nonatomic) NSString *rightBarButtonTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (long long)topMarginForBounds:(struct CGRect)arg1 shouldShowCaptions:(_Bool)arg2;
+ (struct CGRect)frameForHeaderInBounds:(struct CGRect)arg1;

- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)scrollView;
- (void)cancel:(id)arg1;
- (void)providerItemDidUpdate:(id)arg1;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (void)updatePreviewWithItem:(id)arg1;
- (id)initWithVariantsManager:(id)arg1 originalItem:(id)arg2;
- (id)initWithVariantsManager:(id)arg1 originalItem:(id)arg2 selectedVariantIdentifier:(id)arg3;
- (void)buildHeader;
- (void)buildCollectionView;
- (void)updateForNewOriginalItem:(id)arg1;
- (void)updateFlowLayoutItemSize;
- (void)generateProviderItems;
- (void)didFinishSelectingVariant;

@end
