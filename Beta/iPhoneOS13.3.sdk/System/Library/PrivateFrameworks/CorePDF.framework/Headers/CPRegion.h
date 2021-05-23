/*
 Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <CorePDF/CPChunk.h>

__attribute__((visibility("hidden")))
@interface CPRegion : CPChunk

{
    _Bool isTextRegion;
    _Bool isImageRegion;
    _Bool isCompoundShape;
    CPRegion *nextRegion;
    int order;
    id link;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (int)order;
- (id)link;
- (void)setLink:(id)arg1;
- (void)setOrder:(int)arg1;
- (_Bool)isRotated;
- (_Bool)isTextRegion;
- (void)accept:(id)arg1;
- (_Bool)isIndivisible;
- (_Bool)isBoxRegion;
- (_Bool)isGraphicalRegion;
- (_Bool)isRowRegion;
- (void)setIsImageRegion:(_Bool)arg1;
- (_Bool)isImageRegion;
- (_Bool)isShapeRegion;
- (_Bool)isParagraphRegion;
- (_Bool)isListItemRegion;
- (void)setIsTextRegion:(_Bool)arg1;
- (_Bool)isTableCellRegion;
- (_Bool)isBodyZone;
- (_Bool)isCompoundShape;
- (void)setIsCompoundShape:(_Bool)arg1;
- (_Bool)isZone;
- (id)nextRegion;
- (void)setNextRegion:(id)arg1;

@end
