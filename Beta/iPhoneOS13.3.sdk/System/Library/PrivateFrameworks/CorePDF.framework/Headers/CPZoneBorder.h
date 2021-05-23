/*
 Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <Foundation/NSObject.h>

@class CPPage, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CPZoneBorder : NSObject

{
    struct CGRect bounds;
    CPPage *page;
    NSMutableArray *ownerArray;
    NSMutableArray *graphicObjects;
    NSMutableArray *neighbors;
    NSMutableArray *intersections;
    _Bool isHorizontal;
    _Bool hasForwardVector;
    _Bool hasBackwardVector;
    double overhangMin;
    double overhangMax;
}

+ (void)outerVertices:(struct CGPoint *)arg1 fromBorders:(id)arg2 swollenBy:(double)arg3;
+ (int)clockwiseWindingNumberOfShapeWithBorders:(id)arg1;
+ (void)addIntersectionBetweenBorder:(id)arg1 andBorder:(id)arg2 atRect:(struct CGRect)arg3;
+ (struct CGRect)extendRect:(struct CGRect)arg1;
+ (void)removeIntersectionBetweenBorder:(id)arg1 andBorder:(id)arg2;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct CGRect)bounds;
- (void)setBounds:(struct CGRect)arg1;
- (_Bool)isVertical;
- (id)page;
- (_Bool)isHorizontal;
- (void)combine:(id)arg1;
- (id)neighborAtIndex:(unsigned int)arg1;
- (long long)zOrder;
- (long long)compareXBounds:(id)arg1;
- (long long)compareYBounds:(id)arg1;
- (id)initSuper;
- (unsigned int)graphicObjectCount;
- (id)graphicObjectAtIndex:(unsigned int)arg1;
- (_Bool)hasNeighborShape:(id)arg1;
- (unsigned int)indexOfIntersectionWith:(id)arg1;
- (unsigned int)neighborCount;
- (_Bool)hasNeighborShape:(id)arg1 atSide:(int)arg2;
- (id)graphicObjects;
- (void)addGraphicObject:(id)arg1;
- (unsigned int)intersectionCount;
- (_Bool)windsClockwiseOnto:(id)arg1;
- (_Bool)continues:(id)arg1;
- (id)getNextBorder:(unsigned int)arg1;
- (_Bool)extractCycleTo:(id)arg1 goingForward:(_Bool)arg2 throughIntersectionIndex:(unsigned int)arg3 returningTo:(id)arg4 atRect:(struct CGRect *)arg5;
- (id)copyWithoutIntersections;
- (_Bool)hasClockwiseVectorAtIndex:(unsigned int)arg1 startingForward:(_Bool)arg2;
- (_Bool)hasCounterclockwiseVectorAtIndex:(unsigned int)arg1 startingForward:(_Bool)arg2;
- (void)addToArray:(id)arg1;
- (void)trimToLastIntersections;
- (void)addNeighbor:(id)arg1;
- (void)removeFromArray;
- (void)removeLooseThreadsStartingFrom:(id)arg1;
- (id)initWithGraphicObject:(id)arg1;
- (void)addToArray:(id)arg1 atIndex:(unsigned int)arg2;
- (void)removeFromArrayAtIndex:(unsigned int)arg1;
- (id)ownerArray;
- (void)removeGraphicObjectAtIndex:(unsigned int)arg1;
- (void)removeNeighborAtIndex:(unsigned int)arg1;
- (void)setHasForwardVector:(_Bool)arg1;
- (_Bool)hasForwardVector;
- (void)setHasBackwardVector:(_Bool)arg1;
- (_Bool)hasBackwardVector;
- (void)setSide:(int)arg1 ofPage:(id)arg2;
- (_Bool)intersectsWith:(id)arg1 atRect:(struct CGRect *)arg2;
- (void)instantiateVectors;
- (_Bool)hasVectorGoingForward:(_Bool)arg1 startingAtIndex:(unsigned int *)arg2;
- (_Bool)extractCycleTo:(id)arg1 goingForward:(_Bool)arg2 startingAtIndex:(unsigned int)arg3;
- (_Bool)crosses:(id)arg1;

@end
