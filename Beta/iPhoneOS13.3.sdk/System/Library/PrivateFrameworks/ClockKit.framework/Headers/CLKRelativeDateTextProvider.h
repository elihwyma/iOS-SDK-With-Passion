/*
 Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

@class NSDate, NSDateComponents, NSDateComponentsFormatter, NSString;

@interface CLKRelativeDateTextProvider

{
    NSDateComponentsFormatter *_formatter;
    NSDateComponents *_sessionComponents;
    unsigned long long _sessionVisibleUnits;
    NSString *_sessionCacheKey;
    long long _sessionTimePeriod;
    double _elapsedTime;
    _Bool _sessionInProgress;
    _Bool _disableSmallCapUnits;
    _Bool _shrinkUnitsInCJK;
    _Bool _disableOffsetPrefix;
    _Bool _twoDigitMinuteZeroPadding;
    _Bool _showLeadingMinutes;
    _Bool _wantsSubseconds;
    _Bool _pauseTimerAtZero;
    NSDate *_date;
    long long _relativeDateStyle;
    unsigned long long _calendarUnits;
    NSDate *_overrideDate;
}

@property (retain, nonatomic) NSDate *overrideDate;
@property (nonatomic) _Bool disableSmallCapUnits;
@property (nonatomic) _Bool shrinkUnitsInCJK;
@property (nonatomic) _Bool disableOffsetPrefix;
@property (nonatomic) _Bool twoDigitMinuteZeroPadding;
@property (nonatomic) _Bool showLeadingMinutes;
@property (nonatomic) _Bool wantsSubseconds;
@property (nonatomic) _Bool pauseTimerAtZero;
@property (retain, nonatomic) NSDate *date;
@property (nonatomic) long long relativeDateStyle;
@property (nonatomic) unsigned long long calendarUnits;

+ (_Bool)supportsSecureCoding;
+ (_Bool)_configureFormatter:(id)arg1 fallbackIndex:(unsigned long long)arg2 style:(long long)arg3;
+ (id)textProviderWithDate:(id)arg1 style:(long long)arg2 units:(unsigned long long)arg3;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)finalize;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_validate;
- (void)_endSession;
- (id)JSONObjectRepresentation;
- (id)_initWithJSONObjectRepresentation:(id)arg1;
- (id)_sessionAttributedTextForIndex:(unsigned long long)arg1 withStyle:(id)arg2;
- (void)_startSessionWithDate:(id)arg1;
- (id)_sessionCacheKey;
- (long long)_updateFrequency;
- (long long)_timePeriodForElapsedTime:(double)arg1;
- (id)_componentsForDate:(id)arg1 visibleUnits:(unsigned long long *)arg2;
- (_Bool)_timerIsPausedAtZero;
- (void)_configureFormatterForTimerStyle;
- (id)_signPrefixString;

@end
