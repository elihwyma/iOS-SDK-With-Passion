/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class CLLocation, NSCalendar, NSDate, NSNumber, NSString;

@interface NTKFaceSnapshotContext : NSObject

{
    CLLocation *_location;
    NSDate *_date;
    NSCalendar *_calendar;
    NSString *_monogram;
    NSString *_locale;
    NSNumber *_uses24hTime;
    NSString *_buildVersion;
    NSString *_tzVersion;
    NSNumber *_enhanceTextLegibilityEnabled;
    NSString *_lunarCalendarLocaleID;
}

@property (retain, nonatomic) CLLocation *location;
@property (retain, nonatomic) NSDate *date;
@property (retain, nonatomic) NSCalendar *calendar;
@property (retain, nonatomic) NSString *monogram;
@property (retain, nonatomic) NSString *locale;
@property (retain, nonatomic) NSNumber *uses24hTime;
@property (retain, nonatomic) NSString *buildVersion;
@property (retain, nonatomic) NSString *tzVersion;
@property (retain, nonatomic) NSNumber *enhanceTextLegibilityEnabled;
@property (retain, nonatomic) NSString *lunarCalendarLocaleID;

+ (_Bool)supportsSecureCoding;
+ (id)currentContext;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)calendarDateMatchesContext:(id)arg1;
- (_Bool)localeMatchesContext:(id)arg1;
- (_Bool)timeZoneMatchesContext:(id)arg1;
- (_Bool)locationSignificantlyDiffersFromContext:(id)arg1;
- (id)_yearMonthDay;
- (double)distanceInKilometersFromContext:(id)arg1;
- (_Bool)buildVersionMatchesContext:(id)arg1;
- (_Bool)enhanceTextLegibilityEnabledMatchesContext:(id)arg1;
- (_Bool)lunarCalendarLocaleIDMatchesContext:(id)arg1;

@end
