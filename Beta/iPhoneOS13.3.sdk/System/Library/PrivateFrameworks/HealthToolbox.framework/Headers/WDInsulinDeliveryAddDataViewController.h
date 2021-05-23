/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <HealthToolbox/WDDisplayTypeAddDataViewController.h>

@class NSString, WDAddDataManualEntryItem, WDAddDataManualEntrySpinner;

__attribute__((visibility("hidden")))
@interface WDInsulinDeliveryAddDataViewController : WDDisplayTypeAddDataViewController

{
    WDAddDataManualEntryItem *_dateTimeEntryItem;
    WDAddDataManualEntrySpinner *_deliveryReasonEntryItem;
}

@property (retain, nonatomic) WDAddDataManualEntryItem *dateTimeEntryItem;
@property (retain, nonatomic) WDAddDataManualEntrySpinner *deliveryReasonEntryItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (long long)numberOfSections;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)defaultMetadata;
- (long long)numberOfRowsInManualEntrySpinner:(id)arg1;
- (id)manualEntrySpinner:(id)arg1 titleForRow:(long long)arg2;
- (id)manualEntryItemsForSection:(long long)arg1;
- (void)manualEntryItemDidUpdate:(id)arg1;
- (void)validateDataWithCompletion:(CDUnknownBlockType)arg1;
- (id)generateHKObjects;

@end
