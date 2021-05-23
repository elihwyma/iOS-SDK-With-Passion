/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <TVMLKit/_TVBgImageLoadingViewController.h>

@class IKHeaderElement, IKViewElement, NSArray, NSString, UICollectionView, VUICollectionFooterView, VUICollectionHeaderView, VUIFavoriteCollectionViewCell, VUISportsFavoritesContainerView;

__attribute__((visibility("hidden")))
@interface VUISportsFavoritesTemplateController : _TVBgImageLoadingViewController

{
    _Bool _requiresRelayout;
    UICollectionView *_collectionView;
    IKViewElement *_templateElement;
    NSArray *_sectionElements;
    IKHeaderElement *_headerElement;
    IKViewElement *_footerElement;
    VUIFavoriteCollectionViewCell *_computationCell;
    VUICollectionHeaderView *_computationHeaderView;
    VUICollectionFooterView *_computationFooterView;
    VUISportsFavoritesContainerView *_containerView;
}

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) IKViewElement *templateElement;
@property (retain, nonatomic) NSArray *sectionElements;
@property (retain, nonatomic) IKHeaderElement *headerElement;
@property (retain, nonatomic) IKViewElement *footerElement;
@property (retain, nonatomic) VUIFavoriteCollectionViewCell *computationCell;
@property (retain, nonatomic) VUICollectionHeaderView *computationHeaderView;
@property (retain, nonatomic) VUICollectionFooterView *computationFooterView;
@property (retain, nonatomic) VUISportsFavoritesContainerView *containerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)didCancel;
- (void)loadView;
- (void)traitCollectionDidChange:(id)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (void)updateWithViewElement:(id)arg1;
- (void)_animateSectionElementsChanges;
- (struct CGSize)_expectedCellSizeForElement:(id)arg1 collectionView:(id)arg2 atIndexPath:(id)arg3;

@end
