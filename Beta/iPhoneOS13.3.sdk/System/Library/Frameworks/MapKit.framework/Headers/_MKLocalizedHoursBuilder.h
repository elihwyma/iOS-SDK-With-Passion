/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class GEOBusinessHours, NSDate, NSString, NSTimeZone, UIColor;

@interface _MKLocalizedHoursBuilder : NSObject

{
    _Bool _isClosedTodayAllDay;
    _Bool _isCurrentlyClosed;
    _Bool _isClosingSoon;
    _Bool _isOpeningSoon;
    _Bool _isPermanentlyClosed;
    _Bool _isTemporarilyClosed;
    NSString *_localizedOperatingHours;
    NSString *_localizedOpenState;
    UIColor *_hoursStateLabelColor;
    NSDate *_compareDate;
    unsigned long long _geoMapItemOpeningHourOptions;
    unsigned long long _localizedHoursStringOptions;
    NSTimeZone *_timeZone;
    GEOBusinessHours *_operatingHours;
}

@property (nonatomic) unsigned long long geoMapItemOpeningHourOptions;
@property (nonatomic) unsigned long long localizedHoursStringOptions;
@property (retain, nonatomic) NSTimeZone *timeZone;
@property (retain, nonatomic) GEOBusinessHours *operatingHours;
@property (retain, nonatomic) NSDate *compareDate;
@property (nonatomic, readonly) NSString *localizedOperatingHours;
@property (nonatomic, readonly) NSString *localizedOpenState;
@property (nonatomic, readonly) UIColor *hoursStateLabelColor;

+ (id)testGetMonthAndDayFormatter;
+ (id)testGetDayOfWeekFormatterFull;
+ (id)testGetDayOfWeekFormatterShort;
+ (id)testGetHoursFormatter;
+ (id)localizedHoursStringNormalHours;
+ (id)localizedHoursStringSpecialHours;
+ (id)localizedHoursDayRangeString:(id)arg1;

- (void)_commonInit;
- (id)initWithBusinessHours:(id)arg1 timeZone:(id)arg2 localizedHoursStringOptions:(unsigned long long)arg3;
- (void)updateHoursLabelColor;
- (id)initWithMapItemForMessageForBusiness:(id)arg1 localizedHoursStringOptions:(unsigned long long)arg2;
- (id)initWithMapItem:(id)arg1 localizedHoursStringOptions:(unsigned long long)arg2;
- (void)_resetLocalizedBuilder:(_Bool)arg1;
- (void)_resetLocalizedStrings:(_Bool)arg1;
- (void)_updateLocalizedString;
- (id)_updateLocalizedOperatingHoursString:(unsigned long long)arg1;
- (void)calculateWidthsForData:(id)arg1;
- (id)formatData:(id)arg1;

@end
