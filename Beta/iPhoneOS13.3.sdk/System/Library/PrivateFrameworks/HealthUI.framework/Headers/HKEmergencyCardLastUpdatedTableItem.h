/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKEmergencyCardTableItem.h>

@interface HKEmergencyCardLastUpdatedTableItem : HKEmergencyCardTableItem

{
    _Bool _editable;
}

- (id)initInEditMode:(_Bool)arg1 editable:(_Bool)arg2;
- (_Bool)hasPresentableData;
- (id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2;

@end
