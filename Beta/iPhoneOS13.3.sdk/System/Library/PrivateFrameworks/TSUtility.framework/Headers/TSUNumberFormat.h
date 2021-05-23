/*
 Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
 */

#import <Foundation/NSObject.h>

#import <TSUtility/Swift-Protocol.h>

@class NSArray, NSIndexSet, NSString;

@interface TSUNumberFormat : NSObject <Swift>

{
    int mValueType;
    NSString *mFormatString;
    unsigned short mDecimalPlaces;
    NSString *mCurrencyCode;
    _Bool mUseAccountingStyle;
    int mNegativeStyle;
    _Bool mShowThousandsSeparator;
    int mFractionAccuracy;
    _Bool mFormatStringRequiresSuppressionOfMinusSign;
    _Bool mUseScientificFormattingAutomatically;
    _Bool mIgnoreDecimalPlacesForZeroValue;
    NSString *mPrefixString;
    NSString *mSuffixString;
    unsigned char mBase;
    unsigned short mBasePlaces;
    _Bool mBaseUseMinusSign;
    _Bool mIsCustom;
    double mScaleFactor;
    _Bool mFormatStringContainsTabCharacter;
    _Bool mFormatContainsSpecialTokens;
    _Bool mFormatContainsIntegerToken;
    unsigned char mNumberOfHashDecimalPlaceholders;
    unsigned char mTotalNumberOfDecimalPlaceholdersInFormat;
    _Bool mRequiresFractionReplacement;
    NSArray *mInterstitialStrings;
    NSIndexSet *mInterstitialStringInsertionIndexes;
    unsigned short mIndexFromRightOfLastDigitPlaceholder;
    _Bool mIsTextFormat;
    unsigned char mMinimumIntegerWidth;
    unsigned char mDecimalWidth;
    unsigned char mNumberOfNonSpaceIntegerPlaceholderDigits;
    unsigned char mNumberOfNonSpaceDecimalPlaceholderDigits;
    NSString *mFormatName;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)numberFormatWithValueType:(int)arg1 formatString:(id)arg2 decimalPlaces:(unsigned short)arg3 currencyCode:(id)arg4 useAccountingStyle:(_Bool)arg5 negativeStyle:(int)arg6 showThousandsSeparator:(_Bool)arg7 fractionAccuracy:(int)arg8;
+ (id)numberFormatWithValueType:(int)arg1 formatString:(id)arg2 decimalPlaces:(unsigned short)arg3 currencyCode:(id)arg4 useAccountingStyle:(_Bool)arg5 negativeStyle:(int)arg6 showThousandsSeparator:(_Bool)arg7 fractionAccuracy:(int)arg8 prefixString:(id)arg9 suffixString:(id)arg10 scaleFactor:(double)arg11 base:(unsigned char)arg12 basePlaces:(unsigned short)arg13 baseUseMinusSign:(_Bool)arg14 isCustom:(_Bool)arg15 formatName:(id)arg16;
+ (id)numberFormatWithValueType:(int)arg1 formatString:(id)arg2 decimalPlaces:(unsigned short)arg3 currencyCode:(id)arg4 useAccountingStyle:(_Bool)arg5 negativeStyle:(int)arg6 showThousandsSeparator:(_Bool)arg7 fractionAccuracy:(int)arg8 base:(unsigned char)arg9 basePlaces:(unsigned short)arg10 baseUseMinusSign:(_Bool)arg11;
+ (id)numberFormatWithValueType:(int)arg1 formatString:(id)arg2 decimalPlaces:(unsigned short)arg3 currencyCode:(id)arg4 useAccountingStyle:(_Bool)arg5 negativeStyle:(int)arg6 showThousandsSeparator:(_Bool)arg7 fractionAccuracy:(int)arg8 suffixString:(id)arg9;
+ (id)numberFormatWithValueType:(int)arg1 formatString:(id)arg2 decimalPlaces:(unsigned short)arg3 currencyCode:(id)arg4 useAccountingStyle:(_Bool)arg5 negativeStyle:(int)arg6 showThousandsSeparator:(_Bool)arg7 fractionAccuracy:(int)arg8 scaleFactor:(double)arg9 isCustom:(_Bool)arg10 formatName:(id)arg11;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)currencyCode;
- (double)scaleFactor;
- (int)valueType;
- (id)formatString;
- (unsigned short)base;
- (id)stringFromString:(id)arg1;
- (_Bool)isCustom;
- (_Bool)isEquivalent:(id)arg1;
- (id)prefixString;
- (id)stringFromDouble:(double)arg1;
- (id)formatName;
- (void)setFormatName:(id)arg1;
- (id)initWithValueType:(int)arg1 formatString:(id)arg2 decimalPlaces:(unsigned short)arg3 currencyCode:(id)arg4 useAccountingStyle:(_Bool)arg5 negativeStyle:(int)arg6 showThousandsSeparator:(_Bool)arg7 fractionAccuracy:(int)arg8;
- (id)initWithValueType:(int)arg1 formatString:(id)arg2 decimalPlaces:(unsigned short)arg3 currencyCode:(id)arg4 useAccountingStyle:(_Bool)arg5 negativeStyle:(int)arg6 showThousandsSeparator:(_Bool)arg7 fractionAccuracy:(int)arg8 suffixString:(id)arg9;
- (id)initWithValueType:(int)arg1 formatString:(id)arg2 decimalPlaces:(unsigned short)arg3 currencyCode:(id)arg4 useAccountingStyle:(_Bool)arg5 negativeStyle:(int)arg6 showThousandsSeparator:(_Bool)arg7 fractionAccuracy:(int)arg8 base:(unsigned char)arg9 basePlaces:(unsigned short)arg10 baseUseMinusSign:(_Bool)arg11;
- (id)initWithValueType:(int)arg1 formatString:(id)arg2 decimalPlaces:(unsigned short)arg3 currencyCode:(id)arg4 useAccountingStyle:(_Bool)arg5 negativeStyle:(int)arg6 showThousandsSeparator:(_Bool)arg7 fractionAccuracy:(int)arg8 prefixString:(id)arg9 suffixString:(id)arg10 scaleFactor:(double)arg11 base:(unsigned char)arg12 basePlaces:(unsigned short)arg13 baseUseMinusSign:(_Bool)arg14 isCustom:(_Bool)arg15 interstitialStrings:(id)arg16 interstitialStringInsertionIndexes:(id)arg17 indexFromRightOfLastDigitPlaceholder:(unsigned short)arg18 minimumIntegerWidth:(unsigned char)arg19 decimalWidth:(unsigned char)arg20 numberOfNonSpaceIntegerPlaceholderDigits:(unsigned char)arg21 numberOfNonSpaceDecimalPlaceholderDigits:(unsigned char)arg22 isTextFormat:(_Bool)arg23 formatName:(id)arg24;
- (unsigned short)decimalPlaces;
- (_Bool)showThousandsSeparator;
- (_Bool)usesAccountingStyle;
- (int)negativeStyle;
- (int)fractionAccuracy;
- (id)stringFromDouble:(double)arg1 decimalPlaces:(unsigned short)arg2 minimumDecimalPlaces:(unsigned short)arg3 forceSuppressMinusSign:(_Bool)arg4;
- (id)stringFromDouble:(double)arg1 forceSuppressMinusSign:(_Bool)arg2;
- (_Bool)hasValidDecimalPlaces;
- (id)numberFormatBySettingValueType:(int)arg1;
- (id)numberFormatBySettingDecimalPlaces:(unsigned short)arg1;
- (id)numberFormatByIncrementingDecimalPlaces:(short)arg1;
- (id)numberFormatBySettingCurrencyCode:(id)arg1;
- (id)numberFormatBySettingSuffixString:(id)arg1;
- (id)numberFormatBySettingNegativeStyle:(int)arg1;
- (id)numberFormatBySettingShowThousandsSeparator:(_Bool)arg1;
- (id)numberFormatBySettingFractionAccuracy:(int)arg1;
- (id)numberFormatBySettingUseAccountingStyle:(_Bool)arg1;
- (id)numberFormatBySettingDecimalPlaces:(unsigned short)arg1 andNegativeStyle:(int)arg2;
- (id)customNumberFormatTokens;
- (id)suffixString;
- (_Bool)isTextFormat;
- (_Bool)canFormatText;
- (_Bool)usesTextFormatForValue:(double)arg1;
- (_Bool)customFormatShouldAutoInsertPercentSymbol;
- (unsigned short)basePlaces;
- (_Bool)baseUseMinusSign;
- (_Bool)usesTabs;
- (_Bool)requiresParensToBeReplacedWithSpacesForDouble:(double)arg1;
- (id)stringFromDouble:(double)arg1 minimumDecimalPlaces:(unsigned short)arg2;
- (id)stringFromDouble:(double)arg1 decimalPlaces:(unsigned short)arg2 minimumDecimalPlaces:(unsigned short)arg3;
- (id)chartLabelStringFromDouble:(double)arg1;
- (id)initCustomFormatWithFormatString:(id)arg1 currencyCode:(id)arg2 showThousandsSeparator:(_Bool)arg3 fractionAccuracy:(int)arg4 scaleFactor:(double)arg5 interstitialStrings:(id)arg6 interstitialStringInsertionIndexes:(id)arg7 indexFromRightOfLastDigitPlaceholder:(unsigned short)arg8 minimumIntegerWidth:(unsigned char)arg9 decimalWidth:(unsigned char)arg10 numberOfNonSpaceIntegerPlaceholderDigits:(unsigned char)arg11 numberOfNonSpaceDecimalPlaceholderDigits:(unsigned char)arg12 isTextFormat:(_Bool)arg13 formatName:(id)arg14;
- (id)numberFormatBySettingPrefixString:(id)arg1;
- (id)numberFormatBySettingBase:(unsigned char)arg1;
- (id)numberFormatBySettingBasePlaces:(unsigned short)arg1;
- (id)numberFormatBySettingBaseRepresentNegativeWithMinus:(_Bool)arg1;
- (_Bool)useScientificFormattingAutomatically;
- (void)setUseScientificFormattingAutomatically:(_Bool)arg1;
- (_Bool)ignoreDecimalPlacesForZeroValue;
- (void)setIgnoreDecimalPlacesForZeroValue:(_Bool)arg1;
- (id)chartLabelStringNofixFromDouble:(double)arg1;
- (id)chartLabelStringFromDouble:(double)arg1 forceSuppressMinusSign:(_Bool)arg2;
- (id)stringFromDouble:(double)arg1 minimumDecimalPlaces:(unsigned short)arg2 forceSuppressMinusSign:(_Bool)arg3;
- (id)fractionStringFromDouble:(double)arg1;
- (id)baseStringFromDouble:(double)arg1;

@end
