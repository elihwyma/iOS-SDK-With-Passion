/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class EDCollection, EDWorksheet, NSMutableArray, NSRecursiveLock, NSString;

__attribute__((visibility("hidden")))
@interface EDRowBlocks : NSObject

{
    EDWorksheet *mWorksheet;
    NSMutableArray *mRowBlocks;
    EDCollection *mFormulas;
    unsigned int mMaxPopulatedRow;
    unsigned int mMaxPopulatedColumn;
    NSString *mFileName;
    int mLockCount;
    NSRecursiveLock *mSaveLoadLock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)load;
- (void)lock;
- (void)unlock;
- (void)save;
- (void)flush;
- (struct EDCellHeader *)cellWithRowNumber:(unsigned int)arg1 columnNumber:(int)arg2;
- (unsigned long long)rowBlockCount;
- (unsigned int)maxPopulatedRow;
- (id)rowBlockForRowNumber:(unsigned int)arg1 currentRowBlock:(id)arg2 createIfNil:(_Bool)arg3;
- (unsigned long long)expectedIndexOfRowBlockForRowNumber:(unsigned int)arg1;
- (id)rowBlockAtIndex:(unsigned long long)arg1;
- (void)updateMaxPopulatedRow:(unsigned int)arg1 column:(unsigned int)arg2;
- (_Bool)spaceForRowNumber:(unsigned int)arg1 rowBlock:(id)arg2;
- (id)rowBlockForRowNumber:(unsigned int)arg1 currentRowBlock:(id)arg2;
- (id)initWithWorksheet:(id)arg1;
- (void)removeRowBlockAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfRowBlockForRowNumber:(unsigned int)arg1;
- (unsigned int)maxPopulatedColumn;
- (id)formulas;
- (id)fileNameForPersistingRowBlocksWithIndex:(unsigned long long)arg1;
- (id)fileNameForPersistingRowBlocks;
- (Class)classForFormulaType:(unsigned char)arg1;
- (unsigned char)formulaTypeForFormula:(id)arg1;

@end
