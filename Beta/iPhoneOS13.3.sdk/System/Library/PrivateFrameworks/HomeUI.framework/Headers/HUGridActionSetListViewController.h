/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUControllableItemCollectionViewController.h>

#import <HomeUI/Swift-Protocol.h>

@class HFWallpaperSlice, HUGridActionSetItemManager, HUGridLayoutOptions, HUWallpaperView, NSString, UILabel;

@protocol HUGridActionSetListViewControllerItemUpdateDelegate;

@interface HUGridActionSetListViewController : HUControllableItemCollectionViewController <Swift>

{
    id <HUGridActionSetListViewControllerItemUpdateDelegate> _itemUpdateDelegate;
    UILabel *_titleLabel;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (nonatomic, readonly) HUGridActionSetItemManager *actionSetItemManager;
@property (retain, nonatomic) HUWallpaperView *wallpaperView;
@property (retain, nonatomic) HFWallpaperSlice *blurredWallpaperSlice;
@property (retain, nonatomic) HFWallpaperSlice *darkModeBlurredWallpaperSlice;
@property (copy, nonatomic) HUGridLayoutOptions *layoutOptions;
@property (weak, nonatomic) id <HUGridActionSetListViewControllerItemUpdateDelegate> itemUpdateDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (unsigned long long)updateMode;
+ (double)requiredHeightWithLayoutOptions:(id)arg1 numberOfItems:(unsigned long long)arg2;

- (id)init;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)viewDidLoad;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)itemManager:(id)arg1 futureToUpdateItems:(id)arg2 itemUpdateOptions:(id)arg3;
- (void)itemManager:(id)arg1 didRemoveItem:(id)arg2 atIndexPath:(id)arg3;
- (void)itemManager:(id)arg1 didInsertItem:(id)arg2 atIndexPath:(id)arg3;
- (void)configureCell:(id)arg1 forItem:(id)arg2;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (_Bool)hasDetailsActionForPresentationCoordinator:(id)arg1 item:(id)arg2;
- (id)detailsViewControllerForPresentationCoordinator:(id)arg1 item:(id)arg2;
- (_Bool)canReorderItemAtIndexPath:(id)arg1;
- (id)reorderableHomeKitItemListForSection:(long long)arg1;
- (void)setReorderableHomeKitItemList:(id)arg1 forSection:(long long)arg2;
- (id)initWithRoom:(id)arg1 onlyShowFavorites:(_Bool)arg2;
- (long long)_scrollDirectionForLayoutOptions:(id)arg1;
- (void)_internalSetLayoutOptions:(id)arg1;
- (void)_updateLayoutScrollDirectionIfNeeded;
- (id)_detailsViewControllerForActionSetItem:(id)arg1;

@end
