/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <Foundation/NSObject.h>

@class NBPhoneMetaData, NBPhoneNumberUtil, NSMutableArray, NSMutableString, NSRegularExpression, NSString;

__attribute__((visibility("hidden")))
@interface NBAsYouTypeFormatter : NSObject

{
    _Bool _isSuccessfulFormatting;
    _Bool _ableToFormat_;
    _Bool _inputHasFormatting_;
    _Bool _isCompleteNumber_;
    _Bool _isExpectingCountryCallingCode_;
    _Bool _shouldAddSpaceAfterNationalPrefix_;
    NSString *_DIGIT_PLACEHOLDER_;
    NSString *_SEPARATOR_BEFORE_NATIONAL_NUMBER_;
    NSString *_currentOutput_;
    NSString *_currentFormattingPattern_;
    NSString *_defaultCountry_;
    NSString *_nationalPrefixExtracted_;
    NSMutableString *_formattingTemplate_;
    NSMutableString *_accruedInput_;
    NSMutableString *_prefixBeforeNationalNumber_;
    NSMutableString *_accruedInputWithoutFormatting_;
    NSMutableString *_nationalNumber_;
    NSRegularExpression *_DIGIT_PATTERN_;
    NSRegularExpression *_NATIONAL_PREFIX_SEPARATORS_PATTERN_;
    NSRegularExpression *_CHARACTER_CLASS_PATTERN_;
    NSRegularExpression *_STANDALONE_DIGIT_PATTERN_;
    NSRegularExpression *_ELIGIBLE_FORMAT_PATTERN_;
    NBPhoneNumberUtil *_phoneUtil_;
    unsigned long long _lastMatchPosition_;
    unsigned long long _originalPosition_;
    unsigned long long _positionToRemember_;
    unsigned long long _MIN_LEADING_DIGITS_LENGTH_;
    NSMutableArray *_possibleFormats_;
    NBPhoneMetaData *_currentMetaData_;
    NBPhoneMetaData *_defaultMetaData_;
    NBPhoneMetaData *_EMPTY_METADATA_;
}

@property (retain, nonatomic) NSString *DIGIT_PLACEHOLDER_;
@property (nonatomic) NSString *SEPARATOR_BEFORE_NATIONAL_NUMBER_;
@property (retain, nonatomic) NSString *currentOutput_;
@property (retain, nonatomic) NSString *currentFormattingPattern_;
@property (retain, nonatomic) NSString *defaultCountry_;
@property (retain, nonatomic) NSString *nationalPrefixExtracted_;
@property (retain, nonatomic) NSMutableString *formattingTemplate_;
@property (retain, nonatomic) NSMutableString *accruedInput_;
@property (retain, nonatomic) NSMutableString *prefixBeforeNationalNumber_;
@property (retain, nonatomic) NSMutableString *accruedInputWithoutFormatting_;
@property (retain, nonatomic) NSMutableString *nationalNumber_;
@property (retain, nonatomic) NSRegularExpression *DIGIT_PATTERN_;
@property (retain, nonatomic) NSRegularExpression *NATIONAL_PREFIX_SEPARATORS_PATTERN_;
@property (retain, nonatomic) NSRegularExpression *CHARACTER_CLASS_PATTERN_;
@property (retain, nonatomic) NSRegularExpression *STANDALONE_DIGIT_PATTERN_;
@property (retain, nonatomic) NSRegularExpression *ELIGIBLE_FORMAT_PATTERN_;
@property (nonatomic) _Bool ableToFormat_;
@property (nonatomic) _Bool inputHasFormatting_;
@property (nonatomic) _Bool isCompleteNumber_;
@property (nonatomic) _Bool isExpectingCountryCallingCode_;
@property (nonatomic) _Bool shouldAddSpaceAfterNationalPrefix_;
@property (retain, nonatomic) NBPhoneNumberUtil *phoneUtil_;
@property (nonatomic) unsigned long long lastMatchPosition_;
@property (nonatomic) unsigned long long originalPosition_;
@property (nonatomic) unsigned long long positionToRemember_;
@property (nonatomic) unsigned long long MIN_LEADING_DIGITS_LENGTH_;
@property (retain, nonatomic) NSMutableArray *possibleFormats_;
@property (retain, nonatomic) NBPhoneMetaData *currentMetaData_;
@property (retain, nonatomic) NBPhoneMetaData *defaultMetaData_;
@property (retain, nonatomic) NBPhoneMetaData *EMPTY_METADATA_;
@property (nonatomic, readonly) _Bool isSuccessfulFormatting;

- (id)init;
- (id)description;
- (void)clear;
- (id)initWithRegionCode:(id)arg1;
- (id)initWithRegionCodeForTest:(id)arg1;
- (id)initWithRegionCode:(id)arg1 bundle:(id)arg2;
- (id)initWithRegionCodeForTest:(id)arg1 bundle:(id)arg2;
- (id)getMetadataForRegion_:(id)arg1;
- (_Bool)maybeCreateNewTemplate_;
- (void)getAvailableFormats_:(id)arg1;
- (_Bool)isFormatEligible_:(id)arg1;
- (void)narrowDownPossibleFormats_:(id)arg1;
- (_Bool)createFormattingTemplate_:(id)arg1;
- (id)getFormattingTemplate_:(id)arg1 numberFormat:(id)arg2;
- (id)removeLastDigitAndRememberPosition;
- (id)removeLastDigit;
- (id)inputStringAndRememberPosition:(id)arg1;
- (id)inputString:(id)arg1;
- (id)inputDigit:(id)arg1;
- (id)inputDigitAndRememberPosition:(id)arg1;
- (id)inputDigitWithOptionToRememberPosition_:(id)arg1 rememberPosition:(_Bool)arg2;
- (id)attemptToChoosePatternWithPrefixExtracted_;
- (_Bool)ableToExtractLongerNdd_;
- (_Bool)isDigitOrLeadingPlusSign_:(id)arg1;
- (id)attemptToFormatAccruedDigits_;
- (id)appendNationalNumber_:(id)arg1;
- (long long)getRememberedPosition;
- (id)attemptToChooseFormattingPattern_;
- (id)inputAccruedNationalNumber_;
- (_Bool)isNanpaNumberWithNationalPrefix_;
- (id)removeNationalPrefixFromNationalNumber_;
- (_Bool)attemptToExtractIdd_;
- (_Bool)attemptToExtractCountryCallingCode_;
- (id)normalizeAndAccrueDigitsAndPlusSign_:(id)arg1 rememberPosition:(_Bool)arg2;
- (id)inputDigitHelper_:(id)arg1;

@end
