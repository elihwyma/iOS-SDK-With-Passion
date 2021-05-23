/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, WDTable, WDTableRowProperties;

__attribute__((visibility("hidden")))
@interface WDTableRow : NSObject

{
    unsigned long long mIndex;
    WDTableRowProperties *mProperties;
    NSMutableArray *mCells;
    WDTable *mTable;
}

@property (weak, readonly) WDTable *table;

- (id)description;
- (unsigned long long)index;
- (id)properties;
- (void)setIndex:(unsigned long long)arg1;
- (unsigned long long)cellCount;
- (id)cellAt:(unsigned long long)arg1;
- (id)addCell;
- (id)initWithTable:(id)arg1 at:(unsigned long long)arg2;
- (id)addCellWithIndex:(unsigned long long)arg1;
- (id)cellIterator;
- (id)newCellIterator;

@end
