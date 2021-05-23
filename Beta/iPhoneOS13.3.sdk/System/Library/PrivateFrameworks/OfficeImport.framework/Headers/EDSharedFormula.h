/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/EDFormula.h>

@class EDReference;

__attribute__((visibility("hidden")))
@interface EDSharedFormula : EDFormula

{
    _Bool _forceNonBaseFormula;
    int _rowBaseOrOffset;
    int _columnBaseOrOffset;
    unsigned long long _baseFormulaIndex;
    EDReference *_baseFormulaRange;
}

@property (nonatomic) unsigned long long baseFormulaIndex;
@property (nonatomic) _Bool forceNonBaseFormula;
@property (nonatomic) int rowBaseOrOffset;
@property (nonatomic) int columnBaseOrOffset;
@property (nonatomic, readonly) EDReference *baseFormulaRange;

- (id)init;
- (id)description;
- (id)initWithFormula:(id)arg1;
- (_Bool)isSharedFormula;
- (_Bool)isBaseFormula;
- (void)unarchiveFromData:(struct __CFData *)arg1 offset:(unsigned long long *)arg2;
- (void)archiveByAppendingToMutableData:(struct __CFData *)arg1;
- (id)baseFormulaWithRowBlocks:(id)arg1;
- (_Bool)convertTokensToShared;
- (id)warningWithRowBlocks:(id)arg1;
- (void)updateBaseFormulaRangeWithRow:(int)arg1 column:(int)arg2;

@end
