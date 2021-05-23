/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CMMapper.h>

@class OADTable, OADTableRow;

__attribute__((visibility("hidden")))
@interface PMTableRowMapper : CMMapper

{
    OADTable *mTable;
    OADTableRow *mRow;
    unsigned long long mRowIndex;
}

- (float)height;
- (unsigned long long)cellCount;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (id)initWithOadTable:(id)arg1 rowIndex:(unsigned long long)arg2 parent:(id)arg3;

@end
