/*
 Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

#import <Foundation/NSObject.h>

@class NSDate, NSHashTable, NSMutableSet, NSString, NSTimeZone, _CLKTimeFormatterSubstringRange;

@protocol CLKTimeFormatterDelegate;

@interface CLKTimeFormatter : NSObject

{
    NSDate *_date;
    NSString *_timeText;
    NSString *_designatorText;
    NSString *_timeAndDesignatorText;
    NSString *_timeAndDesignatorTextWithoutMinutesIfZero;
    NSString *_timeSubstringToSeparatorText;
    NSString *_timeSubstringFromSeparatorText;
    _CLKTimeFormatterSubstringRange *_designatorRangeInTimeAndDesignatorText;
    _CLKTimeFormatterSubstringRange *_designatorRangeInTimeAndDesignatorTextWithoutMinutesIfZero;
    _CLKTimeFormatterSubstringRange *_timeRange;
    _CLKTimeFormatterSubstringRange *_separatorRangeInTimeText;
    _CLKTimeFormatterSubstringRange *_separatorRangeInTimeAndDesignatorText;
    _CLKTimeFormatterSubstringRange *_blinkerRangeInTimeText;
    _CLKTimeFormatterSubstringRange *_lastBlinkerRangeInTimeText;
    _CLKTimeFormatterSubstringRange *_blinkerRangeInTimeAndDesignatorText;
    _CLKTimeFormatterSubstringRange *_blinkerRangeInTimeSubstringToSeparatorText;
    _CLKTimeFormatterSubstringRange *_blinkerRangeInTimeSubstringFromSeparatorText;
    _CLKTimeFormatterSubstringRange *_rangeInTimeSubstringFromSecondsSeparatorText;
    NSHashTable *_observers;
    NSMutableSet *_reasonsToPause;
    struct NSNumber *_secondsUpdateToken;
    struct NSNumber *_minutesUpdateToken;
    _Bool _useNarrowDesignatorTextForGerman;
    _Bool _suppressesDesignatorWhitespace;
    _Bool _includeSeparatorInTimeSubstringFromSeparatorText;
    _Bool _showSeconds;
    _Bool _forcesLatinNumbers;
    NSTimeZone *_timeZone;
    double _timeOffset;
    NSDate *_overrideDate;
    id <CLKTimeFormatterDelegate> _delegate;
}

@property (retain, nonatomic) NSTimeZone *timeZone;
@property (nonatomic) double timeOffset;
@property (nonatomic) _Bool suppressesDesignatorWhitespace;
@property (retain, nonatomic) NSDate *overrideDate;
@property (nonatomic, readonly) _Bool reportingLiveTime;
@property (nonatomic, readonly) NSString *timeText;
@property (nonatomic, readonly) NSString *designatorText;
@property (nonatomic, readonly) NSString *timeAndDesignatorText;
@property (nonatomic, readonly) NSString *timeAndDesignatorTextWithoutMinutesIfZero;
@property (nonatomic, readonly) NSString *timeSubstringToSeparatorText;
@property (nonatomic, readonly) NSString *timeSubstringFromSeparatorText;
@property (nonatomic) _Bool includeSeparatorInTimeSubstringFromSeparatorText;
@property (nonatomic, readonly) struct _NSRange designatorRangeInTimeAndDesignatorText;
@property (nonatomic, readonly) struct _NSRange designatorRangeInTimeAndDesignatorTextWithoutMinutesIfZero;
@property (nonatomic, readonly) _Bool timeAndDesignatorTextHasDesignator;
@property (nonatomic, readonly) _Bool timeAndDesignatorTextStartsWithDesignator;
@property (nonatomic, readonly) struct _NSRange separatorRangeInTimeText;
@property (nonatomic, readonly) struct _NSRange separatorRangeInTimeAndDesignatorText;
@property (nonatomic, readonly) struct _NSRange blinkerRangeInTimeText;
@property (nonatomic, readonly) struct _NSRange lastBlinkerRangeInTimeText;
@property (nonatomic, readonly) struct _NSRange blinkerRangeInTimeAndDesignatorText;
@property (nonatomic, readonly) struct _NSRange blinkerRangeInTimeSubstringToSeparatorText;
@property (nonatomic, readonly) struct _NSRange blinkerRangeInTimeSubstringFromSeparatorText;
@property (nonatomic, readonly) struct _NSRange rangeInTimeSubstringFromSecondsSeparatorText;
@property (nonatomic) _Bool showSeconds;
@property (nonatomic, readonly) _Bool forcesLatinNumbers;
@property (weak, nonatomic) id <CLKTimeFormatterDelegate> delegate;
@property (nonatomic, getter=_useNarrowDesignatorTextForGerman, setter=_setUseNarrowDesignatorTextForGerman:) _Bool _useNarrowDesignatorTextForGerman;

- (id)init;
- (void)dealloc;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)_handleSignificantTimeChange;
- (void)setPaused:(_Bool)arg1 forReason:(id)arg2;
- (id)initWithForcesLatinNumbers:(_Bool)arg1;
- (void)_invalidateDate:(id)arg1;
- (void)_startOrStopUpdatesIfNecessary;
- (void)_invalidateText;
- (id)_designatorRangeInTimeAndDesignatorText;
- (id)_timeAndDesignatorFormatter;
- (id)_designatorRangeInTimeAndDesignatorTextWithoutMinutesIfZero;
- (id)_separatorRangeInTimeText;
- (id)_separatorRangeInTimeAndDesignatorText;
- (id)_blinkerRangeInTimeText;
- (id)_lastBlinkerRangeInTimeText;
- (id)_blinkerRangeInTimeAndDesignatorText;
- (id)_blinkerRangeInTimeSubstringToSeparatorText;
- (id)_blinkerRangeInTimeSubstringFromSeparatorText;
- (id)_rangeInTimeSubstringFromSecondsSeparatorText;
- (id)_designatorRangeInText:(id)arg1;
- (void)_notifyReportingLiveTimeDidChange;
- (void)_stopMinuteUpdates:(_Bool)arg1;
- (void)_stopSecondsUpdates:(_Bool)arg1;
- (void)_notifyTextDidChange;

@end
