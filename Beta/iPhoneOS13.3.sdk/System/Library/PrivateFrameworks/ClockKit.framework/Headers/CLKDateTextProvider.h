/*
 Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

@class NSArray, NSDate, NSDateFormatter, NSString, NSTimeZone;

@interface CLKDateTextProvider

{
    NSDateFormatter *_dateFormatter;
    NSArray *_templateSeries;
    _Bool _uppercase;
    _Bool _shortUnits;
    _Bool _allowsNarrowUnits;
    _Bool _narrowStandaloneWeekdayDay;
    NSDate *_date;
    unsigned long long _calendarUnits;
    NSTimeZone *_timeZone;
    NSString *_alternateCalendarLocaleID;
    long long _formattingContext;
}

@property (nonatomic) _Bool shortUnits;
@property (nonatomic) _Bool allowsNarrowUnits;
@property (nonatomic) _Bool narrowStandaloneWeekdayDay;
@property (copy, nonatomic) NSString *alternateCalendarLocaleID;
@property (nonatomic) long long formattingContext;
@property (retain, nonatomic) NSDate *date;
@property (nonatomic) unsigned long long calendarUnits;
@property (retain, nonatomic) NSTimeZone *timeZone;
@property (nonatomic) _Bool uppercase;

+ (_Bool)supportsSecureCoding;
+ (id)textProviderWithDate:(id)arg1 units:(unsigned long long)arg2 timeZone:(id)arg3;
+ (id)textProviderWithDate:(id)arg1 units:(unsigned long long)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_validate;
- (id)JSONObjectRepresentation;
- (id)_initWithJSONObjectRepresentation:(id)arg1;
- (id)_sessionAttributedTextForIndex:(unsigned long long)arg1 withStyle:(id)arg2;
- (id)_completeDateTemplateSeries;
- (id)_partialDateTemplateSeriesForUnits:(unsigned long long)arg1;

@end
