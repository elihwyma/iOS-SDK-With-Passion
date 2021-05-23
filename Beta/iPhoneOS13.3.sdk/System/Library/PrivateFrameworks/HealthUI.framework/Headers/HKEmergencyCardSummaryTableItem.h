/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKEmergencyCardTableItem.h>

@class HKMedicalIDPersonSummaryCell;

@interface HKEmergencyCardSummaryTableItem : HKEmergencyCardTableItem

{
    HKMedicalIDPersonSummaryCell *_cell;
}

- (void)setData:(id)arg1;
- (id)_cell;
- (struct UIEdgeInsets)separatorInset;
- (void)localeDidChange:(id)arg1;
- (id)initInEditMode:(_Bool)arg1;
- (_Bool)hasPresentableData;
- (id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2;
- (void)timeZoneDidChange:(id)arg1;

@end
