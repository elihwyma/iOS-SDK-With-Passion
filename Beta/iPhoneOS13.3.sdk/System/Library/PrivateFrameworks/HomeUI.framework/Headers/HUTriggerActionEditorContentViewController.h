/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUSelectableServiceGridViewController.h>

@class HFTriggerBuilder, HUTriggerActionFlow, NSString, UINavigationItem;

@protocol HUTriggerEditorDelegate;

@interface HUTriggerActionEditorContentViewController : HUSelectableServiceGridViewController

{
    HFTriggerBuilder *_triggerBuilder;
    HUTriggerActionFlow *_flow;
    UINavigationItem *_effectiveNavigationItem;
    unsigned long long _forceDisableReasonsForSecureCharacteristicControl;
}

@property (retain, nonatomic) HFTriggerBuilder *triggerBuilder;
@property (retain, nonatomic) HUTriggerActionFlow *flow;
@property (nonatomic) unsigned long long forceDisableReasonsForSecureCharacteristicControl;
@property (nonatomic, readonly) UINavigationItem *effectiveNavigationItem;
@property (weak, nonatomic) id <HUTriggerEditorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)_cancel:(id)arg1;
- (void)_next:(id)arg1;
- (void)itemManager:(id)arg1 didUpdateResultsForSourceItem:(id)arg2;
- (void)itemManager:(id)arg1 performUpdateRequest:(id)arg2;
- (void)configureCell:(id)arg1 forItem:(id)arg2;
- (id)layoutOptionsForSection:(long long)arg1;
- (_Bool)serviceGridItemManager:(id)arg1 shouldHideItem:(id)arg2;
- (void)_validateDoneButton;
- (id)initWithServiceGridItemManager:(id)arg1;
- (_Bool)_canSelectMediaAccessoryItem:(id)arg1;
- (void)_presentUnsupportedAlertWithTitle:(id)arg1 message:(id)arg2;
- (_Bool)canSelectItem:(id)arg1 indexPath:(id)arg2;
- (void)didChangeSelection;
- (id)initWithTriggerBuilder:(id)arg1 flow:(id)arg2 effectiveNavigationItem:(id)arg3 delegate:(id)arg4;
- (id)triggerBuilderFutureWithLatestUIChanges;
- (void)goToSummaryScreen;
- (void)_setUpNavButtons;
- (void)_updateSelectedServicesAndActionSets;
- (id)_triggerBuilderFuture;
- (void)_goToSummaryScreen:(id)arg1;
- (unsigned long long)_triggerForceDisableReasonsForActionItem:(id)arg1;
- (void)_popAlertWithLocalizedTitle:(id)arg1 localizedMessage:(id)arg2 actions:(id)arg3;
- (id)_updateTriggerBuilderActionSets;
- (id)_updateTriggerBuilderAnonymousActions;
- (void)_removeDeletedActionSetsItems:(id)arg1 fromTriggerBuilder:(id)arg2;
- (void)_addActionSetItems:(id)arg1 toTriggerBuilder:(id)arg2 inHome:(id)arg3;
- (void)_removeDeletedServiceItems:(id)arg1 fromTriggerBuilder:(id)arg2;
- (void)_updateOrRemoveDeletedMediaItems:(id)arg1 fromTriggerBuilder:(id)arg2;

@end
