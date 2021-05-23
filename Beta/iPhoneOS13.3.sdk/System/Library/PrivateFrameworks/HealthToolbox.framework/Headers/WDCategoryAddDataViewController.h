/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <HealthToolbox/WDAddDataViewController.h>

@class HKValueRange, NSString, WDAddDataManualEntryItem;

__attribute__((visibility("hidden")))
@interface WDCategoryAddDataViewController : WDAddDataViewController

{
    WDAddDataManualEntryItem *_categoryValueEntryItem;
    WDAddDataManualEntryItem *_dateEntryItem;
}

@property (nonatomic, readonly) WDAddDataManualEntryItem *categoryValueEntryItem;
@property (nonatomic, readonly) WDAddDataManualEntryItem *dateEntryItem;
@property (nonatomic, readonly) HKValueRange *selectedDateRange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (long long)numberOfSections;
- (long long)_defaultSelectedIndex;
- (id)initWithDisplayType:(id)arg1 profile:(id)arg2 unitController:(id)arg3 initialStartDate:(id)arg4;
- (id)manualEntryItemsForSection:(long long)arg1;
- (_Bool)useSingleStartAndEndDate;
- (void)manualEntryItemDidUpdate:(id)arg1;
- (void)validateDataWithCompletion:(CDUnknownBlockType)arg1;
- (id)generateHKObjects;
- (id)_orderedTitlesForCategoryValuePicker;
- (_Bool)_hasCategoryValueEntryItem;
- (id)_categoryCells;

@end
