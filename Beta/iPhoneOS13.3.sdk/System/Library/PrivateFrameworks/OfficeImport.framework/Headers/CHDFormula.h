/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/EDFormula.h>

@class EDReferenceCollection, EDWorkbook;

__attribute__((visibility("hidden")))
@interface CHDFormula : EDFormula

{
    EDReferenceCollection *mReferences;
    EDWorkbook *mWorkbook;
}

+ (id)formulaWithReferences:(id)arg1;
+ (id)formulaWithReference:(id)arg1;

- (id)initWithReference:(id)arg1;
- (id)references;
- (void)setReferences:(id)arg1;
- (void)setWorkbook:(id)arg1;
- (unsigned long long)countOfCellsBeingReferenced;
- (id)initWithReferences:(id)arg1;
- (id)referencesFromFormula;
- (_Bool)isConstantStringFormula;
- (id)constantValuesFromConstantStringFormula;
- (void)prepareTokens;
- (id)initWithWorkbook:(id)arg1;

@end
