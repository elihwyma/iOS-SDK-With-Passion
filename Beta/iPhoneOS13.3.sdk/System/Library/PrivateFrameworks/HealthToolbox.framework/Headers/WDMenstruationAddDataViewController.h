/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <HealthToolbox/WDCategoryAddDataViewController.h>

@class NSString, WDAddDataManualEntrySpinner;

__attribute__((visibility("hidden")))
@interface WDMenstruationAddDataViewController : WDCategoryAddDataViewController

{
    WDAddDataManualEntrySpinner *_isStartOfCycleEntryItem;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (long long)numberOfSections;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)initWithDisplayType:(id)arg1 profile:(id)arg2 unitController:(id)arg3 initialStartDate:(id)arg4;
- (id)defaultMetadata;
- (long long)numberOfRowsInManualEntrySpinner:(id)arg1;
- (id)manualEntrySpinner:(id)arg1 titleForRow:(long long)arg2;
- (id)manualEntryItemsForSection:(long long)arg1;
- (_Bool)useSingleStartAndEndDate;

@end
