/*
 Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <Foundation/NSObject.h>

@class CPTable, CPZone;

__attribute__((visibility("hidden")))
@interface CPTableMaker : NSObject

{
    CPZone *tableZone;
    CPTable *table;
    unsigned int cellIndex;
    CDStruct_c3b9c2ee *rowYIntervals;
    CDStruct_c3b9c2ee *columnXIntervals;
}

+ (void)makeTablesInPage:(id)arg1;
+ (void)makeTablesInZone:(id)arg1;
+ (_Bool)isTable:(id)arg1;
+ (void)makeTableFrom:(id)arg1;

- (void)dealloc;
- (id)newBackgroundGraphicArrayFromRectangularZone:(id)arg1;
- (id)newTableCellFromZone:(id)arg1;
- (void)determineRowsAndColumns:(_Bool)arg1;
- (id)initWithZone:(id)arg1;
- (void)makeTable;

@end
