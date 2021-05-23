/*
 Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

@class NSDate, NSDateFormatter, NSMutableArray, NSTimeZone;

@interface CLKTimeTextProvider

{
    NSDateFormatter *_dateFormatter;
    NSMutableArray *_sizingFallbackBlocks;
    _Bool _disallowBothMinutesAndDesignator;
    _Bool _prefersDesignatorToMinutes;
    NSDate *_date;
    NSTimeZone *_timeZone;
}

@property (nonatomic) _Bool disallowBothMinutesAndDesignator;
@property (nonatomic) _Bool prefersDesignatorToMinutes;
@property (retain, nonatomic) NSDate *date;
@property (retain, nonatomic) NSTimeZone *timeZone;

+ (_Bool)supportsSecureCoding;
+ (id)textProviderWithDate:(id)arg1 timeZone:(id)arg2;
+ (id)textProviderWithDate:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_validate;
- (id)JSONObjectRepresentation;
- (id)_timeAttributedTextWithStyle:(id)arg1 dropMinutes:(_Bool)arg2 dropDesignator:(_Bool)arg3;
- (id)_initWithJSONObjectRepresentation:(id)arg1;
- (id)_sessionAttributedTextForIndex:(unsigned long long)arg1 withStyle:(id)arg2;

@end
