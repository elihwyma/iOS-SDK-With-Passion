/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXJSONObject.h>

@class SXDataTableBorderSides, SXDataTableCellStyle, SXDataTableColumnStyle, SXDataTableRowStyle;

@interface SXDataTableStyle : SXJSONObject

@property (nonatomic, readonly) SXDataTableBorderSides *border;
@property (nonatomic, readonly) SXDataTableRowStyle *headerRows;
@property (nonatomic, readonly) SXDataTableColumnStyle *headerColumns;
@property (nonatomic, readonly) SXDataTableCellStyle *headerCells;
@property (nonatomic, readonly) SXDataTableRowStyle *rows;
@property (nonatomic, readonly) SXDataTableColumnStyle *columns;
@property (nonatomic, readonly) SXDataTableCellStyle *cells;

@end
