/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <HealthToolbox/WDAddDataViewController.h>

@class NSString, WDAddDataManualEntryItem;

__attribute__((visibility("hidden")))
@interface WDDisplayTypeAddDataViewController : WDAddDataViewController

{
    WDAddDataManualEntryItem *_dateTimeEntryItem;
    WDAddDataManualEntryItem *_valueFieldManualEntryItem;
}

@property (retain, nonatomic) WDAddDataManualEntryItem *valueFieldManualEntryItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewDidLoad;
- (long long)numberOfSections;
- (id)manualEntryItemsForSection:(long long)arg1;
- (void)manualEntryItemDidUpdate:(id)arg1;
- (void)validateDataWithCompletion:(CDUnknownBlockType)arg1;
- (id)generateHKObjects;
- (id)defaultEditingItem;
- (id)createValueFieldManualEntryItem;
- (void)_setDefaultValuesIfNecessary;
- (void)_updateManualEntryItemWithCurrentBMI:(id)arg1;

@end
