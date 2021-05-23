/*
 Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <Foundation/NSObject.h>

@class CPPage, CPZone, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CPParagraphMaker : NSObject

{
    NSMutableArray *avail;
    NSMutableArray *paragraphs;
    NSMutableArray *compoundedShapesOnPage;
    _Bool spacingSet;
    double currentSpacing;
    CPZone *parent;
    CPPage *page;
}

+ (_Bool)line:(id)arg1 alignsWith:(id)arg2;

- (void)dealloc;
- (void)makeParagraphsIn:(id)arg1;
- (id)paragraphs;
- (_Bool)line:(id)arg1 isDirectlyBelow:(id)arg2;
- (_Bool)line:(id)arg1 isBelow:(id)arg2;
- (int)indexOfUniqueLineBelow:(id)arg1 from:(int)arg2;
- (int)linesThatOverlapLineAt:(int)arg1 between:(double)arg2 and:(double)arg3 from:(int)arg4;
- (_Bool)isGraphicBetween:(id)arg1 and:(id)arg2;
- (unsigned long long)alignmentOf:(id)arg1 and:(id)arg2;
- (_Bool)fitsBelow:(id)arg1 alignment:(unsigned long long)arg2 spacing:(double)arg3 from:(int)arg4;
- (_Bool)spacingOf:(id)arg1 and:(id)arg2 and:(id)arg3 is:(double *)arg4;
- (unsigned long long)alignmentOf:(id)arg1 and:(id)arg2 and:(id)arg3;
- (_Bool)styleOf:(id)arg1 differsFromStyleOf:(id)arg2;
- (_Bool)firstWordOf:(id)arg1 fits:(id)arg2 indent:(double)arg3;
- (_Bool)line:(id)arg1 isAlignedWith:(id)arg2;
- (int)paragraph:(id)arg1 splits:(id)arg2;
- (void)addCompoundedShapesOn:(id)arg1 to:(id)arg2;
- (id)newInitialParagraph;
- (void)addLinesTo:(id)arg1;

@end
