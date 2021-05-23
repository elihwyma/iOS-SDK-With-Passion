/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <HealthUI/HKDisplayType.h>

@interface HKDisplayType (WDDataProviders)

@property (readonly) long long wd_heartRateDisplayTypeContext;

- (id)wd_listViewControllerDataProviderWithProfile:(id)arg1 unitController:(id)arg2 isHierarchical:(_Bool)arg3;
- (Class)_wd_listViewControllerDataProviderClass:(_Bool)arg1;
- (id)wd_dataListViewControllerWithProfile:(id)arg1 unitController:(id)arg2;
- (id)wd_listViewControllerDataProviderWithProfile:(id)arg1 unitController:(id)arg2;
- (Class)_wd_addDataViewControllerClass;
- (long long)_heartRoomDisplayTypeContext:(long long)arg1;
- (id)wd_detailViewControllerWithProfile:(id)arg1 displayDate:(id)arg2;
- (id)wd_dataListViewControllerWithProfile:(id)arg1;
- (id)wd_addDataViewControllerWithProfile:(id)arg1 unitController:(id)arg2 initialStartDate:(id)arg3;
- (id)wd_valueOrderForAddDataViewController;
- (id)wd_defaultValueForAddDataViewController;
- (id)wd_contextDetailViewControllerWithProfile:(id)arg1 displayDate:(id)arg2;
- (id)wd_outOfRangeAlertDisplayName;

@end
