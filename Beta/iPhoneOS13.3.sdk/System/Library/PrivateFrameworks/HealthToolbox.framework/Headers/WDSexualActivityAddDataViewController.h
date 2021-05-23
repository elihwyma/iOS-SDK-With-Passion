/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <HealthToolbox/WDAddDataViewController.h>

@class NSString, WDAddDataManualEntryItem;

__attribute__((visibility("hidden")))
@interface WDSexualActivityAddDataViewController : WDAddDataViewController

{
    WDAddDataManualEntryItem *_dateEntryItem;
    WDAddDataManualEntryItem *_protectionUsedEntryItem;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (long long)numberOfSections;
- (id)initWithDisplayType:(id)arg1 profile:(id)arg2 unitController:(id)arg3 initialStartDate:(id)arg4;
- (id)manualEntryItemsForSection:(long long)arg1;
- (void)manualEntryItemDidUpdate:(id)arg1;
- (id)generateHKObjects;

@end
