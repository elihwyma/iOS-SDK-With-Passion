/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthKit/HKMedicalDate.h>

@interface HKMedicalDate (Display)

+ (id)displayStringForDate:(id)arg1 form:(long long)arg2 originalTimeZoneString:(id)arg3;

- (id)displayString;
- (id)displayStringWithPreferredForm:(long long)arg1 includeTimeZone:(_Bool)arg2;
- (id)displayStringWithTimeZone;

@end
