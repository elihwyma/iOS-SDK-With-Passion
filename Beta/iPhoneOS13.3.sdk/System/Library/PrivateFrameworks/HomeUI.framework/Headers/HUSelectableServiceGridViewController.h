/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUServiceGridViewController.h>

@class HFMutableSetDiff, HFSetDiff, HUServiceGridItemManager, NSString;

@interface HUSelectableServiceGridViewController : HUServiceGridViewController

{
    _Bool _allowsEmptySelection;
    _Bool _allowsMultipleSelection;
    HUServiceGridItemManager *_serviceGridItemManager;
    HFMutableSetDiff *_mutableSelectedItems;
}

@property (weak, nonatomic) HUServiceGridItemManager *serviceGridItemManager;
@property (retain, nonatomic) HFMutableSetDiff *mutableSelectedItems;
@property (retain, nonatomic) HFSetDiff *selectedItems;
@property (nonatomic) _Bool allowsEmptySelection;
@property (nonatomic) _Bool allowsMultipleSelection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (CDUnknownBlockType)defaultItemProviderCreatorWithOptions:(unsigned long long)arg1;
+ (CDUnknownBlockType)transformationBlockWithOptions:(unsigned long long)arg1;
+ (id)itemServiceTypesToHide;

- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)itemManager:(id)arg1 performUpdateRequest:(id)arg2;
- (void)configureCell:(id)arg1 forItem:(id)arg2;
- (_Bool)presentationCoordinator:(id)arg1 shouldBeginInteractivePresentationWithTouchLocation:(struct CGPoint)arg2;
- (void)didSelectItem:(id)arg1;
- (id)initWithItemManager:(id)arg1;
- (_Bool)serviceGridItemManager:(id)arg1 shouldHideItem:(id)arg2;
- (id)initWithServiceGridItemManager:(id)arg1;
- (_Bool)canSelectItem:(id)arg1 indexPath:(id)arg2;
- (void)didChangeSelection;
- (void)didDeselectItem:(id)arg1;
- (void)addItemToSelection:(id)arg1;
- (void)deleteItemFromSelection:(id)arg1;
- (_Bool)_wantsToggleButtonForSection:(unsigned long long)arg1;
- (void)_updateSelectionState:(_Bool)arg1 forCell:(id)arg2;
- (void)_updateToggleStateForSection:(long long)arg1 headerView:(id)arg2;
- (void)_setSelected:(_Bool)arg1 forItemsInSection:(long long)arg2;
- (void)_deleteItemFromSelection:(id)arg1;
- (void)_addItemToSelection:(id)arg1;
- (void)_addAllServicesInSectionFromButton:(id)arg1;
- (void)_removeAllServicesInSectionFromButton:(id)arg1;

@end
