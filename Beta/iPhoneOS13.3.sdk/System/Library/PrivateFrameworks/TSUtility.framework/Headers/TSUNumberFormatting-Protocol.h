/*
 Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
 */

#import <TSUtility/Swift-Protocol.h>

@protocol TSUNumberFormatting <Swift>

- (unsigned short)currencyCode;
- (unsigned short)scaleFactor;
- (unsigned short)valueType;
- (unsigned short)formatString;
- (unsigned short)base;
- (unsigned short)stringFromString: /* Error: Ran out of types for this method. */;
- (unsigned short)isCustom;
- (unsigned short)isEquivalent: /* Error: Ran out of types for this method. */;
- (unsigned short)stringFromDouble: /* Error: Ran out of types for this method. */;
- (unsigned short)formatName;
- (unsigned short)setFormatName: /* Error: Ran out of types for this method. */;
- (unsigned short)decimalPlaces;
- (unsigned short)showThousandsSeparator;
- (unsigned short)usesAccountingStyle;
- (unsigned short)negativeStyle;
- (unsigned short)fractionAccuracy;
- (unsigned short)hasValidDecimalPlaces;
- (unsigned short)numberFormatBySettingValueType: /* Error: Ran out of types for this method. */;
- (unsigned short)numberFormatBySettingDecimalPlaces: /* Error: Ran out of types for this method. */;
- (unsigned short)numberFormatByIncrementingDecimalPlaces: /* Error: Ran out of types for this method. */;
- (unsigned short)numberFormatBySettingCurrencyCode: /* Error: Ran out of types for this method. */;
- (unsigned short)numberFormatBySettingSuffixString: /* Error: Ran out of types for this method. */;
- (unsigned short)numberFormatBySettingNegativeStyle: /* Error: Ran out of types for this method. */;
- (unsigned short)numberFormatBySettingShowThousandsSeparator: /* Error: Ran out of types for this method. */;
- (unsigned short)numberFormatBySettingFractionAccuracy: /* Error: Ran out of types for this method. */;
- (unsigned short)numberFormatBySettingUseAccountingStyle: /* Error: Ran out of types for this method. */;
- (unsigned short)numberFormatBySettingDecimalPlaces:andNegativeStyle: /* Error: Ran out of types for this method. */;
- (unsigned short)customNumberFormatTokens;
- (unsigned short)suffixString;
- (unsigned short)isTextFormat;
- (unsigned short)canFormatText;
- (unsigned short)usesTextFormatForValue: /* Error: Ran out of types for this method. */;
- (unsigned short)customFormatShouldAutoInsertPercentSymbol;
- (unsigned short)basePlaces;
- (unsigned short)baseUseMinusSign;
- (unsigned short)usesTabs;
- (unsigned short)requiresParensToBeReplacedWithSpacesForDouble: /* Error: Ran out of types for this method. */;
- (unsigned short)stringFromDouble:minimumDecimalPlaces: /* Error: Ran out of types for this method. */;
- (unsigned short)stringFromDouble:decimalPlaces:minimumDecimalPlaces: /* Error: Ran out of types for this method. */;
- (unsigned short)chartLabelStringFromDouble: /* Error: Ran out of types for this method. */;

@end
