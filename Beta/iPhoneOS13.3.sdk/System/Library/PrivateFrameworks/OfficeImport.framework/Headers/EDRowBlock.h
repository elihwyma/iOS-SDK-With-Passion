/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface EDRowBlock : NSObject

{
    struct __CFData *mPackedData;
    struct __CFData *mCellOffsets;
}

@property (nonatomic, readonly) unsigned int rowCount;
@property (nonatomic, readonly) unsigned int firstRowNumber;
@property (nonatomic, readonly) unsigned int lastRowNumber;
@property (nonatomic, readonly) unsigned int minRowNumber;
@property (nonatomic, readonly) unsigned int maxRowNumber;

+ (id)rowBlock;

- (id)init;
- (void)dealloc;
- (id)description;
- (unsigned long long)index;
- (void)setIndex:(unsigned long long)arg1;
- (struct EDCellHeader *)cellAtIndex:(unsigned int)arg1 rowInfo:(struct EDRowInfo *)arg2;
- (struct EDCellHeader *)cellWithColumnNumber:(unsigned int)arg1 rowInfo:(struct EDRowInfo *)arg2;
- (struct EDRowInfo *)rowInfoWithRowNumber:(unsigned int)arg1;
- (struct EDCellHeader *)addCellWithColumnNumber:(unsigned int)arg1 type:(int)arg2 isFormulaCell:(_Bool)arg3 rowInfo:(struct EDRowInfo **)arg4 rowBlocks:(id)arg5;
- (void)unarchiveFromData:(struct __CFData *)arg1 offset:(unsigned long long *)arg2;
- (void)archiveByAppendingToMutableData:(struct __CFData *)arg1;
- (unsigned int)indexOfRowInfoWithRowNumber:(unsigned int)arg1;
- (struct EDRowInfo *)rowInfoAtIndex:(unsigned int)arg1;
- (unsigned int)expectedIndexOfCellWithColumnNumber:(unsigned int)arg1 rowInfo:(struct EDRowInfo *)arg2;
- (void)doneWithContent;
- (struct EDRowInfo *)rowInfoWithRowNumber:(unsigned int)arg1 createIfNil:(_Bool)arg2;
- (struct EDRowInfo *)addRowInfoWithRowNumber:(unsigned int)arg1 cellCountHint:(unsigned int)arg2;
- (unsigned int)indexOfCellWithColumnNumber:(unsigned int)arg1 rowInfo:(struct EDRowInfo *)arg2;
- (void)removeCellAtIndex:(unsigned int)arg1 rowInfo:(struct EDRowInfo **)arg2;
- (unsigned long long)startOfCellsOrThrow;
- (void)checkCellOffsetOrThrow:(unsigned long long)arg1;
- (void)incrementIndex;

@end
