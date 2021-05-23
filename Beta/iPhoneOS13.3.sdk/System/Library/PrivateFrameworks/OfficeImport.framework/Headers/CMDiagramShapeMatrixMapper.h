/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CMDiagramShapeMapper.h>

__attribute__((visibility("hidden")))
@interface CMDiagramShapeMatrixMapper : CMDiagramShapeMapper

{
    unsigned long long mColumnCount;
    unsigned long long mRowCount;
    float mRectWidth;
    float mRectHeight;
    _Bool mHasArrows;
    _Bool mIsSnake;
    _Bool mIsHorizontal;
    _Bool mIsLinear;
}

- (unsigned long long)columnCount;
- (id)initWithOddDiagram:(id)arg1 drawingContext:(id)arg2 orientedBounds:(id)arg3 identifier:(id)arg4 parent:(id)arg5;
- (struct CGRect)circumscribedBounds;
- (void)mapChildrenAt:(id)arg1 withState:(id)arg2;
- (struct CGSize)sizeForNode:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setColumnsAndRowsCount;
- (struct CGSize)gapSize;
- (double)gapRatio;

@end
