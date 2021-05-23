/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

#import <OfficeImport/Swift-Protocol.h>

@class NSArray, NSIndexSet, NSString;

__attribute__((visibility("hidden")))
@interface OITSUCustomFormatData : NSObject <Swift>

{
    unsigned char _minimumIntegerWidth;
    unsigned char _decimalWidth;
    unsigned char _numberOfNonSpaceIntegerPlaceholderDigits;
    unsigned char _numberOfNonSpaceDecimalPlaceholderDigits;
    unsigned char _indexFromRightOfLastDigitPlaceholder;
    unsigned char _numberOfHashDecimalPlaceholders;
    unsigned char _totalNumberOfDecimalPlaceholdersInFormat;
    _Bool _showThousandsSeparator;
    _Bool _useAccountingStyle;
    _Bool _requiresFractionReplacement;
    _Bool _isConditional;
    _Bool _formatContainsIntegerToken;
    _Bool _isComplexFormat;
    unsigned short _currencyCodeIndex;
    int _fractionAccuracy;
    NSString *_formatString;
    NSArray *_interstitialStrings;
    NSIndexSet *_interstitialStringInsertionIndexes;
    double _scaleFactor;
}

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

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)p_copySelfTo:(id)arg1;
- (id)initWithCustomFormatData:(id)arg1;

@end
