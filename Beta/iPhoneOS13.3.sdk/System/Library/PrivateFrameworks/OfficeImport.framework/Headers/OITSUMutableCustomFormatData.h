/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OITSUCustomFormatData.h>

@class NSArray, NSIndexSet, NSString;

__attribute__((visibility("hidden")))
@interface OITSUMutableCustomFormatData : OITSUCustomFormatData

@property (copy, nonatomic) NSString *formatString;
@property (copy, nonatomic) NSArray *interstitialStrings;
@property (copy, nonatomic) NSIndexSet *interstitialStringInsertionIndexes;
@property (nonatomic) double scaleFactor;
@property (nonatomic) int fractionAccuracy;
@property (nonatomic) unsigned char minimumIntegerWidth;
@property (nonatomic) unsigned char decimalWidth;
@property (nonatomic) unsigned char numberOfNonSpaceIntegerPlaceholderDigits;
@property (nonatomic) unsigned char numberOfNonSpaceDecimalPlaceholderDigits;
@property (nonatomic) unsigned char indexFromRightOfLastDigitPlaceholder;
@property (nonatomic) unsigned char numberOfHashDecimalPlaceholders;
@property (nonatomic) unsigned char totalNumberOfDecimalPlaceholdersInFormat;
@property (nonatomic) unsigned short currencyCodeIndex;
@property (nonatomic) _Bool showThousandsSeparator;
@property (nonatomic) _Bool useAccountingStyle;
@property (nonatomic) _Bool requiresFractionReplacement;
@property (nonatomic) _Bool isConditional;
@property (nonatomic) _Bool formatContainsIntegerToken;
@property (nonatomic) _Bool isComplexFormat;

+ (id)customFormatData;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
