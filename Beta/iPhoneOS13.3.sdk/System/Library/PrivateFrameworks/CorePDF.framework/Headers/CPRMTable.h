/*
 Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface CPRMTable : NSObject

{
    NSMutableArray *_matrix;
    unsigned long long _elementCount;
    NSMutableArray *_rowFirstElements;
    NSMutableArray *_columnFirstElements;
    struct CGPDFLayout *_layout;
    struct CGPDFNode *_tableRoot;
    _Bool _rowOrder;
}

@property (readonly) struct CGPDFPage *page;
@property _Bool rowOrder;

- (void)dealloc;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)dump;
- (struct CGRect)bounds;
- (id)rowAtIndex:(unsigned long long)arg1;
- (unsigned long long)rows;
- (unsigned long long)columns;
- (struct CGPDFLayout *)layout;
- (id)initWithRoot:(struct CGPDFNode *)arg1 layout:(struct CGPDFLayout *)arg2;
- (void)matrixDealloc;
- (id)columnAtIndex:(unsigned long long)arg1;

@end
