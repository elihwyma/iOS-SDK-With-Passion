/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUItemTableViewController.h>

@class HFItem, HFNamingComponents, HMHome, HUAccessorySettingsItemModuleController, HUAssociatedSceneAndTriggerModuleController, HUCameraSettingsModuleController, HUChildServiceItemModuleController, HUControlPanelController, HUNameItemModuleController, HUQuickControlSummaryNavigationBarTitleView, HUServiceDetailsItemManager, HUServiceDetailsTextViewDelegate, HUSoftwareUpdateItemModuleController, HUTelevisionSettingsItemModuleController, NAFuture, NSHashTable, NSString, UIButton, UILongPressGestureRecognizer;

@protocol HFServiceLikeItem, HUPresentationDelegate;

@interface HUServiceDetailsViewController : HUItemTableViewController

{
    _Bool _requiresPresentingViewControllerDismissal;
    _Bool _isMultiServiceAccessory;
    _Bool _isItemGroup;
    _Bool _supportsCustomIconEditing;
    _Bool _shouldTrackProgrammableSwitchActivations;
    _Bool _isPresentingRoomsList;
    id <HUPresentationDelegate> _presentationDelegate;
    HUNameItemModuleController *_nameItemModuleController;
    HUAccessorySettingsItemModuleController *_accessorySettingsItemModuleController;
    HUSoftwareUpdateItemModuleController *_softwareUpdateItemModuleController;
    HUChildServiceItemModuleController *_valveEditorItemModuleController;
    HUChildServiceItemModuleController *_accessoryServicesEditorItemModuleController;
    HUAssociatedSceneAndTriggerModuleController *_sceneAndTriggerModuleController;
    HUTelevisionSettingsItemModuleController *_televisionSettingsItemModuleController;
    HUChildServiceItemModuleController *_inputSourceItemModuleController;
    HUCameraSettingsModuleController *_cameraSettingsModuleController;
    HUServiceDetailsItemManager *_detailsItemManager;
    HUControlPanelController *_controlPanelController;
    NSHashTable *_expandedControlPanelItems;
    HMHome *_home;
    UILongPressGestureRecognizer *_longPressRecognizer;
    HUServiceDetailsTextViewDelegate *_textViewDelegate;
    HFNamingComponents *_namingComponent;
    HUQuickControlSummaryNavigationBarTitleView *_navigationBarTitleView;
    UIButton *_closeButton;
    NAFuture *_accountFuture;
}

@property (retain, nonatomic) HUNameItemModuleController *nameItemModuleController;
@property (retain, nonatomic) HUAccessorySettingsItemModuleController *accessorySettingsItemModuleController;
@property (retain, nonatomic) HUSoftwareUpdateItemModuleController *softwareUpdateItemModuleController;
@property (retain, nonatomic) HUChildServiceItemModuleController *valveEditorItemModuleController;
@property (retain, nonatomic) HUChildServiceItemModuleController *accessoryServicesEditorItemModuleController;
@property (retain, nonatomic) HUAssociatedSceneAndTriggerModuleController *sceneAndTriggerModuleController;
@property (retain, nonatomic) HUTelevisionSettingsItemModuleController *televisionSettingsItemModuleController;
@property (retain, nonatomic) HUChildServiceItemModuleController *inputSourceItemModuleController;
@property (retain, nonatomic) HUCameraSettingsModuleController *cameraSettingsModuleController;
@property (weak, nonatomic) HUServiceDetailsItemManager *detailsItemManager;
@property (nonatomic, readonly) HUControlPanelController *controlPanelController;
@property (nonatomic, readonly) NSHashTable *expandedControlPanelItems;
@property (retain, nonatomic) HMHome *home;
@property (nonatomic, readonly) HFItem<HFServiceLikeItem> *item;
@property (nonatomic, readonly) _Bool isMultiServiceAccessory;
@property (nonatomic, readonly) _Bool isItemGroup;
@property (nonatomic, readonly) _Bool supportsCustomIconEditing;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressRecognizer;
@property (retain, nonatomic) HUServiceDetailsTextViewDelegate *textViewDelegate;
@property (retain, nonatomic) HFNamingComponents *namingComponent;
@property (retain, nonatomic) HUQuickControlSummaryNavigationBarTitleView *navigationBarTitleView;
@property (nonatomic) _Bool shouldTrackProgrammableSwitchActivations;
@property (nonatomic) _Bool isPresentingRoomsList;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) NAFuture *accountFuture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <HUPresentationDelegate> presentationDelegate;
@property (nonatomic) _Bool requiresPresentingViewControllerDismissal;

+ (id)acceptableItemClasses;

- (void)dealloc;
- (void)commitChanges;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)_longPressRecognized:(id)arg1;
- (void)home:(id)arg1 didRemoveMediaSystem:(id)arg2;
- (void)home:(id)arg1 didRemoveAccessory:(id)arg2;
- (void)home:(id)arg1 didRemoveServiceGroup:(id)arg2;
- (void)accessoryDidUpdateServices:(id)arg1;
- (void)accessory:(id)arg1 service:(id)arg2 didUpdateValueForCharacteristic:(id)arg3;
- (id)_removeItem;
- (void)itemManager:(id)arg1 didUpdateResultsForItem:(id)arg2 atIndexPath:(id)arg3;
- (void)itemManager:(id)arg1 performUpdateRequest:(id)arg2;
- (_Bool)triggerEditor:(id)arg1 shouldCommitTriggerBuilder:(id)arg2;
- (void)triggerEditor:(id)arg1 didFinishWithTriggerBuilder:(id)arg2;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (void)textDidChange:(id)arg1 forTextField:(id)arg2 item:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1 item:(id)arg2;
- (id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(_Bool)arg4;
- (void)switchCell:(id)arg1 didTurnOn:(_Bool)arg2;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (id)initWithServiceLikeItem:(id)arg1;
- (id)finishPresentation:(id)arg1 animated:(_Bool)arg2;
- (id)buildItemModuleControllerForModule:(id)arg1;
- (_Bool)hasDetailsActionForContainedServiceGridViewController:(id)arg1 item:(id)arg2;
- (id)detailsViewControllerForContainedServiceGridViewController:(id)arg1 item:(id)arg2;
- (void)serviceGroupEditor:(id)arg1 didCreateServiceGroup:(id)arg2;
- (_Bool)shouldHideSeparatorsForCell:(id)arg1 indexPath:(id)arg2;
- (_Bool)shouldHideHeaderAboveSection:(long long)arg1;
- (_Bool)shouldHideFooterBelowSection:(long long)arg1;
- (_Bool)automaticallyUpdatesViewControllerTitle;
- (id)itemModuleControllers;
- (unsigned long long)automaticDisablingReasonsForItem:(id)arg1;
- (void)dismissPrivacyController;
- (void)pickerViewCell:(id)arg1 didSelectValueAtIndex:(long long)arg2;
- (long long)numberOfValuesForPickerViewCell:(id)arg1;
- (id)pickerViewCell:(id)arg1 titleForValueAtIndex:(long long)arg2;
- (_Bool)itemManager:(id)arg1 shouldShowControlPanelItem:(id)arg2;
- (_Bool)itemManager:(id)arg1 shouldShowSectionTitleForControlPanelItem:(id)arg2;
- (void)checkForAccessoriesNeedingReprovisioning;
- (void)_closeButtonPressed:(id)arg1;
- (void)_updateControlStatusText;
- (void)_updateIconDescriptorAnimated:(_Bool)arg1;
- (void)_executeSilentSoftwareUpdateCheck;
- (id)_commitBuilder;
- (id)_recoverItemBuilder:(id)arg1 fromError:(id)arg2;
- (id)_primaryStatusTextForLatestResults:(id)arg1 showingSecondaryStatus:(_Bool)arg2;
- (id)_secondaryStatusTextForLatestResults:(id)arg1;
- (void)_setupProgrammableSwitchCell:(id)arg1 forItem:(id)arg2;
- (void)didSelectHeaderWarningAction:(id)arg1;
- (_Bool)_shouldShowDetailDisclosureForItem:(id)arg1;
- (void)_updateCheckedStateForAssociatedServiceTypeCell:(id)arg1 item:(id)arg2;
- (_Bool)_allowRowSelectionForItem:(id)arg1;
- (void)addRoomButtonPressed:(id)arg1;
- (void)_presentGroupPicker;
- (void)_separateOrUnifyTile;
- (void)_presentContainedItems;
- (void)_presentRemoveConfirmation:(id)arg1;
- (void)_presentResetHomePodConfirmation:(id)arg1;
- (void)_restartGroupedHomePodAccessory;
- (void)_updateAssociatedServiceTypeCells;
- (void)_presentTriggerEditorForProgrammableSwitchEventOptionItem:(id)arg1;
- (void)didSelectHomeAssistantDeviceSplitAccountAction:(unsigned long long)arg1;
- (void)_didSelectRoomItem:(id)arg1;
- (id)_characteristicsAffectedByControlItem:(id)arg1;
- (id)_magicallyUpdateNavigationStackForNewRootItem:(id)arg1 topViewController:(id)arg2;
- (_Bool)_shouldShowAddButtonForOptionItem:(id)arg1;
- (void)_restartHomePod;
- (_Bool)_shouldPresentRemoveRouterConfirmation;
- (void)_presentRemoveRouterConfirmation;
- (void)dismissTriggerActionEditorViewController:(id)arg1;
- (void)_notifyOfHomePodPairingIfNecessary;
- (void)mediaSystemEditor:(id)arg1 didCreateMediaSystem:(id)arg2;
- (void)_didRemoveHomeKitObject:(id)arg1;
- (void)_setDismissedHomePodHasNonMemberMediaAccountWarning:(_Bool)arg1;
- (void)controlPanelController:(id)arg1 willBeginPossibleWritesForControlItem:(id)arg2;
- (void)controlPanelController:(id)arg1 didEndPossibleWritesForControlItem:(id)arg2;
- (id)itemManager:(id)arg1 sectionTitleForControlPanelItem:(id)arg2 forServiceItem:(id)arg3;
- (id)itemManager:(id)arg1 sectionFooterForControlPanelItem:(id)arg2 forServiceItem:(id)arg3;
- (void)editRoomViewControllerDidFinish:(id)arg1 withNewRoom:(id)arg2;
- (id)softwareUpdateModuleController:(id)arg1 presentViewController:(id)arg2;
- (id)softwareUpdateModuleController:(id)arg1 dismissViewController:(id)arg2;
- (id)softwareUpdateModuleController:(id)arg1 navigateToViewController:(id)arg2;
- (void)mediaSystemEditor:(id)arg1 didAbortMediaSystemCreationDueToAccessoryNeedingUpdate:(id)arg2;
- (id)detailsViewControllerForContainedMediaAccessoryGridViewController:(id)arg1 item:(id)arg2;
- (id)childServiceEditorModuleController:(id)arg1 didSelectItem:(id)arg2;
- (_Bool)_isCameraItem;
- (_Bool)_allowRowHighlightForItem:(id)arg1;

@end
