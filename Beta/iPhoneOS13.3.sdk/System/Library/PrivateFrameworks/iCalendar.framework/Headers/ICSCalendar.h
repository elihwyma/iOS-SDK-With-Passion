/*
 Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import <iCalendar/ICSComponent.h>

@class ICSColor, ICSDuration, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;

@interface ICSCalendar : ICSComponent

{
    NSMutableSet *_keys;
    NSMutableDictionary *_masters;
    NSMutableDictionary *_occurrences;
    NSMutableDictionary *_timezones;
    NSMutableArray *_parsingErrors;
}

@property (retain, nonatomic) NSString *calscale;
@property (nonatomic) int method;
@property (retain, nonatomic) NSString *prodid;
@property (retain, nonatomic) NSString *version;
@property (retain, nonatomic) ICSDuration *x_apple_auto_refresh;
@property (retain, nonatomic) ICSColor *x_apple_calendar_color;
@property _Bool x_apple_ignore_on_restore;
@property (retain, nonatomic) NSString *x_wr_caldesc;
@property (retain, nonatomic) NSString *x_wr_calname;
@property (retain, nonatomic) NSString *x_wr_relcalid;
@property (retain, nonatomic) NSString *x_wr_timezone;
@property int x_calendarserver_access;

+ (id)name;
+ (long long)compareCalendarServerAccess:(int)arg1 withAccess:(int)arg2;
+ (id)ICSStringFromMethod:(int)arg1;
+ (int)methodFromICSString:(id)arg1;
+ (int)calendarServerAccessFromICSString:(id)arg1;
+ (id)calendarWithKnownTimeZones;
+ (id)defaultProdid;
+ (void)setDefaultProdid:(id)arg1;
+ (id)ICSStringFromCalendarServerAccess:(int)arg1;

- (id)init;
- (id)_init;
- (void)setComponents:(id)arg1;
- (void)addComponent:(id)arg1;
- (id)timeZoneForKey:(id)arg1;
- (id)componentKeys;
- (id)componentForKey:(id)arg1;
- (void)setComponents:(id)arg1 options:(int)arg2;
- (id)systemTimeZoneForDate:(id)arg1;
- (id)componentOccurrencesForKey:(id)arg1;
- (id)systemDateForDate:(id)arg1 options:(int)arg2;
- (id)propertiesToIncludeForChecksumVersion:(int)arg1;
- (id)_initWithVersionAndProdID:(_Bool)arg1;
- (id)systemCalendarForDate:(id)arg1 options:(int)arg2;
- (void)_addTimeZonesInComponent:(id)arg1 toSet:(id)arg2;
- (void)_addTimeZonesInComponent:(id)arg1 toDictionary:(id)arg2;
- (id)_timeZonesForComponents:(id)arg1 options:(int)arg2;
- (void)_addComponent:(id)arg1;
- (void)setComponents:(id)arg1 timeZones:(_Bool)arg2;
- (void)addParsingError:(id)arg1;
- (id)parsingErrors;
- (void)fixComponent;
- (void)fixPropertiesInheritance;
- (void)fixEntities;

@end
