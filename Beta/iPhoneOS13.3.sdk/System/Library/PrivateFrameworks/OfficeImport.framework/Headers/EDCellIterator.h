/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class EDRowBlock, EDRowBlocks;

__attribute__((visibility("hidden")))
@interface EDCellIterator : NSObject

{
    EDRowBlocks *mRowBlocks;
    EDRowBlock *mCurrentRowBlock;
    struct EDRowInfo *mCurrentRowInfo;
    unsigned int mCurrentRowInfoIndex;
    struct EDCellHeader *mCurrentCell;
    unsigned int mCurrentCellIndex;
    unsigned int mDesiredRowNumber;
    unsigned int mDesiredColumnNumber;
}

- (void)dealloc;
- (id)initWithWorksheet:(id)arg1;
- (struct EDCellHeader *)adjacentCell:(int)arg1;
- (struct EDCellHeader *)adjacentCellLeft;
- (struct EDCellHeader *)adjacentCellRight;
- (struct EDCellHeader *)scanToRowNumber:(unsigned int)arg1 columnNumber:(unsigned int)arg2;

@end
