/*
 Image: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
 */

#import <Preferences/PSListController.h>

__attribute__((visibility("hidden")))
@interface PSUICarrierSpaceUsageController : PSListController

- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (id)specifiers;
- (_Bool)shouldReloadSpecifiersOnResume;
- (void)simStatusChanged;
- (void)carrierSpaceChanged;
- (id)usageSections;
- (id)usageCategories;
- (_Bool)hasMultipleDevicesOfTheSameType;
- (_Bool)hasMultiplePlansOfTheSameTypeInTheSameSectionCategory;
- (_Bool)shouldShowPlanSection:(id)arg1;
- (_Bool)hasMultiplePlansOfSameTypeForNetworkUsageLabel:(id)arg1;
- (id)deviceTypeSectionLabelForAccountMetrics:(id)arg1;
- (id)planCategorySectionLabelForPlanMetrics:(id)arg1;
- (_Bool)shouldShowData:(id)arg1;
- (id)usageGraphSpecifierForSection:(id)arg1;
- (_Bool)shouldShowOnlyRemainingData:(id)arg1;
- (id)dataUsageDescription:(id)arg1;
- (_Bool)shouldShowCalls:(id)arg1;
- (_Bool)shouldShowOnlyRemainingCalls:(id)arg1;
- (id)callsDescription:(id)arg1;
- (_Bool)shouldShowMessages:(id)arg1;
- (_Bool)shouldShowOnlyRemainingMessages:(id)arg1;
- (id)messagesDescription:(id)arg1;
- (_Bool)shouldShowRemainingCredit:(id)arg1;
- (id)remainingCreditDescription:(id)arg1;
- (id)barGraphColors;

@end
