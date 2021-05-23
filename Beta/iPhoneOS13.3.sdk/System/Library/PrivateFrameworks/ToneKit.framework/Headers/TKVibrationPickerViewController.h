/*
 Image: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
 */

#import <UIKit/UITableViewController.h>

@class NSArray, NSIndexPath, NSMutableDictionary, NSString, NSTimer, TKVibratorController, TLVibrationManager;

@protocol TKVibrationPickerStyleProvider, TKVibrationPickerViewControllerDelegate, TKVibrationPickerViewControllerDismissalDelegate;

@interface TKVibrationPickerViewController : UITableViewController

{
    long long _alertType;
    _Bool _showsDefault;
    _Bool _showsUserGenerated;
    _Bool _showsNone;
    _Bool _showsNothingSelected;
    _Bool _showsEditButtonAtRightSideOfCurrentNavigationController;
    _Bool _allowsDeletingDefaultVibration;
    NSString *_noneString;
    _Bool _canEnterEditingMode;
    _Bool _viewHasAppearedAtLeastOnce;
    _Bool _isCallingParentViewController;
    _Bool _swipeToDeleteMode;
    _Bool _skipNextUserGeneratedVibrationsDidChangeNotification;
    _Bool _defaultVibrationIdentifierWasExplicitlySet;
    _Bool _showsSynchronized;
    NSString *_synchronizedVibrationIdentifier;
    TLVibrationManager *_vibrationManager;
    TKVibratorController *_vibratorController;
    NSTimer *_vibrationShouldStopTimer;
    NSArray *_sortedVibrationIdentifiers;
    NSArray *_sortedUserGeneratedVibrationIdentifiers;
    NSIndexPath *_indexPathOfCellBeingDeleted;
    NSMutableDictionary *_sectionHeaderViews;
    _Bool _showsEditButtonInNavigationBar;
    NSString *_topic;
    id <TKVibrationPickerViewControllerDelegate> _delegate;
    NSString *_defaultVibrationIdentifier;
    NSString *_correspondingToneIdentifier;
    NSString *_selectedVibrationIdentifier;
    id <TKVibrationPickerStyleProvider> _styleProvider;
    id <TKVibrationPickerViewControllerDelegate> __additionalDelegate;
    id <TKVibrationPickerViewControllerDismissalDelegate> __dismissalDelegate;
}

@property (copy, nonatomic) NSString *accountIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic, setter=_setAdditionalDelegate:) id <TKVibrationPickerViewControllerDelegate> _additionalDelegate;
@property (weak, nonatomic, setter=_setDismissalDelegate:) id <TKVibrationPickerViewControllerDismissalDelegate> _dismissalDelegate;
@property (nonatomic, readonly) long long alertType;
@property (copy, nonatomic) NSString *topic;
@property (weak, nonatomic) id <TKVibrationPickerViewControllerDelegate> delegate;
@property (nonatomic) _Bool showsDefault;
@property (copy, nonatomic) NSString *defaultVibrationIdentifier;
@property (copy, nonatomic) NSString *correspondingToneIdentifier;
@property (nonatomic) _Bool showsUserGenerated;
@property (nonatomic) _Bool showsNone;
@property (copy, nonatomic) NSString *noneString;
@property (nonatomic) _Bool showsNothingSelected;
@property (retain, nonatomic) NSString *selectedVibrationIdentifier;
@property (nonatomic) _Bool allowsDeletingDefaultVibration;
@property (nonatomic) _Bool showsEditButtonInNavigationBar;
@property (nonatomic, readonly) _Bool canEnterEditingMode;
@property (retain, nonatomic) id <TKVibrationPickerStyleProvider> styleProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithStyle:(long long)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (id)_navigationItem;
- (void)applicationWillSuspend;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)arg1;
- (void)_handleError:(id)arg1;
- (_Bool)canBeShownFromSuspendedState;
- (id)initWithAlertType:(long long)arg1;
- (void)_handleUserGeneratedVibrationsDidChangeNotification;
- (void)vibrationRecorderViewControllerWasDismissedWithoutSavingRecordedVibrationPattern:(id)arg1;
- (void)vibrationRecorderViewController:(id)arg1 didFinishRecordingVibrationPattern:(id)arg2 name:(id)arg3;
- (void)_stopVibrating;
- (void)_updateStyleOfTableView:(id)arg1 forStyleProvider:(id)arg2;
- (id)_customHeaderViewForHeaderInSection:(long long)arg1;
- (void)_updateVisibilityOfSynchronizedGroup;
- (long long)_sectionForDefaultGroup;
- (void)_updateSectionVisibilityFlagToValue:(_Bool)arg1 usingBlock:(CDUnknownBlockType)arg2 sectionIndexGetter:(CDUnknownBlockType)arg3;
- (id)_sanitizedDefaultVibrationIdentifier;
- (id)_indexPathForVibrationWithIdentifier:(id)arg1;
- (long long)_sectionForUserGeneratedGroup;
- (long long)_sectionForNoneGroup;
- (void)_updateCheckedStateOfAllVisibleCells;
- (void)_updateEditButtonItem;
- (id)_sortedUserGeneratedVibrationIdentifiers;
- (void)_updateEditButtonItemWithAnimation:(_Bool)arg1;
- (id)_selectedVibrationIndexPath;
- (id)_sortedArrayWithVibrationIdentifiers:(id)arg1 allowsDuplicateVibrationNames:(_Bool)arg2;
- (long long)_sectionForSynchronizedGroup;
- (long long)_sectionForSystemGroup;
- (id)_sortedVibrationIdentifiers;
- (CDStruct_3d581f42)_cellAccessoriesDescriptorForRowAtIndexPath:(id)arg1;
- (id)_sanitizedCorrespondingToneIdentifier;
- (id)_localizationIdentifierForHeaderInSection:(long long)arg1;
- (_Bool)_showsOnlyEditableSections;
- (void)_updateSelectionStyleForCell:(id)arg1 indexPath:(id)arg2;
- (id)_identifierOfVibrationAtIndexPath:(id)arg1;
- (void)_processCurrentVibrationSelection;
- (id)_sanitizeVibrationIdentifierForPlayback:(id)arg1;
- (void)_startVibratingWithVibrationIdentifier:(id)arg1;
- (id)_adjustedNameForVibrationWithDesiredName:(id)arg1 vibrationIdentifier:(id)arg2;
- (void)vibrationPickerTableViewCell:(id)arg1 endedEditingWithText:(id)arg2;
- (void)_presentVibrationRecorderViewController;

@end
