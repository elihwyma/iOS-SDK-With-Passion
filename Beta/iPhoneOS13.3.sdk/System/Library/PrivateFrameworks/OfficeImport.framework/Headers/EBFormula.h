/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface EBFormula : NSObject

+ (id)edFormulaFromXlFmlaDefinition:(const void *)arg1 withFormulaLength:(int)arg2 formulaClass:(Class)arg3 state:(id)arg4;
+ (void)readFormulaFromXlCell:(struct XlCell *)arg1 edCell:(struct EDCellHeader *)arg2 edRowBlocks:(id)arg3 state:(id)arg4;
+ (id)edFormulaFromXlFmlaDefinition:(const void *)arg1 withFormulaLength:(int)arg2 state:(id)arg3;
+ (void)setupTokensInEDFormulaFromXlFormulaProcessor:(struct XlFormulaProcessor *)arg1 length:(int)arg2 edFormula:(id)arg3 edSheet:(id)arg4;
+ (id)edFormulaFromXlFmlaDefinition:(const void *)arg1 withTokenLength:(int)arg2 formulaLength:(int)arg3 formulaClass:(Class)arg4 edSheet:(id)arg5 state:(id)arg6;
+ (struct XlFormulaInfo *)xlFormulaInfoFromEDSharedFormula:(id)arg1 state:(id)arg2;
+ (char *)edFormulaToParsedExpression:(id)arg1 tokenLength:(unsigned short *)arg2 formulaLength:(unsigned short *)arg3 state:(id)arg4;
+ (struct XlFormulaInfo *)xlFormulaInfoFromEDFormula:(id)arg1 state:(id)arg2;
+ (unsigned int)writeToken:(id)arg1 tokenIndex:(unsigned int)arg2 tokenStream:(struct XLFormulaStream *)arg3 extendedStream:(struct XLFormulaStream *)arg4 state:(id)arg5;

@end
