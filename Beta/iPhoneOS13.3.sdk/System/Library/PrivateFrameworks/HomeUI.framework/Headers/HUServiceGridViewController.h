/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUControllableItemCollectionViewController.h>

@class HUGridLayoutOptions, NSString;

@protocol HUServiceGridViewControllerDelegate;

@interface HUServiceGridViewController : HUControllableItemCollectionViewController

{
    _Bool _shouldShowLoadingState;
    unsigned long long _contentMargins;
    long long _scrollDirection;
    id <HUServiceGridViewControllerDelegate> _delegate;
}

@property (retain, nonatomic) HUGridLayoutOptions *layoutOptions;
@property (nonatomic) unsigned long long contentMargins;
@property (nonatomic) long long scrollDirection;
@property (nonatomic) _Bool shouldShowLoadingState;
@property (weak, nonatomic) id <HUServiceGridViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (unsigned long long)itemTypeForItem:(id)arg1;
- (void)itemManager:(id)arg1 performUpdateRequest:(id)arg2;
- (void)configureCell:(id)arg1 forItem:(id)arg2;
- (id)initWithItemManager:(id)arg1 collectionViewLayout:(id)arg2;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (id)initWithItemManager:(id)arg1;
- (id)layoutOptionsForSection:(long long)arg1;
- (id)_performTapActionForItem:(id)arg1;
- (void)layoutOptionsDidChange;
- (id)_defaultLayoutOptionsForViewSize:(struct CGSize)arg1;
- (struct CGSize)preferredContentSizeForCollectionViewContentSize:(struct CGSize)arg1;
- (void)_layoutSectionHeaders;

@end
