//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthToolbox/WDDisplayTypeAddDataViewController.h>

@class WDAddDataManualEntryItem;

__attribute__((visibility("hidden")))
@interface WDHeightAddDataViewController : WDDisplayTypeAddDataViewController
{
    WDAddDataManualEntryItem *_heightPickerManualEntryItem;
}

// - (void).cxx_destruct;
- (id)_inchUnitString;
- (id)_feetUnitString;
- (BOOL)_inputUnitIsFeetWithDisplayType:(id)arg1 unitController:(id)arg2;
- (id)createValueFieldManualEntryItem;
- (id)initWithDisplayType:(id)arg1 profile:(id)arg2 unitController:(id)arg3 initialStartDate:(id)arg4;

@end

