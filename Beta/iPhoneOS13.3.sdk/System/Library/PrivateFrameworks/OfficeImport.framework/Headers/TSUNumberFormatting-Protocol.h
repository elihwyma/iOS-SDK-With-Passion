/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/Swift-Protocol.h>

@protocol TSUNumberFormatting <Swift>

- (unsigned short)currencyCode;
- (unsigned short)scaleFactor;
- (unsigned short)valueType;
- (unsigned short)formatString;
- (unsigned short)base;
- (unsigned short)stringFromString: /* Error: Ran out of types for this method. */;
- (unsigned short)isCustom;
- (unsigned short)isEquivalent: /* Error: Ran out of types for this method. */;
- (unsigned short)formatName;
- (unsigned short)setFormatName: /* Error: Ran out of types for this method. */;
- (unsigned short)decimalPlaces;
- (unsigned short)showThousandsSeparator;
- (unsigned short)usesAccountingStyle;
- (unsigned short)negativeStyle;
- (unsigned short)fractionAccuracy;
- (unsigned short)hasValidDecimalPlaces;
- (unsigned short)customNumberFormatTokens;
- (unsigned short)suffixString;
- (unsigned short)isTextFormat;
- (unsigned short)canFormatText;
- (unsigned short)usesTextFormatForValue: /* Error: Ran out of types for this method. */;
- (unsigned short)customFormatShouldAutoInsertPercentSymbol;
- (unsigned short)basePlaces;
- (unsigned short)baseUseMinusSign;
- (unsigned short)usesTabs;
- (unsigned short)stringFromDouble:locale: /* Error: Ran out of types for this method. */;

@end
