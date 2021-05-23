/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface OITSUHTMLTable : NSObject

{
    NSMutableDictionary *_columnAttributes;
    NSMutableDictionary *_rowClasses;
    NSMutableDictionary *_cellAttributes;
    NSMutableArray *_columnHeaders;
    NSMutableArray *_rows;
    unsigned long long _rowClassStride;
}

@property (nonatomic, readonly) unsigned long long lastRowIndex;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic) unsigned long long rowClassStride;

+ (id)_keyForCell:(unsigned long long)arg1:(unsigned long long)arg2;
+ (id)_attributesStringFromAttributes:(id)arg1;
+ (id)htmlTable;

- (id)init;
- (void)dealloc;
- (void)enumerateRowsUsingBlock:(CDUnknownBlockType)arg1;
- (void)addRowWithCellMarkup:(id)arg1;
- (void)setClass:(id)arg1 ofColumnIndex:(unsigned long long)arg2;
- (unsigned long long)indexOfColumnWithTitle:(id)arg1;
- (id)markup;
- (void)addRowWithCellText:(id)arg1;
- (void)setColumnClasses:(id)arg1;
- (void)setRowClass:(id)arg1 atRowIndex:(unsigned long long)arg2;
- (void)setColumnHeaders:(id)arg1;
- (void)setCellMarkup:(id)arg1 atRowIndex:(unsigned long long)arg2 columnIndex:(unsigned long long)arg3;
- (void)setCellAttributes:(id)arg1 rowIndex:(unsigned long long)arg2 columnIndex:(unsigned long long)arg3;
- (void)deleteColumnWithTitle:(id)arg1;

@end
