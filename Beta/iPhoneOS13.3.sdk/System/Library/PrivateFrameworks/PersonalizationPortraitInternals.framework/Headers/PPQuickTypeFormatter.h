/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

@class NSCache, NSDateComponentsFormatter, NSDateFormatter, NSLengthFormatter, NSLocale, NSMeasurementFormatter, NSString, NSURL, PPQuickTypeQuery, _PASLock;

@interface PPQuickTypeFormatter : NSObject

{
    PPQuickTypeQuery *_query;
    NSLocale *_locale;
    _PASLock *_localizedStrings;
    NSDateFormatter *_birthdayFormatter;
    NSDateFormatter *_chineseBirthdayFormatter;
    NSDateFormatter *_yearlessChineseBirthdayFormatter;
    NSDateFormatter *_shortEventFormatter;
    NSDateFormatter *_longEventFormatter;
    NSCache *_localizedLabelCache;
    NSCache *_dateFormatCache;
    NSURL *_labeledValueLocalizationURL;
    NSCache *_appNameCache;
    NSString *_appNameFallbackLanguage;
    NSString *_appNameDesiredLanguage;
    NSMeasurementFormatter *_measurementWholeFormatter;
    NSMeasurementFormatter *_measurementDecimalFormatter;
    NSMeasurementFormatter *_measurementUnscaledFormatter;
    NSLengthFormatter *_lengthFormatter;
    NSDateComponentsFormatter *_dateComponentFormatter;
}

+ (id)new;
+ (id)formatterWithQuery:(id)arg1;
+ (id)keyDictionaryForQuery:(id)arg1;

- (id)init;
- (id)_locale;
- (id)distanceLabel;
- (id)destinationLabel;
- (id)_localizedStringForKey:(id)arg1;
- (id)initWithquery:(id)arg1;
- (id)_dateFormatForTemplate:(id)arg1;
- (_Bool)_isYearlessComponents:(id)arg1;
- (id)_dateFromComponents:(id)arg1 destinationCalendar:(id)arg2;
- (id)makeShortEventFormatter;
- (id)makeLongEventFormatter;
- (id)makeYearlessChineseBirthdayFormatter;
- (id)makeChineseBirthdayFormatter;
- (id)makeBirthdayFormatter;
- (id)formattedBirthday:(id)arg1;
- (id)formattedEventTime:(id)arg1;
- (void)_initializeLocalizedLableCache;
- (id)formattedStringForLabel:(id)arg1;
- (id)formattedStringsForLabels:(id)arg1;
- (void)_precacheDateFormats;
- (id)localizedAppNameForBundleIdentifier:(id)arg1;
- (id)makeMeasurementWholeFormatter;
- (id)makeMeasurementDecimalFormatter;
- (id)makeMeasurementUnscaledFormatter;
- (id)formattedMeasurement:(id)arg1 allowDecimals:(_Bool)arg2 scaleUnits:(_Bool)arg3;
- (id)makeLengthFormatter;
- (id)formattedLengthInMeters:(double)arg1;
- (id)formattedPostalAddress:(id)arg1;
- (id)makeDateComponentFormatter;
- (id)formattedTimeInterval:(double)arg1;
- (id)navigationItemLabelForTypeLabel:(id)arg1 destination:(id)arg2;
- (id)itemLabelForBundleId:(id)arg1 typeLabel:(id)arg2;
- (id)attributionPattern;
- (id)etaLabel;
- (id)streetLabel;
- (id)timeLeftLabel;

@end
