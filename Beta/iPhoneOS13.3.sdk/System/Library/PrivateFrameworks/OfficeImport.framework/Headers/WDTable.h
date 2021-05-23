/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/WDBlock.h>

@class NSMutableArray, WDTableProperties;

__attribute__((visibility("hidden")))
@interface WDTable : WDBlock

{
    WDTableProperties *mProperties;
    NSMutableArray *mRows;
}

- (id)description;
- (int)nestingLevel;
- (unsigned long long)rowCount;
- (id)properties;
- (void)clearProperties;
- (id)initWithText:(id)arg1;
- (id)rowAt:(unsigned long long)arg1;
- (id)insertRowAtIndex:(unsigned long long)arg1;
- (int)blockType;
- (id)addRow;
- (id)runIterator;
- (id)newRunIterator;
- (id)rowIterator;
- (id)newRowIterator;
- (void)clearRows;
- (id)cellIterator;
- (id)newCellIterator;

@end
