/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIViewController.h>

#import <VideosUI/Swift-Protocol.h>

@class NSString, VUICollectionView, VUILibraryMenuItemViewCell, VUIMenuDataSource, VUIMenuSectionHeaderCollectionViewCell;

@protocol VUICategoryMenuViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface VUICategoryMenuViewController : UIViewController <Swift>

{
    _Bool _shouldShowBackButton;
    id <VUICategoryMenuViewControllerDelegate> _delegate;
    VUIMenuDataSource *_categories;
    VUICollectionView *_menuCollectionView;
    VUILibraryMenuItemViewCell *_sizingCell;
    VUIMenuSectionHeaderCollectionViewCell *_sectionHeaderSizingCell;
}

@property (retain, nonatomic) VUICollectionView *menuCollectionView;
@property (retain, nonatomic) VUILibraryMenuItemViewCell *sizingCell;
@property (retain, nonatomic) VUIMenuSectionHeaderCollectionViewCell *sectionHeaderSizingCell;
@property (weak, nonatomic) id <VUICategoryMenuViewControllerDelegate> delegate;
@property (nonatomic) _Bool shouldShowBackButton;
@property (retain, nonatomic) VUIMenuDataSource *categories;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (id)initWithCategories:(id)arg1;
- (void)_updateNavigationBarPadding;
- (void)_updateCollectionLayout;
- (void)_backSelected:(id)arg1;
- (void)updateWithCategories:(id)arg1 updateEntitiesIfNecessaryBlock:(CDUnknownBlockType)arg2;

@end
