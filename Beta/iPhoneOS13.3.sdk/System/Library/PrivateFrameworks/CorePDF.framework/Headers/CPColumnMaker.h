/*
 Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <Foundation/NSObject.h>

@class CPZone, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CPColumnMaker : NSObject

{
    NSMutableArray *columns;
    CPZone *currentZone;
    NSMutableArray *allParagraphs;
    NSMutableArray *thinHorizontalShapes;
    NSMutableArray *otherShapes;
    NSMutableArray *images;
    NSMutableArray *paragraphWrappers;
    struct CGRect pageBounds;
    double maxParagraphDistance;
}

@property struct CGRect pageBounds;

- (id)init;
- (void)dealloc;
- (id)columns;
- (void)makeColumnsFrom:(id)arg1 zone:(id)arg2;
- (_Bool)paragraph:(id)arg1 isAbove:(id)arg2;
- (_Bool)paragraph:(id)arg1 isBelow:(id)arg2;
- (id)paragraphAbove:(id)arg1 in:(id)arg2;
- (_Bool)paragraph:(id)arg1 isLinkedBelowTo:(id)arg2;
- (void)intersectionCallout:(id)arg1;
- (double)averageSpacing:(id)arg1;
- (_Bool)closeImagesBetween:(id)arg1 and:(id)arg2 bounds:(struct CGRect)arg3;
- (void)partitionShapes:(id)arg1;
- (void)callOuts;
- (_Bool)canSafelyAdd:(id)arg1 to:(id)arg2;
- (void)splitColumns:(id)arg1;
- (void)anchorImages;
- (_Bool)intervalOverlapLeft:(double)arg1 right:(double)arg2 paragraphs:(id)arg3;
- (_Bool)cuttingShapeBetween:(id)arg1 and:(id)arg2;
- (_Bool)paragraph:(id)arg1 notOnSameShapeAs:(id)arg2;
- (id)paragraphBelow:(id)arg1 in:(id)arg2;
- (id)chunkAbove:(id)arg1 in:(id)arg2;
- (_Bool)column:(id)arg1 isLinkedBelowTo:(id)arg2;

@end
