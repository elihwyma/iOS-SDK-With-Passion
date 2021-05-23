/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUItemCollectionViewController.h>

@class HFItem, HFItemManager, HUQuickControlPresentationCoordinator, NSMutableDictionary, NSString, UICollectionViewLayout, UIGestureRecognizer, UILongPressGestureRecognizer, UIViewController;

@protocol HUControllableCollectionViewLayout, HUQuickControlPresentationHost, NSCopying;

@interface HUControllableItemCollectionViewController : HUItemCollectionViewController

{
    _Bool _viewAppeared;
    _Bool _suppressCollectionViewUpdatesForReorderCommit;
    unsigned long long _contentColorStyle;
    HUQuickControlPresentationCoordinator *_quickControlPresentationCoordinator;
    UIViewController<HUQuickControlPresentationHost> *_ancestorQuickControlHostAtPresentationTime;
    UILongPressGestureRecognizer *_reorderGestureRecognizer;
    NSMutableDictionary *_actionSetExecutionFuturesKeyedByIdentifier;
    UIGestureRecognizer *_contextualTapGestureRecognizer;
    HFItem<NSCopying> *_selectedContextualMenuItem;
}

@property (retain, nonatomic) HUQuickControlPresentationCoordinator *quickControlPresentationCoordinator;
@property (weak, nonatomic) UIViewController<HUQuickControlPresentationHost> *ancestorQuickControlHostAtPresentationTime;
@property (nonatomic, readonly) UICollectionViewLayout<HUControllableCollectionViewLayout> *collectionViewLayout;
@property (nonatomic) _Bool viewAppeared;
@property (retain, nonatomic) UILongPressGestureRecognizer *reorderGestureRecognizer;
@property (nonatomic) _Bool suppressCollectionViewUpdatesForReorderCommit;
@property (retain, nonatomic) NSMutableDictionary *actionSetExecutionFuturesKeyedByIdentifier;
@property (retain, nonatomic) UIGestureRecognizer *contextualTapGestureRecognizer;
@property (retain, nonatomic) HFItem<NSCopying> *selectedContextualMenuItem;
@property (nonatomic, readonly) unsigned long long contentColorStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) HFItemManager *itemManager;

- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (_Bool)canBecomeFirstResponder;
- (_Bool)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 targetIndexPathForMoveFromItemAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (void)itemManager:(id)arg1 performUpdateRequest:(id)arg2;
- (void)itemManager:(id)arg1 didMoveItem:(id)arg2 fromIndexPath:(id)arg3 toIndexPath:(id)arg4;
- (void)configureCell:(id)arg1 forItem:(id)arg2;
- (id)initWithItemManager:(id)arg1 collectionViewLayout:(id)arg2;
- (id)prepareToPerformToggleActionForItem:(id)arg1 sourceItem:(id)arg2;
- (_Bool)presentationCoordinator:(id)arg1 shouldBeginInteractivePresentationWithTouchLocation:(struct CGPoint)arg2;
- (_Bool)presentationCoordinator:(id)arg1 shouldBeginPresentationWithContext:(id)arg2;
- (_Bool)allowsPresentationWithOnlySettings;
- (id)traitCollectionForPresentationCoordinator:(id)arg1;
- (_Bool)hasDetailsActionForPresentationCoordinator:(id)arg1 item:(id)arg2;
- (void)_updateReorderingGestureRecognizer;
- (void)_handleApplicationWillResignActiveNotification:(id)arg1;
- (void)_updateEditingStateForCell:(id)arg1;
- (_Bool)alwaysAllowReordering;
- (void)_handleReorderGesture:(id)arg1;
- (void)_reorderGestureDidBegin:(id)arg1;
- (void)_reorderGestureDidChange:(id)arg1;
- (void)_reorderGestureDidEnd:(id)arg1 finished:(_Bool)arg2;
- (_Bool)canReorderItemAtIndexPath:(id)arg1;
- (id)_childItemsForItem:(id)arg1;
- (void)setExecutionFuture:(id)arg1 forActionSet:(id)arg2;
- (void)_logUserMetricsAfterTapOfItem:(id)arg1;
- (id)reorderableHomeKitItemListForSection:(long long)arg1;
- (void)setReorderableHomeKitItemList:(id)arg1 forSection:(long long)arg2;
- (void)_itemSetDidChange;
- (id)_itemForServiceControlPresentationAtPoint:(struct CGPoint)arg1;
- (id)quickControlPresentationContextForItem:(id)arg1 atIndexPath:(id)arg2;
- (_Bool)_hasTapActionForItem:(id)arg1;
- (_Bool)_isMultiServiceAccessory:(id)arg1;
- (id)_performTapActionForItem:(id)arg1;
- (void)childViewController:(id)arg1 willBeginQuickControlsPresentation:(id)arg2;
- (void)childViewController:(id)arg1 didEndQuickControlsPresentation:(id)arg2;
- (id)_ancestorQuickControlPresentationHost;
- (id)customContextualMenuItemsForItem:(id)arg1;
- (void)_showQuickControlsForSelectedMenuItem;
- (void)_showSettingsForSelectedMenuItem;
- (id)presentationCoordinator:(id)arg1 contextForPresentationAtPoint:(struct CGPoint)arg2;
- (void)presentationCoordinator:(id)arg1 applyOverrideAttributes:(id)arg2 toItem:(id)arg3;
- (void)presentationCoordinator:(id)arg1 clearOverrideAttributesForItem:(id)arg2;
- (void)presentationCoordinator:(id)arg1 didRecognizeTapForItem:(id)arg2;
- (void)presentationCoordinator:(id)arg1 willBeginPresentationWithContext:(id)arg2;
- (void)presentationCoordinator:(id)arg1 didEndPresentationWithContext:(id)arg2;
- (void)presentationCoordinatorWillBeginDismissalTransition:(id)arg1;
- (void)presentationCoordinatorDidCancelDismissalTransition:(id)arg1;
- (void)setContentColorStyle:(unsigned long long)arg1;
- (id)_visibleCellForItem:(id)arg1;
- (void)_handleContextualGesture:(id)arg1;

@end
