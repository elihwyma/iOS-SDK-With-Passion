/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSString.h>

@interface NSString (HTMLEncoding)

+ (id)_navigation_replacementForFormatToken:(id)arg1 options:(CDStruct_ef0b40be)arg2 overrideVariables:(id)arg3;
+ (id)_navigation_stringForExpectedTravelTime:(double)arg1 dateUnitStyle:(long long)arg2;
+ (id)_navigation_formattedStringForHourRanges:(id)arg1 timeZone:(id)arg2;
+ (id)_navigation_formattedDescriptionForFrequency:(id)arg1;
+ (id)_navigation_localizedStringForDistance:(double)arg1 detail:(long long)arg2 unitFormat:(long long)arg3 locale:(id)arg4 useMetric:(unsigned long long)arg5 useYards:(unsigned long long)arg6;
+ (id)_navigation_formattedStringForInteger:(long long)arg1;
+ (id)_navigation_formattedDescriptionForLiveStatus:(long long)arg1 updatedDepartureTimeString:(id)arg2;
+ (id)_navigation_stringWithSeconds:(unsigned long long)arg1 andAbbreviationType:(unsigned long long)arg2;
+ (id)_navigation_spokenStringWithSeconds:(unsigned long long)arg1 abbreviated:(_Bool)arg2;
+ (id)_navigation_formattedStringForFloat:(double)arg1 useIncreasedPrecision:(_Bool)arg2;
+ (long long)_navigation_abbreviatedFromatterUnitsStyleForLocale:(id)arg1;
+ (id)_navigation_descriptionForFrequencyRangeWithMinFrequency:(long long)arg1 maxFrequency:(long long)arg2;
+ (id)_navigation_descriptionForFrequencyMinuteValue:(long long)arg1;
+ (id)_frequencyStringForComponents:(id)arg1 forRange:(_Bool)arg2 forceShort:(_Bool)arg3;
+ (_Bool)_componentsWillUseShortFormat:(id)arg1;
+ (id)_navigation_stringForServerFormattedString:(id)arg1 options:(CDStruct_ef0b40be)arg2 overrideVariables:(id)arg3 allTokensExpanded:(_Bool *)arg4;
+ (id)_navigation_overridenTokenForToken:(id)arg1 overrideVariables:(id)arg2;
+ (id)_navigation_stringForServerFormattedString:(id)arg1 abbreviatedUnits:(_Bool)arg2 detail:(long long)arg3 spoken:(_Bool)arg4 overrideVariables:(id)arg5;
+ (id)_navigation_stringForServerFormattedString:(id)arg1 abbreviatedUnits:(_Bool)arg2 detail:(long long)arg3 spoken:(_Bool)arg4 overrideVariables:(id)arg5 allTokensExpanded:(_Bool *)arg6;
+ (id)_navigation_stringForDistance:(double)arg1 formatter:(id)arg2 locale:(id)arg3;
+ (id)_navigation_stringWithMinutes:(unsigned long long)arg1 andAbbreviationType:(unsigned long long)arg2;
+ (id)_navigation_spokenStringWithSeconds:(unsigned long long)arg1 andAbbreviationType:(unsigned long long)arg2;
+ (id)_navigation_spokenStringWithMinutes:(unsigned long long)arg1 andAbbreviationType:(unsigned long long)arg2;
+ (id)_navigation_formattedStringForPriceValue:(double)arg1 currencyCode:(id)arg2;
+ (id)_navigation_localizedStringForDistance:(double)arg1 context:(long long)arg2 extraDetail:(_Bool)arg3;
+ (id)_navigation_stringWithSeconds:(unsigned long long)arg1 abbreviated:(_Bool)arg2;
+ (id)_navigation_stringWithTimeStampValues:(id)arg1 options:(CDStruct_ef0b40be)arg2;
+ (id)_navigation_stringWithCountdownValue:(id)arg1 inToken:(id)arg2 options:(CDStruct_ef0b40be)arg3;
+ (id)_navigation_commaListDelimiter;
+ (id)_navigation_formattedStringForPriceValueWithAmount:(id)arg1 currencyCode:(id)arg2;
+ (id)_navigation_formattedStringForPriceValueWithAmount:(id)arg1 currencyCode:(id)arg2 showsCurrencySymbol:(_Bool)arg3;
+ (void)_navigation_logMismatchBetweenServerInstruction:(id)arg1 clientInstruction:(id)arg2;
+ (id)_navigation_addPrefixToInstructions:(id)arg1 isServer:(_Bool)arg2 isSpoken:(_Bool)arg3;
+ (_Bool)_navigation_logIfContainsVariables:(id)arg1;
+ (id)_navigation_formattedStringForFloat:(double)arg1;
+ (id)_navigation_formatFloatForPrintedDistance:(double)arg1;
+ (id)_navigation_stringForServerFormattedString:(id)arg1 options:(CDStruct_ef0b40be)arg2 overrideVariables:(id)arg3;
+ (id)_navigation_stringForServerFormattedString:(id)arg1;
+ (id)_navigation_replacementForFormatToken:(id)arg1 abbreviatedUnits:(_Bool)arg2 detail:(long long)arg3 spoken:(_Bool)arg4 overrideVariables:(id)arg5;
+ (id)_navigation_languageDirectionStringWithFormat:(id)arg1;
+ (_Bool)_navigation_compareServerInstructions:(id)arg1 withClientInstructions:(id)arg2;
+ (id)_navigation_selectInstructionWithServerString:(id)arg1 isSpoken:(_Bool)arg2 clientBlock:(CDUnknownBlockType)arg3;
+ (id)_navigation_selectInstructionWithServerStringArray:(id)arg1 isSpoken:(_Bool)arg2 clientBlock:(CDUnknownBlockType)arg3;
+ (id)_navigation_stringWithSpeed:(double)arg1;
+ (id)_navigation_stringWithSpeedUnits;
+ (id)_navigation_stringWithDirection:(double)arg1 abbreviated:(_Bool)arg2;
+ (id)_navigation_stringWithAltitude:(double)arg1 accuracy:(double)arg2;
+ (id)_navigation_stringWithAltitudeUnits;
+ (id)_navigation_stringWithTime:(id)arg1;
+ (id)_navigation_pointerDescription:(id)arg1;

- (id)_navigation_sanitizedStringForDisplayInHTML;
- (id)_navigation_stringByEscapingHTML;
- (id)_navigation_stringByReplacingNewLinesWithString:(id)arg1;
- (_Bool)_navigation_isPrivate;
- (id)_navigation_stripTagsFromSpokenString;
- (id)_navigation_stripDebugPrefix;
- (_Bool)_navigation_isEqualToString:(id)arg1;
- (_Bool)_navigation_containsVariables;
- (id)_navigation_stringByMakingPhonetic;
- (id)_navigation_stringByMarkingAsAddress;
- (id)_navigation_stringByMarkingAsNavigationText;
- (id)_navigation_stringByMarkingAsNormalText;
- (_Bool)_navigation_isCJK;
- (id)_navigation_stringByMarkingAsPrivateText;
- (id)_navigation_stringByStrippingPrivateTag;
- (id)_navigation_stripVariablesFromString;
- (unsigned long long)_navigation_distanceLevenshtein:(id)arg1;

@end
