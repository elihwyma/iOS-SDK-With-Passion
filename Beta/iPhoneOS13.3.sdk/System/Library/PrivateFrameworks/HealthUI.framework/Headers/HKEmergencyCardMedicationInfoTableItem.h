/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKEmergencyCardMultilineTextTableItem.h>

@interface HKEmergencyCardMedicationInfoTableItem : HKEmergencyCardMultilineTextTableItem

- (id)title;
- (id)_placeholderText;
- (_Bool)hasPresentableData;
- (id)_multilineStringValue;
- (void)_updateMultilineStringValueWithValue:(id)arg1;
- (void)_configureEditableCell:(id)arg1;

@end
