/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUSelectableServiceGridViewController.h>

@class HFItem, HUAccessorySceneListContentItemManager, NSSet, NSString;

@protocol HFServiceLikeItem, HUAccessorySceneListContentViewControllerDelegate;

@interface HUAccessorySceneListContentViewController : HUSelectableServiceGridViewController

{
    _Bool _includeTopMargin;
    _Bool _persistAddedSuggestions;
    unsigned long long _contentSource;
    unsigned long long _selectionType;
    HFItem<HFServiceLikeItem> *_serviceLikeItem;
}

@property (nonatomic, readonly) HUAccessorySceneListContentItemManager *itemManager;
@property (nonatomic, readonly) unsigned long long contentSource;
@property (nonatomic, readonly) unsigned long long selectionType;
@property (copy, nonatomic, readonly) HFItem<HFServiceLikeItem> *serviceLikeItem;
@property (weak, nonatomic) id <HUAccessorySceneListContentViewControllerDelegate> delegate;
@property (nonatomic) _Bool includeTopMargin;
@property (nonatomic) _Bool persistAddedSuggestions;
@property (copy, nonatomic, readonly) NSSet *selectedActionSetBuilders;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)computeNumberOfItemsToDisplayForContentSource:(unsigned long long)arg1 serviceLikeItem:(id)arg2 home:(id)arg3;

- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (unsigned long long)itemTypeForItem:(id)arg1;
- (void)configureCell:(id)arg1 forItem:(id)arg2;
- (_Bool)presentationCoordinator:(id)arg1 shouldBeginInteractivePresentationWithTouchLocation:(struct CGPoint)arg2;
- (id)layoutOptionsForSection:(long long)arg1;
- (_Bool)canSelectItem:(id)arg1 indexPath:(id)arg2;
- (void)didChangeSelection;
- (id)initWithServiceLikeItem:(id)arg1 contentSource:(unsigned long long)arg2 selectionType:(unsigned long long)arg3;
- (id)commitChangesToSelectedActionBuilders;

@end
