/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <Preferences/PSListController.h>

@class NSArray, NSObject, NSString, PSSpecifier, STAllowance, UIColor;

@protocol STAllowanceDetailListControllerDelegate, STRootViewModelCoordinator;

__attribute__((visibility("hidden")))
@interface STAllowanceDetailListController : PSListController

{
    _Bool _isSetupController;
    _Bool _useBackButton;
    _Bool _creatingNewAllowance;
    _Bool _didDeleteAllowance;
    id <STAllowanceDetailListControllerDelegate> _delegate;
    STAllowance *_allowance;
    NSObject<STRootViewModelCoordinator> *_coordinator;
    PSSpecifier *_timeGroupSpecifier;
    PSSpecifier *_timeSpecifier;
    PSSpecifier *_timePickerSpecifier;
    PSSpecifier *_customizeDaysSpecifier;
    PSSpecifier *_selectedTimeSpecifier;
    NSArray *_budgetedItemSpecifiers;
    UIColor *_defaultTimeCellDetailTextColor;
}

@property (retain, nonatomic) PSSpecifier *timeGroupSpecifier;
@property (retain, nonatomic) PSSpecifier *timeSpecifier;
@property (retain, nonatomic) PSSpecifier *timePickerSpecifier;
@property (retain, nonatomic) PSSpecifier *customizeDaysSpecifier;
@property (retain, nonatomic) PSSpecifier *selectedTimeSpecifier;
@property (retain, nonatomic) NSArray *budgetedItemSpecifiers;
@property _Bool didDeleteAllowance;
@property (retain, nonatomic) UIColor *defaultTimeCellDetailTextColor;
@property (readonly) _Bool shouldShowCompatibilityAlert;
@property (weak, nonatomic) id <STAllowanceDetailListControllerDelegate> delegate;
@property (copy, nonatomic) STAllowance *allowance;
@property (nonatomic) _Bool isSetupController;
@property _Bool useBackButton;
@property (nonatomic) _Bool creatingNewAllowance;
@property (nonatomic, readonly) NSObject<STRootViewModelCoordinator> *coordinator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)loadView;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)willResignActive;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)datePickerChanged:(id)arg1;
- (id)initWithCoordinator:(id)arg1;
- (id)specifiers;
- (_Bool)canBeShownFromSuspendedState;
- (_Bool)shouldReloadSpecifiersOnResume;
- (id)datePickerForSpecifier:(id)arg1;
- (void)cancelButtonTapped:(id)arg1;
- (void)saveButtonTapped:(id)arg1;
- (void)updateSaveButton;
- (void)showOrHideCustomizeDaysSpecifier;
- (void)_setAllowanceEnabled:(id)arg1 specifier:(id)arg2;
- (id)_allowanceEnabled:(id)arg1;
- (id)timeFooterText;
- (id)budgetTime;
- (void)showCustomizeDaysController:(id)arg1;
- (id)createBudgetedItemSpecifiers;
- (void)confirmDeletion:(id)arg1;
- (id)atEndOfLimitFooterText;
- (void)_setAskForMoreTime:(id)arg1 specifier:(id)arg2;
- (id)_askForMoreTime:(id)arg1;
- (void)_editListButtonPressed:(id)arg1;
- (_Bool)hasSetBudgetTimeOrCustomSchedule;
- (void)_showOrHidePickerSpecifierForSpecifier:(id)arg1 highlight:(_Bool)arg2;
- (_Bool)hasSetBudgetTime;
- (void)deleteAllowance:(id)arg1;
- (id)_categoryDetailText:(id)arg1;
- (void)customizeDaysListController:(id)arg1 didFinishEditingTimeByDay:(id)arg2;

@end
