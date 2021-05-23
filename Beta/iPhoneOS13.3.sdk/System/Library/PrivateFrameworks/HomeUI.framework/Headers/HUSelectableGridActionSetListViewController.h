/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUGridActionSetListViewController.h>

@class HFMutableSetDiff;

@protocol HUSelectableGridActionSetListViewControllerDelegate;

@interface HUSelectableGridActionSetListViewController : HUGridActionSetListViewController

{
    id <HUSelectableGridActionSetListViewControllerDelegate> _delegate;
    HFMutableSetDiff *_mutableSelectedActionSets;
}

@property (retain, nonatomic) HFMutableSetDiff *mutableSelectedActionSets;
@property (weak, nonatomic) id <HUSelectableGridActionSetListViewControllerDelegate> delegate;

- (id)init;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)configureCell:(id)arg1 forItem:(id)arg2;
- (_Bool)presentationCoordinator:(id)arg1 shouldBeginInteractivePresentationWithTouchLocation:(struct CGPoint)arg2;
- (id)initWithRoom:(id)arg1 selectedActionSets:(id)arg2;
- (void)_selectedItemStateChanged:(id)arg1 isSelected:(_Bool)arg2 accessoryViewCell:(id)arg3;
- (void)_updateSelectionState:(_Bool)arg1 forCell:(id)arg2;
- (void)selectedActionSetStateChanged:(id)arg1 isSelected:(_Bool)arg2;

@end
