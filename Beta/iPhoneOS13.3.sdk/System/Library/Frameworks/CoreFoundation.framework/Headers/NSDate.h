/*
 Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <Foundation/NSObject.h>

@interface NSDate : NSObject

@property (readonly) double timeIntervalSinceReferenceDate;

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (_Bool)supportsSecureCoding;
+ (id)dateWithTimeIntervalSinceReferenceDate:(double)arg1;
+ (double)timeIntervalSinceReferenceDate;
+ (id)distantFuture;
+ (id)distantPast;
+ (id)now;
+ (id)date;
+ (id)dateWithTimeIntervalSinceNow:(double)arg1;
+ (id)dateWithTimeIntervalSince1970:(double)arg1;
+ (id)dateWithTimeInterval:(double)arg1 sinceDate:(id)arg2;
+ (id)dateWithDate:(id)arg1;
+ (id)dateWithString:(id)arg1;

- (_Bool)isNSDate__;
- (double)timeIntervalSince1970;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)compare:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)descriptionWithLocale:(id)arg1;
- (unsigned long long)_cfTypeID;
- (id)initWithTimeIntervalSinceReferenceDate:(double)arg1;
- (_Bool)isEqualToDate:(id)arg1;
- (id)initWithString:(id)arg1;
- (id)dateByAddingTimeInterval:(double)arg1;
- (id)earlierDate:(id)arg1;
- (id)laterDate:(id)arg1;
- (double)timeIntervalSinceDate:(id)arg1;
- (double)timeIntervalSinceNow;
- (id)initWithTimeIntervalSinceNow:(double)arg1;
- (id)initWithTimeIntervalSince1970:(double)arg1;
- (id)initWithTimeInterval:(double)arg1 sinceDate:(id)arg2;
- (id)initWithDate:(id)arg1;
- (id)addTimeInterval:(double)arg1;
- (_Bool)isInToday;
- (_Bool)isInTomorrow;
- (_Bool)isInYesterday;
- (_Bool)isInSameDayAsDate:(id)arg1;
- (_Bool)isEqual:(id)arg1 toUnitGranularity:(unsigned long long)arg2;
- (long long)compare:(id)arg1 toUnitGranularity:(unsigned long long)arg2;

@end
