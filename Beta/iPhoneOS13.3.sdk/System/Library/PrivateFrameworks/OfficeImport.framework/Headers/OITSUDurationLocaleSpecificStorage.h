/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSArray, NSCharacterSet, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface OITSUDurationLocaleSpecificStorage : NSObject

{
    NSString *_weekLongSingularString;
    NSString *_weekLongPluralString;
    NSString *_weekMediumSingularString;
    NSString *_weekMediumPluralString;
    NSString *_weekShortString;
    NSString *_dayLongSingularString;
    NSString *_dayLongPluralString;
    NSString *_dayMediumSingularString;
    NSString *_dayMediumPluralString;
    NSString *_dayShortString;
    NSString *_hourLongSingularString;
    NSString *_hourLongPluralString;
    NSString *_hourMediumSingularString;
    NSString *_hourMediumPluralString;
    NSString *_hourShortString;
    NSString *_minuteLongSingularString;
    NSString *_minuteLongPluralString;
    NSString *_minuteMediumSingularString;
    NSString *_minuteMediumPluralString;
    NSString *_minuteShortString;
    NSString *_secondLongSingularString;
    NSString *_secondLongPluralString;
    NSString *_secondMediumSingularString;
    NSString *_secondMediumPluralString;
    NSString *_secondShortString;
    NSString *_millisecondLongSingularString;
    NSString *_millisecondLongPluralString;
    NSString *_millisecondShortString;
    NSMutableArray *_multiWordDurationUnitStrings;
    NSMutableArray *_fullStopDurationUnitStrings;
    NSCharacterSet *_alphabeticCharacterSet;
    NSCharacterSet *_decimalDigitCharacterSet;
    NSCharacterSet *_decimalDigitAndSeperatorsCharacterSet;
    NSCharacterSet *_whitespaceCharacterSet;
    NSCharacterSet *_emptyCharacterSet;
    NSCharacterSet *_separatorPunctuationCharacterSet;
    NSCharacterSet *_minusSignCharacterSet;
    NSCharacterSet *_whitespaceAndNewlineCharacterSet;
    NSCharacterSet *_specialDurationFormatCharacters;
}

@property (readonly) NSString *weekLongSingularString;
@property (readonly) NSString *weekLongPluralString;
@property (readonly) NSString *weekMediumSingularString;
@property (readonly) NSString *weekMediumPluralString;
@property (readonly) NSString *weekShortString;
@property (readonly) NSString *dayLongSingularString;
@property (readonly) NSString *dayLongPluralString;
@property (readonly) NSString *dayMediumSingularString;
@property (readonly) NSString *dayMediumPluralString;
@property (readonly) NSString *dayShortString;
@property (readonly) NSString *hourLongSingularString;
@property (readonly) NSString *hourLongPluralString;
@property (readonly) NSString *hourMediumSingularString;
@property (readonly) NSString *hourMediumPluralString;
@property (readonly) NSString *hourShortString;
@property (readonly) NSString *minuteLongSingularString;
@property (readonly) NSString *minuteLongPluralString;
@property (readonly) NSString *minuteMediumSingularString;
@property (readonly) NSString *minuteMediumPluralString;
@property (readonly) NSString *minuteShortString;
@property (readonly) NSString *secondLongSingularString;
@property (readonly) NSString *secondLongPluralString;
@property (readonly) NSString *secondMediumSingularString;
@property (readonly) NSString *secondMediumPluralString;
@property (readonly) NSString *secondShortString;
@property (readonly) NSString *millisecondLongSingularString;
@property (readonly) NSString *millisecondLongPluralString;
@property (readonly) NSString *millisecondShortString;
@property (readonly) NSArray *multiWordDurationUnitStrings;
@property (readonly) NSArray *fullStopDurationUnitStrings;
@property (readonly) NSCharacterSet *alphabeticCharacterSet;
@property (readonly) NSCharacterSet *decimalDigitCharacterSet;
@property (readonly) NSCharacterSet *decimalDigitAndSeperatorsCharacterSet;
@property (readonly) NSCharacterSet *whitespaceCharacterSet;
@property (readonly) NSCharacterSet *emptyCharacterSet;
@property (readonly) NSCharacterSet *separatorPunctuationCharacterSet;
@property (readonly) NSCharacterSet *minusSignCharacterSet;
@property (readonly) NSCharacterSet *whitespaceAndNewlineCharacterSet;
@property (readonly) NSCharacterSet *specialDurationFormatCharacters;

+ (id)localeSpecificStorageForLocale:(id)arg1;

- (void)dealloc;
- (id)initWithLocale:(id)arg1;
- (void)addDurationUnit:(id)arg1;

@end
