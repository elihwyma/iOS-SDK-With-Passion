/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <TVMLKit/_TVBgImageLoadingViewController.h>

@class IKHeaderElement, IKSectionElement, IKViewElement, NSString, UICollectionView, VUICollectionFooterView, VUICollectionHeaderView, VUIListLockupCollectionViewCell, VUIOfferListContainerView;

__attribute__((visibility("hidden")))
@interface VUIOfferListTemplateController : _TVBgImageLoadingViewController

{
    _Bool _requiresRelayout;
    UICollectionView *_collectionView;
    IKSectionElement *_sectionElement;
    IKHeaderElement *_headerElement;
    IKViewElement *_footerElement;
    VUIListLockupCollectionViewCell *_computationCell;
    VUICollectionHeaderView *_computationHeaderView;
    VUICollectionFooterView *_computationFooterView;
    VUIOfferListContainerView *_containerView;
}

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) IKSectionElement *sectionElement;
@property (retain, nonatomic) IKHeaderElement *headerElement;
@property (retain, nonatomic) IKViewElement *footerElement;
@property (retain, nonatomic) VUIListLockupCollectionViewCell *computationCell;
@property (retain, nonatomic) VUICollectionHeaderView *computationHeaderView;
@property (retain, nonatomic) VUICollectionFooterView *computationFooterView;
@property (retain, nonatomic) VUIOfferListContainerView *containerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)didCancel;
- (void)loadView;
- (void)traitCollectionDidChange:(id)arg1;
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

@end
