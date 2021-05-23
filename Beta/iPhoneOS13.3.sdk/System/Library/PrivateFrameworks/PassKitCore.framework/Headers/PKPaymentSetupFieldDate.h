/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPaymentSetupFieldText.h>

@class NSCalendar, NSDate, NSDateFormatter, NSLocale, NSString;

@interface PKPaymentSetupFieldDate : PKPaymentSetupFieldText

{
    NSDateFormatter *_displayDateFormatter;
    _Bool _showsDay;
    _Bool _showsMonth;
    _Bool _showsYear;
    NSString *_submissionFormat;
    NSCalendar *_calendar;
    NSLocale *_locale;
    NSDate *_defaultDate;
}

@property (nonatomic) _Bool showsDay;
@property (nonatomic) _Bool showsMonth;
@property (nonatomic) _Bool showsYear;
@property (copy, nonatomic) NSString *submissionFormat;
@property (copy, nonatomic) NSDate *defaultDate;
@property (copy, nonatomic) NSDate *currentValue;
@property (retain, nonatomic) NSCalendar *calendar;
@property (retain, nonatomic) NSLocale *locale;

- (id)displayString;
- (unsigned long long)fieldType;
- (void)updateWithConfiguration:(id)arg1;
- (id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2;
- (void)updateWithAttribute:(id)arg1;
- (id)_submissionStringForValue:(id)arg1;
- (_Bool)submissionStringMeetsAllRequirements;
- (id)_defaultValueAsDateForCurrentLocale;
- (void)_commonUpdate;

@end
