/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class EDFormula, EFTableData, NSString;

@protocol EFHelper;

__attribute__((visibility("hidden")))
@interface EFormula : NSObject

{
    id <EFHelper> mHelper;
    struct EFLexer *mYylex;
    Class mFormulaClass;
    EDFormula *mFormula;
    EFTableData *mTableData;
    NSString *mErrMsg;
}

+ (id)singletonEFormula;
+ (id)stringToFormula:(id)arg1 formulaHelper:(id)arg2 formulaClass:(Class)arg3;

- (void)dealloc;
- (void)setTableData:(id)arg1;
- (id)tableData;
- (unsigned long long)resolveName:(const char *)arg1;
- (unsigned long long)resolveFirstSheet:(id)arg1 lastSheet:(id)arg2;
- (void)setFormula:(id)arg1;
- (void)setFormulaClass:(Class)arg1;
- (void)setFormulaHelper:(id)arg1;
- (id)stringToTokens:(id)arg1;
- (id)formulaHelper;
- (Class)formulaClass;
- (unsigned long long)resolveSheet:(const char *)arg1 isCurrentSheet:(_Bool *)arg2;
- (id)resolveTable:(const char *)arg1 sheetIndex:(unsigned long long *)arg2;

@end
