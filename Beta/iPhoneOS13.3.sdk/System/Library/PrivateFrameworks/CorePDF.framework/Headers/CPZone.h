/*
 Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <CorePDF/CPRegion.h>

@class CPCharSequence, CPZoneProfile, NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CPZone : CPRegion

{
    NSMutableArray *zoneBorders;
    struct CGPoint *outerVertices;
    struct CGPoint *swollenOuterVertices;
    double area;
    _Bool isStraddleZone;
    CPZoneProfile *zoneProfile;
    NSArray *leftGuides;
    NSArray *rightGuides;
    NSArray *gutters;
    NSArray *spacers;
    CPCharSequence *charactersInZone;
    NSMutableArray *textLinesInZone;
    NSArray *graphicsInZone;
    NSMutableArray *backgroundGraphics;
    unsigned int usedGraphicCount;
}

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)contains:(id)arg1;
- (double)area;
- (unsigned int)vertexCount;
- (unsigned int)wordCount;
- (id)textLinesInZone;
- (void)accept:(id)arg1;
- (struct CGPoint *)outerVertices;
- (void)incrementUsedGraphicCount;
- (_Bool)isZone;
- (unsigned int)usedGraphicCount;
- (struct CGRect)zoneBounds;
- (struct CGColor *)newBackgroundColor;
- (id)backgroundGraphics;
- (_Bool)mapToWordsWithIndex:(CDUnknownFunctionPointerType)arg1 passing:(void *)arg2;
- (_Bool)mapToWords:(CDUnknownFunctionPointerType)arg1 passing:(void *)arg2;
- (_Bool)mapToWordPairs:(CDUnknownFunctionPointerType)arg1 passing:(void *)arg2;
- (_Bool)mapToWordPairsWithIndex:(CDUnknownFunctionPointerType)arg1 passing:(void *)arg2;
- (_Bool)bordersWindClockwise;
- (_Bool)hasNeighborShape:(id)arg1;
- (_Bool)isRectangular;
- (long long)borderZOrder;
- (long long)neighborZOrder;
- (struct CGRect)zoneBoundsFromVertices:(struct CGPoint *)arg1 ofCount:(unsigned int)arg2;
- (struct CGPoint *)swollenOuterVertices;
- (_Bool)hasBorders;
- (id)zoneBorders;
- (id)graphicsInZone;
- (void)setZoneBorders:(id)arg1;
- (void)removeUnfilledNeighborShapes;
- (struct CGRect)swollenZoneBounds;
- (_Bool)rectangleBordersAtLeft:(id *)arg1 top:(id *)arg2 right:(id *)arg3 bottom:(id *)arg4;
- (_Bool)canContain:(struct CGRect)arg1;
- (void)addPDFChar:(void *)arg1;
- (void)setCharactersInZone:(id)arg1;
- (id)charactersInZone;
- (void)addContentFrom:(id)arg1;
- (long long)compareArea:(id)arg1;
- (_Bool)isStraddleZone;
- (void)setIsStraddleZone:(_Bool)arg1;
- (id)zoneProfile;
- (void)setZoneProfile:(id)arg1;
- (void)setLeftGuides:(id)arg1;
- (id)leftGuides;
- (void)setRightGuides:(id)arg1;
- (id)rightGuides;
- (void)setGutters:(id)arg1;
- (id)gutters;
- (void)setSpacers:(id)arg1;
- (id)spacers;

@end
