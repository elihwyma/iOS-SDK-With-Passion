/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <HealthToolbox/WDDisplayTypeAddDataViewController.h>

@class NSString, WDAddDataManualEntrySpinner;

__attribute__((visibility("hidden")))
@interface WDBloodGlucoseAddDataViewController : WDDisplayTypeAddDataViewController

{
    WDAddDataManualEntrySpinner *_mealTimeEntryItem;
}

@property (retain, nonatomic) WDAddDataManualEntrySpinner *mealTimeEntryItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)defaultMetadata;
- (long long)numberOfRowsInManualEntrySpinner:(id)arg1;
- (id)manualEntrySpinner:(id)arg1 titleForRow:(long long)arg2;
- (id)manualEntryItemsForSection:(long long)arg1;

@end
