/*
 Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <Foundation/NSObject.h>

@class CPRMTable, NSString;

@interface CPRMTableCell : NSObject

{
    NSString *_contents;
    CPRMTableCell *_nextCellInColumn;
    CPRMTableCell *_nextCellInRow;
    CPRMTable *_table;
    struct CGPDFNode *_tableCellNode;
}

@property (readonly) struct CGPDFPage *page;
@property (retain) CPRMTableCell *nextCellInColumn;
@property (retain) CPRMTableCell *nextCellInRow;
@property CPRMTable *table;
@property struct CGPDFNode *tableCellNode;

- (void)dealloc;
- (id)contents;
- (struct CGRect)bounds;
- (struct CGColor *)backgroundColor;
- (unsigned long long)row;
- (unsigned long long)column;

@end
