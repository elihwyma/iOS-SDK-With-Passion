/*
 Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <CorePDF/CPRegion.h>

__attribute__((visibility("hidden")))
@interface CPColumn : CPRegion

{
    _Bool hasCentredParagraph;
    _Bool hasColumnBreak;
    double maxLeftPad;
    double maxRightPad;
    double maxRight;
    double minLeft;
    _Bool complete;
}

@property _Bool complete;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)accept:(id)arg1;
- (struct CGRect)columnBounds;
- (double)leftPad;
- (double)rightPad;
- (double)selectionBottom;
- (void)setHasColumnBreak:(_Bool)arg1;
- (_Bool)isBoxRegion;
- (_Bool)isGraphicalRegion;
- (_Bool)isRowRegion;
- (void)setIsImageRegion:(_Bool)arg1;
- (_Bool)isImageRegion;
- (_Bool)isShapeRegion;
- (double)bottomBaseline;
- (_Bool)hasCentredParagraph;
- (void)setHasCentredParagraph:(_Bool)arg1;
- (double)maxLeftPad;
- (void)setMaxLeftPad:(double)arg1;
- (double)maxRightPad;
- (void)setMaxRightPad:(double)arg1;
- (struct CGRect)paddedBounds;
- (int)outOrder;
- (int)inOrder;

@end
