/*
 Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <Foundation/NSTimeZone.h>

__attribute__((visibility("hidden")))
@interface __NSLocalTimeZone : NSTimeZone

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)name;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)classForCoder;
- (double)daylightSavingTimeOffsetForDate:(id)arg1;
- (id)data;
- (long long)secondsFromGMTForDate:(id)arg1;
- (id)abbreviationForDate:(id)arg1;
- (_Bool)isDaylightSavingTimeForDate:(id)arg1;
- (id)nextDaylightSavingTimeTransitionAfterDate:(id)arg1;
- (id)localizedName:(long long)arg1 locale:(id)arg2;
- (id)replacementObjectForPortCoder:(id)arg1;

@end
