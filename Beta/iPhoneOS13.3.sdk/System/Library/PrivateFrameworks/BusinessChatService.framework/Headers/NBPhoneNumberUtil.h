/*
 Image: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
 */

#import <Foundation/NSObject.h>

@class CTTelephonyNetworkInfo, NBMetadataHelper, NBRegExMatcher, NSDictionary, NSLock, NSMutableDictionary, NSRegularExpression;

__attribute__((visibility("hidden")))
@interface NBPhoneNumberUtil : NSObject

{
    NSLock *_entireStringCacheLock;
    NSMutableDictionary *_entireStringRegexCache;
    NSLock *_lockPatternCache;
    NSMutableDictionary *_regexPatternCache;
    NSRegularExpression *_CAPTURING_DIGIT_PATTERN;
    NSRegularExpression *_VALID_ALPHA_PHONE_PATTERN;
    NBMetadataHelper *_helper;
    NBRegExMatcher *_matcher;
}

@property (retain, nonatomic) NSLock *entireStringCacheLock;
@property (retain, nonatomic) NSMutableDictionary *entireStringRegexCache;
@property (retain, nonatomic) NSLock *lockPatternCache;
@property (retain, nonatomic) NSMutableDictionary *regexPatternCache;
@property (retain, nonatomic) NSRegularExpression *CAPTURING_DIGIT_PATTERN;
@property (retain, nonatomic) NSRegularExpression *VALID_ALPHA_PHONE_PATTERN;
@property (retain, nonatomic) NBMetadataHelper *helper;
@property (retain, nonatomic) NBRegExMatcher *matcher;
@property (nonatomic, readonly) CTTelephonyNetworkInfo *telephonyNetworkInfo;
@property (nonatomic, readonly) NSDictionary *DIGIT_MAPPINGS;

+ (void)initialize;
+ (id)sharedInstance;

- (id)init;
- (id)regularExpressionWithPattern:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)normalize:(id)arg1;
- (id)errorWithObject:(id)arg1 withDomain:(id)arg2;
- (id)entireRegularExpressionWithPattern:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)componentsSeparatedByRegex:(id)arg1 regex:(id)arg2;
- (int)stringPositionByRegex:(id)arg1 regex:(id)arg2;
- (int)indexOfStringByString:(id)arg1 target:(id)arg2;
- (id)replaceFirstStringByRegex:(id)arg1 regex:(id)arg2 withTemplate:(id)arg3;
- (id)replaceStringByRegex:(id)arg1 regex:(id)arg2 withTemplate:(id)arg3;
- (id)matchesByRegex:(id)arg1 regex:(id)arg2;
- (id)matchedStringByRegex:(id)arg1 regex:(id)arg2;
- (_Bool)isStartingStringByRegex:(id)arg1 regex:(id)arg2;
- (id)stringByReplacingOccurrencesString:(id)arg1 withMap:(id)arg2 removeNonMatches:(_Bool)arg3;
- (_Bool)isAllDigits:(id)arg1;
- (id)getNationalSignificantNumber:(id)arg1;
- (void)initRegularExpressionSet;
- (void)initNormalizationMappings;
- (id)extractPossibleNumber:(id)arg1;
- (_Bool)isViablePhoneNumber:(id)arg1;
- (void)normalizeSB:(id *)arg1;
- (id)normalizeDigitsOnly:(id)arg1;
- (id)convertAlphaCharactersInNumber:(id)arg1;
- (int)getLengthOfGeographicalAreaCode:(id)arg1 error:(id *)arg2;
- (int)getLengthOfGeographicalAreaCode:(id)arg1;
- (int)getLengthOfNationalDestinationCode:(id)arg1 error:(id *)arg2;
- (int)getLengthOfNationalDestinationCode:(id)arg1;
- (id)normalizeHelper:(id)arg1 normalizationReplacements:(id)arg2 removeNonMatches:(_Bool)arg3;
- (_Bool)formattingRuleHasFirstGroupOnly:(id)arg1;
- (_Bool)isNumberGeographical:(id)arg1;
- (_Bool)isValidRegionCode:(id)arg1;
- (_Bool)hasValidCountryCallingCode:(id)arg1;
- (id)format:(id)arg1 numberFormat:(long long)arg2 error:(id *)arg3;
- (id)format:(id)arg1 numberFormat:(long long)arg2;
- (id)formatByPattern:(id)arg1 numberFormat:(long long)arg2 userDefinedFormats:(id)arg3 error:(id *)arg4;
- (id)formatByPattern:(id)arg1 numberFormat:(long long)arg2 userDefinedFormats:(id)arg3;
- (id)formatNationalNumberWithCarrierCode:(id)arg1 carrierCode:(id)arg2 error:(id *)arg3;
- (id)formatNationalNumberWithCarrierCode:(id)arg1 carrierCode:(id)arg2;
- (id)getMetadataForRegionOrCallingCode:(id)arg1 regionCode:(id)arg2;
- (id)formatNationalNumberWithPreferredCarrierCode:(id)arg1 fallbackCarrierCode:(id)arg2 error:(id *)arg3;
- (id)formatNationalNumberWithPreferredCarrierCode:(id)arg1 fallbackCarrierCode:(id)arg2;
- (id)formatNumberForMobileDialing:(id)arg1 regionCallingFrom:(id)arg2 withFormatting:(_Bool)arg3 error:(id *)arg4;
- (id)formatNumberForMobileDialing:(id)arg1 regionCallingFrom:(id)arg2 withFormatting:(_Bool)arg3;
- (id)formatOutOfCountryCallingNumber:(id)arg1 regionCallingFrom:(id)arg2 error:(id *)arg3;
- (id)formatOutOfCountryCallingNumber:(id)arg1 regionCallingFrom:(id)arg2;
- (id)prefixNumberWithCountryCallingCode:(id)arg1 phoneNumberFormat:(long long)arg2 formattedNationalNumber:(id)arg3 formattedExtension:(id)arg4;
- (id)formatInOriginalFormat:(id)arg1 regionCallingFrom:(id)arg2 error:(id *)arg3;
- (id)formatInOriginalFormat:(id)arg1 regionCallingFrom:(id)arg2;
- (_Bool)rawInputContainsNationalPrefix:(id)arg1 nationalPrefix:(id)arg2 regionCode:(id)arg3;
- (_Bool)hasUnexpectedItalianLeadingZero:(id)arg1;
- (_Bool)hasFormattingPatternForNumber:(id)arg1;
- (id)formatOutOfCountryKeepingAlphaChars:(id)arg1 regionCallingFrom:(id)arg2 error:(id *)arg3;
- (id)formatOutOfCountryKeepingAlphaChars:(id)arg1 regionCallingFrom:(id)arg2;
- (id)formatNsn:(id)arg1 metadata:(id)arg2 phoneNumberFormat:(long long)arg3 carrierCode:(id)arg4;
- (id)chooseFormattingPatternForNumber:(id)arg1 nationalNumber:(id)arg2;
- (id)formatNsnUsingPattern:(id)arg1 formattingPattern:(id)arg2 numberFormat:(long long)arg3 carrierCode:(id)arg4;
- (id)getExampleNumber:(id)arg1 error:(id *)arg2;
- (id)getExampleNumberForType:(id)arg1 type:(long long)arg2 error:(id *)arg3;
- (id)getExampleNumberForNonGeoEntity:(id)arg1 error:(id *)arg2;
- (id)maybeGetFormattedExtension:(id)arg1 metadata:(id)arg2 numberFormat:(long long)arg3;
- (id)getNumberDescByType:(id)arg1 type:(long long)arg2;
- (long long)getNumberType:(id)arg1;
- (long long)getNumberTypeHelper:(id)arg1 metadata:(id)arg2;
- (_Bool)isNumberMatchingDesc:(id)arg1 numberDesc:(id)arg2;
- (_Bool)isValidNumber:(id)arg1;
- (_Bool)isValidNumberForRegion:(id)arg1 regionCode:(id)arg2;
- (id)getRegionCodeForNumber:(id)arg1;
- (id)getRegionCodeForNumberFromRegionList:(id)arg1 regionCodes:(id)arg2;
- (id)getRegionCodeForCountryCode:(id)arg1;
- (id)getRegionCodesForCountryCode:(id)arg1;
- (id)getCountryCodeForRegion:(id)arg1;
- (id)getCountryCodeForValidRegion:(id)arg1 error:(id *)arg2;
- (id)getNddPrefixForRegion:(id)arg1 stripNonDigits:(_Bool)arg2;
- (_Bool)isNANPACountry:(id)arg1;
- (_Bool)isLeadingZeroPossible:(id)arg1;
- (_Bool)isAlphaNumber:(id)arg1;
- (_Bool)isPossibleNumber:(id)arg1 error:(id *)arg2;
- (_Bool)isPossibleNumber:(id)arg1;
- (long long)isPossibleNumberWithReason:(id)arg1 error:(id *)arg2;
- (long long)isPossibleNumberWithReason:(id)arg1;
- (_Bool)isPossibleNumberString:(id)arg1 regionDialingFrom:(id)arg2 error:(id *)arg3;
- (_Bool)truncateTooLongNumber:(id)arg1;
- (id)extractCountryCode:(id)arg1 nationalNumber:(id *)arg2;
- (id)getSupportedRegions;
- (id)maybeExtractCountryCode:(id)arg1 metadata:(id)arg2 nationalNumber:(id *)arg3 keepRawInput:(_Bool)arg4 phoneNumber:(id *)arg5 error:(id *)arg6;
- (_Bool)parsePrefixAsIdd:(id)arg1 sourceString:(id *)arg2;
- (long long)maybeStripInternationalPrefixAndNormalize:(id *)arg1 possibleIddPrefix:(id)arg2;
- (_Bool)maybeStripNationalPrefixAndCarrierCode:(id *)arg1 metadata:(id)arg2 carrierCode:(id *)arg3;
- (id)maybeStripExtension:(id *)arg1;
- (_Bool)checkRegionForParsing:(id)arg1 defaultRegion:(id)arg2;
- (id)parse:(id)arg1 defaultRegion:(id)arg2 error:(id *)arg3;
- (id)parseWithPhoneCarrierRegion:(id)arg1 error:(id *)arg2;
- (id)countryCodeByCarrier;
- (id)parseAndKeepRawInput:(id)arg1 defaultRegion:(id)arg2 error:(id *)arg3;
- (id)parseHelper:(id)arg1 defaultRegion:(id)arg2 keepRawInput:(_Bool)arg3 checkRegion:(_Bool)arg4 error:(id *)arg5;
- (void)buildNationalNumberForParsing:(id)arg1 nationalNumber:(id *)arg2;
- (long long)isNumberMatch:(id)arg1 second:(id)arg2 error:(id *)arg3;
- (long long)isNumberMatch:(id)arg1 second:(id)arg2;
- (_Bool)isNationalNumberSuffixOfTheOther:(id)arg1 second:(id)arg2;
- (_Bool)canBeInternationallyDialled:(id)arg1 error:(id *)arg2;
- (_Bool)canBeInternationallyDialled:(id)arg1;
- (_Bool)matchesEntirely:(id)arg1 string:(id)arg2;
- (long long)validateNumberLength:(id)arg1 metadata:(id)arg2 type:(long long)arg3;
- (_Bool)descHasPossibleNumberData:(id)arg1;
- (long long)testNumberLength:(id)arg1 desc:(id)arg2;
- (id)matchFirstByRegex:(id)arg1 regex:(id)arg2;
- (long long)validateNumberLength:(id)arg1 metadata:(id)arg2;
- (void)setItalianLeadingZerosForPhoneNumber:(id)arg1 phoneNumber:(id)arg2;
- (id)normalizeDiallableCharsOnly:(id)arg1;
- (id)getCountryMobileTokenFromCountryCode:(long long)arg1;

@end
