/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface ECCurrencyEntry : NSObject

{
    NSString *mLassoCurrencyCode;
    NSString *mXlLangId;
    NSString *mXlCurrencySymbol;
    _Bool mAppliesToExport;
    int mXlAccountingFormat;
}

+ (id)currencyWithLassoCode:(id)arg1 langId:(int)arg2 xlSymbol:(id)arg3;
+ (id)currencyWithLassoCode:(id)arg1 langId:(int)arg2 xlSymbol:(id)arg3 accountingFormat:(int)arg4;
+ (id)currencyWithLassoCode:(id)arg1 langId:(int)arg2 xlSymbol:(id)arg3 isExport:(_Bool)arg4;
+ (id)currencyWithLassoCode:(id)arg1 langId:(int)arg2 xlSymbol:(id)arg3 isExport:(_Bool)arg4 accountingFormat:(int)arg5;

- (id)initWithLassoCode:(id)arg1 langId:(int)arg2 xlSymbol:(id)arg3 isExport:(_Bool)arg4 accountingFormat:(int)arg5;

@end
