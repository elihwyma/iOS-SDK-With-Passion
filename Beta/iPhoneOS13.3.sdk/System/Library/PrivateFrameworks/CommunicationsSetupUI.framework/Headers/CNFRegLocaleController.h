/*
 Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

#import <CommunicationsSetupUI/CNFRegFirstRunController.h>

@class NSArray, NSString, PSSpecifier;

@interface CNFRegLocaleController : CNFRegFirstRunController

{
    NSString *_currentRegionID;
    NSString *_currentPhoneValue;
    PSSpecifier *_countryFieldSpecifier;
    NSArray *_phoneNumberSpecifiers;
    PSSpecifier *_phoneNumberGroupSpecifier;
    PSSpecifier *_phoneNumberFieldSpecifier;
    NSArray *_regionData;
    _Bool _isLoading;
    _Bool _isError;
    id _regionListChangeObserver;
    CDUnknownBlockType _completionBlock;
}

@property (copy, nonatomic) NSString *currentRegionID;
@property (copy, nonatomic) NSString *currentPhoneValue;
@property (retain, nonatomic) NSArray *regionData;
@property (copy) CDUnknownBlockType completionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)bundle;
- (void)dismiss;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)titleString;
- (id)controllerForSpecifier:(id)arg1;
- (void)_updateUI;
- (id)_currentRegion;
- (void)_handleTimeout;
- (id)logName;
- (id)initWithRegController:(id)arg1;
- (id)specifierList;
- (void)_setFieldsEnabled:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_setupEventHandlers;
- (void)_buildSpecifierCache:(id)arg1;
- (id)_rightButtonItem;
- (void)_rightButtonTapped;
- (id)validationString;
- (void)_updateControllerState;
- (void)_startTimeout;
- (void)_loadRegionsIfNecessary;
- (void)showCountryPicker;
- (void)_startListeningForRegionListChanges;
- (id)_unformattedPhoneNumber:(id)arg1;
- (void)_loadInitialValues;
- (id)_phoneTextField;
- (void)_stopListeningForRegionListChanges;
- (void)_handleRegionListLoad;
- (void)_refreshCountryFieldAnimated:(_Bool)arg1;
- (void)_refreshPhoneFieldAnimated:(_Bool)arg1;
- (void)_showPhoneField:(_Bool)arg1 animated:(_Bool)arg2;
- (id)currentPhoneCompatibleCountryCode;
- (void)_finishValidation;
- (void)_failValidationWithError:(id)arg1;
- (void)hideCountryPicker;
- (void)_showCountryPickerAnimated:(_Bool)arg1;
- (void)_hideCountryPickerAnimated:(_Bool)arg1;
- (void)_buildCountryFieldSpecifierCache:(id)arg1;
- (void)_buildPhoneNumberSpecifierCache:(id)arg1;
- (void)regionChooser:(id)arg1 selectedRegionID:(id)arg2;
- (id)countryList;
- (id)currentCountryValueForSpecifier:(id)arg1;
- (id)currentPhoneNumberForSpecifier:(id)arg1;
- (void)setCurrentPhoneNumber:(id)arg1 forSpecifier:(id)arg2;

@end
