/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthKit/HKInspectableValueCollection.h>

@interface HKInspectableValueCollection (Display)

+ (void)parseValueCollection:(id)arg1 referenceRanges:(id)arg2 healthRecordsStore:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
+ (void)parseUncodedValueCollection:(id)arg1 referenceRanges:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
+ (id)_medicalCodingValuePreferredSystems;
+ (id)_unitStringForValueCollection:(id)arg1;
+ (id)_unitStringForValue:(id)arg1;

- (id)displayString;
- (id)_joinValueStrings:(id)arg1;
- (id)_stringsForValues:(id)arg1;

@end
