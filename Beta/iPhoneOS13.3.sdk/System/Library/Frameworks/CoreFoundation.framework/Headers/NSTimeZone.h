/*
 Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

@interface NSTimeZone : NSObject

@property (copy, readonly) NSString *name;
@property (copy, readonly) NSData *data;

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (_Bool)supportsSecureCoding;
+ (id)timeZoneForSecondsFromGMT:(long long)arg1;
+ (id)systemTimeZone;
+ (id)abbreviationDictionary;
+ (void)resetSystemTimeZone;
+ (id)defaultTimeZone;
+ (void)setDefaultTimeZone:(id)arg1;
+ (id)localTimeZone;
+ (id)knownTimeZoneNames;
+ (void)setAbbreviationDictionary:(id)arg1;
+ (id)timeZoneDataVersion;
+ (id)timeZoneWithName:(id)arg1 data:(id)arg2;
+ (id)timeZoneWithName:(id)arg1;
+ (id)timeZoneWithAbbreviation:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)_cfTypeID;
- (_Bool)isNSTimeZone__;
- (double)daylightSavingTimeOffsetForDate:(id)arg1;
- (long long)secondsFromGMTForDate:(id)arg1;
- (id)abbreviationForDate:(id)arg1;
- (_Bool)isDaylightSavingTimeForDate:(id)arg1;
- (id)nextDaylightSavingTimeTransitionAfterDate:(id)arg1;
- (id)localizedName:(long long)arg1 locale:(id)arg2;
- (id)initWithName:(id)arg1 data:(id)arg2;
- (id)initWithName:(id)arg1;
- (_Bool)isEqualToTimeZone:(id)arg1;
- (id)abbreviation;
- (long long)secondsFromGMT;
- (_Bool)isDaylightSavingTime;
- (double)daylightSavingTimeOffset;
- (id)nextDaylightSavingTimeTransition;

@end
