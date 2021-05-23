/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <HealthToolbox/WDDisplayTypeAddDataViewController.h>

@class WDAddDataManualEntryItem;

__attribute__((visibility("hidden")))
@interface WDHeightAddDataViewController : WDDisplayTypeAddDataViewController

{
    WDAddDataManualEntryItem *_heightPickerManualEntryItem;
}

- (id)initWithDisplayType:(id)arg1 profile:(id)arg2 unitController:(id)arg3 initialStartDate:(id)arg4;
- (id)_feetUnitString;
- (id)_inchUnitString;
- (_Bool)_inputUnitIsFeetWithDisplayType:(id)arg1 unitController:(id)arg2;
- (id)createValueFieldManualEntryItem;

@end
