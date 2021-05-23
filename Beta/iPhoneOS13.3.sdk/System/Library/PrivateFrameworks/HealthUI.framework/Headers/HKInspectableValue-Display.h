/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthKit/HKInspectableValue.h>

@interface HKInspectableValue (Display)

- (id)displayString;
- (id)_joinValueStrings:(id)arg1;
- (id)_stringForMedicalDateInterval;
- (id)_stringForTimeSinceMidnight;
- (id)_stringForMedicalCodings:(id)arg1;
- (id)_displayStringForCodedValueCollection:(id)arg1;
- (id)_stringForQuantity:(id)arg1;

@end
