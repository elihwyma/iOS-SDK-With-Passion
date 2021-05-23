/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface EXFormula : NSObject

+ (id)edFormulaFromXmlFormulaElement:(struct _xmlNode *)arg1 formulaClass:(Class)arg2 state:(id)arg3;
+ (Class)formulaClassFromXmlFormulaElement:(struct _xmlNode *)arg1 state:(id)arg2;
+ (id)readFrom:(struct _xmlNode *)arg1 formulaClass:(Class)arg2 rowNumber:(int)arg3 columnNumber:(int)arg4 edCell:(struct EDCellHeader *)arg5 edRowBlocks:(id)arg6 state:(id)arg7;
+ (void)applyArrayedFormula:(id)arg1 edReference:(id)arg2 edWorksheet:(id)arg3 state:(id)arg4;
+ (id)edTokensForFormulaString:(id)arg1 formulaClass:(Class)arg2 rowNumber:(int)arg3 columnNumber:(int)arg4 sheet:(id)arg5 workbook:(id)arg6;
+ (id)edFormulaFromXmlFormulaElement:(struct _xmlNode *)arg1 state:(id)arg2;
+ (void)readFrom:(struct _xmlNode *)arg1 rowNumber:(int)arg2 columnNumber:(int)arg3 edCell:(struct EDCellHeader *)arg4 edRowBlocks:(id)arg5 state:(id)arg6;
+ (void)applyArrayedFormulasToSheet:(id)arg1 state:(id)arg2;
+ (id)edTokensForFormulaString:(id)arg1 sheet:(id)arg2 workbook:(id)arg3;

@end
