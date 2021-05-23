/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface ECFormulaProcessor : NSObject

{
    struct XlFormulaProcessor *mXlFormulaProcessorLasso;
    struct XlFormulaProcessor *mXlFormulaProcessorXl;
    struct XlNameTable *mXlNameTable;
    ChVector_cc6fdd32 *mLassoSheetNames;
    ChVector_cc6fdd32 *mXlSheetNames;
    struct XlLinkTable *mXlLinkTable;
}

+ (id)formulaStringForEDFormula:(id)arg1 edWorksheet:(id)arg2 xlFormulaProcessor:(struct XlFormulaProcessor *)arg3;

- (id)init;
- (void)dealloc;
- (ChVector_cc6fdd32 *)sheetNamesFromWorkbook:(id)arg1;
- (struct XlFormulaProcessor *)setupWithWorkbook:(id)arg1 xlNameTable:(struct XlNameTable *)arg2 sheetNames:(ChVector_cc6fdd32 *)arg3 xlLinkTable:(struct XlLinkTable *)arg4 lassoSyntax:(_Bool)arg5;
- (void)setupWithWorkbook:(id)arg1;
- (struct XlFormulaProcessor *)xlFormulaProcessorLasso;
- (struct XlFormulaProcessor *)xlFormulaProcessorXl;

@end
