/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSFormatter.h>

#import <Foundation/Swift-Protocol.h>

@class NSCalendar, NSDate, NSNumberFormatter, NSString;

@interface NSDateComponentsFormatter : NSFormatter <Swift>

{
    struct _opaque_pthread_mutex_t _lock;
    void *_fmt;
    void *_unused;
    NSString *_fmtLocaleIdent;
    NSCalendar *_calendar;
    NSDate *_referenceDate;
    NSNumberFormatter *_unitFormatter;
    unsigned long long _allowedUnits;
    long long _formattingContext;
    long long _unitsStyle;
    unsigned long long _zeroFormattingBehavior;
    long long _maximumUnitCount;
    _Bool _allowsFractionalUnits;
    _Bool _collapsesLargestUnit;
    _Bool _includesApproximationPhrase;
    _Bool _includesTimeRemainingPhrase;
    void *_reserved;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property long long unitsStyle;
@property unsigned long long allowedUnits;
@property unsigned long long zeroFormattingBehavior;
@property (copy) NSCalendar *calendar;
@property (copy) NSDate *referenceDate;
@property _Bool allowsFractionalUnits;
@property long long maximumUnitCount;
@property _Bool collapsesLargestUnit;
@property _Bool includesApproximationPhrase;
@property _Bool includesTimeRemainingPhrase;
@property long long formattingContext;

+ (id)localizedStringFromDateComponents:(id)arg1 unitsStyle:(long long)arg2;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)finalize;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)stringForObjectValue:(id)arg1;
- (void)receiveObservedValue:(id)arg1;
- (id)stringFromDate:(id)arg1 toDate:(id)arg2;
- (_Bool)getObjectValue:(out id *)arg1 forString:(id)arg2 errorDescription:(out id *)arg3;
- (id)stringFromDateComponents:(id)arg1;
- (_Bool)_mayDecorateAttributedStringForObjectValue:(id)arg1;
- (void)_NSDateComponentsFormatter_commonInit;
- (void)_flushFormatterCache;
- (id)_calendarOrCanonicalCalendar;
- (id)stringForObjectValue:(id)arg1 withReferenceDate:(id)arg2;
- (void)_ensureUnitFormatterWithLocale_alreadyLocked:(id)arg1;
- (id)_calendarFromDateComponents:(id)arg1;
- (id)_canonicalizedDateComponents:(id)arg1 withCalendar:(id)arg2 usedUnits:(unsigned long long *)arg3 withReferenceDate:(id)arg4;
- (void)_ensureUnitFormatterWithLocale:(id)arg1;
- (id)stringFromTimeInterval:(double)arg1;

@end
