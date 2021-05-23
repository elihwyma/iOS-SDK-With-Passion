/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface ECCurrencyConverter : NSObject

{
    NSMutableDictionary *mXlToLassoCurrencyCode;
    NSMutableDictionary *mLassoToXlCurrencyCode;
    NSMutableDictionary *mXlAccountingFormat;
    NSMutableDictionary *mXlToLassoCurrencyCodeBySymbol;
}

+ (id)currencyConverter;

- (void)populateDictionaries;
- (id)lassoCurrencyCodeForDollar;
- (id)lassoCurrencyCodeFromXl:(id)arg1;
- (id)xlCurrencyCodeFromLasso:(id)arg1;
- (int)xlAccountFormatFromLasso:(id)arg1;

@end
