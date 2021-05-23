/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OADShapeGeometry.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface OADCustomShapeGeometry : OADShapeGeometry

{
    CsRect_0aefebc6 *mGeometryCoordSpace;
    CsPoint_c846a6ec *mLimo;
    NSMutableArray *mFormulas;
    NSMutableArray *mTextBodyRects;
    NSMutableArray *mPaths;
}

- (id)init;
- (void)dealloc;
- (id)description;
- (int)type;
- (id)pathAtIndex:(unsigned long long)arg1;
- (void)addPath:(id)arg1;
- (unsigned long long)pathCount;
- (id)equivalentCustomGeometry;
- (unsigned long long)textBodyRectCount;
- (id)textBodyRectAtIndex:(unsigned long long)arg1;
- (CsRect_0aefebc6)geometryCoordSpace;
- (void)setGeometryCoordSpace:(CsRect_0aefebc6)arg1;
- (unsigned long long)formulaCount;
- (id)formulaAtIndex:(unsigned long long)arg1;
- (void)addFormula:(id)arg1;
- (void)addTextBodyRect:(id)arg1;
- (void)setLimo:(CsPoint_c846a6ec)arg1;
- (CsPoint_c846a6ec)limo;

@end
