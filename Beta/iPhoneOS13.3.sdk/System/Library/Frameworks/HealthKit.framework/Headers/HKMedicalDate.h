/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

#import <HealthKit/Swift-Protocol.h>

@class NSDate, NSString;

@interface HKMedicalDate : NSObject <Swift>

{
    long long _form;
    NSString *_originalTimeZoneString;
    NSDate *_underlyingDate;
}

@property (copy, nonatomic, readonly) NSDate *underlyingDate;
@property (nonatomic, readonly) long long form;
@property (copy, nonatomic, readonly) NSString *originalTimeZoneString;
@property (copy, nonatomic, readonly) NSDate *dateForUTC;

+ (_Bool)supportsSecureCoding;
+ (id)referenceCalendar;
+ (id)_medicalDateFromComponents:(id)arg1 originalTimeZoneString:(id)arg2 form:(long long)arg3 error:(out id *)arg4;
+ (id)_adjustDate:(id)arg1 calendar:(id)arg2 form:(long long)arg3;
+ (id)_descriptionForForm:(long long)arg1;
+ (unsigned long long)_calendarUnitForForm:(long long)arg1;
+ (id)referenceCalendarWithLocalTimezone;
+ (id)medicalDateWithYear:(long long)arg1 error:(out id *)arg2;
+ (id)medicalDateWithYear:(long long)arg1 month:(long long)arg2 error:(out id *)arg3;
+ (id)medicalDateWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 error:(out id *)arg4;
+ (id)medicalDateWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 hour:(long long)arg4 minute:(long long)arg5 second:(long long)arg6 originalTimeZoneString:(id)arg7 error:(out id *)arg8;
+ (id)_medicalDateWithForm:(long long)arg1 underlyingDate:(id)arg2 originalTimeZoneString:(id)arg3;
+ (_Bool)_validForm:(long long)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithForm:(long long)arg1 underlyingDate:(id)arg2 originalTimeZoneString:(id)arg3;
- (id)adjustedDateForCalendar:(id)arg1;
- (_Bool)isCompatibleWithMedicalDateForm:(long long)arg1;

@end
