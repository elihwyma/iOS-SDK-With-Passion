/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class EDFormula, EDString, NSString, OITSUPointerKeyDictionary;

__attribute__((visibility("hidden")))
@interface EDName : NSObject

{
    NSString *_formulaString;
    OITSUPointerKeyDictionary *_maxWorksheetReferences;
    EDString *_nameString;
    EDFormula *_formula;
    unsigned long long _sheetIndex;
}

@property (retain, nonatomic) EDString *nameString;
@property (nonatomic, readonly) _Bool isInternalFunction;
@property (nonatomic, readonly) NSString *internalFunctionName;
@property (nonatomic, readonly) EDFormula *formula;
@property (nonatomic) unsigned long long sheetIndex;
@property (nonatomic, readonly) OITSUPointerKeyDictionary *maxWorksheetReferences;

+ (id)name;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (_Bool)isEqualToString:(id)arg1;
- (_Bool)isEqualToEDName:(id)arg1;
- (void)setFormula:(id)arg1 workbook:(id)arg2;
- (id)formulaString;
- (void)setFormulaString:(id)arg1 workbook:(id)arg2;

@end
