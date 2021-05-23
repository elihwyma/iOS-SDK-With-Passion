/*
 Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <Foundation/NSObject.h>

@class CPCluster, CPZone, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CPGuideFinder : NSObject

{
    CPZone *contentZone;
    unsigned int countOfWordsInZone;
    double *anchorArray;
    double *rightHandSideArray;
    CDStruct_8db92b66 *crossingWordArray;
    CPCluster *anchors;
    CPCluster *rightHandSides;
    double medianFontSizeOfFirstCharacter;
    double medianFontSizeOfLastCharacter;
    NSMutableArray *gutters;
    NSMutableArray *leftGuides;
    NSMutableArray *rightGuides;
}

+ (_Bool)gutterSeparates:(id)arg1 from:(id)arg2;
+ (void)reclusterPreservingAlignment:(id)arg1;
+ (void)reclusterBetweenGuides:(id)arg1;
+ (_Bool)guideSeparates:(id)arg1 from:(id)arg2;

- (void)dealloc;
- (void)finalize;
- (void)dispose;
- (id)leftGuides;
- (id)rightGuides;
- (id)gutters;
- (id)initWithContentZone:(id)arg1;
- (void)findGutters;
- (void)findGuides;
- (void)markTextLines;
- (void)splitTextLines;
- (_Bool)addStripTo:(id)arg1 bottom:(double)arg2 left:(double)arg3 top:(double)arg4 right:(double)arg5;
- (void)setAlignForWordWithExtent:(CDStruct_8db92b66 *)arg1 stripArray:(id)arg2 stripMax:(double)arg3;
- (void)subdivideStripInto:(id)arg1 from:(double)arg2 to:(double)arg3 borderedBy:(CDStruct_8db92b66 *)arg4 ofCount:(unsigned int)arg5 crossedBy:(CDStruct_8db92b66 *)arg6 ofCount:(unsigned int)arg7;
- (void)getWordEdges;
- (void)findWordEdgeClusters;
- (void)subdivideGutterFrom:(unsigned int)arg1 to:(unsigned int)arg2;
- (void)subdivideLeftGuideAt:(unsigned int)arg1;
- (void)subdivideRightGuideAt:(unsigned int)arg1;
- (_Bool)hasGutters;
- (_Bool)hasLeftGuides;
- (_Bool)hasRightGuides;
- (void)func:(id)arg1 and:(id)arg2 and:(unsigned int)arg3 and:(unsigned int)arg4;
- (void)splitTextLinesAtBorderWords;
- (void)splitTextLinesBetweenBorderWords;
- (double)medianFontSizeOfFirstCharacter;
- (double)medianFontSizeOfLastCharacter;

@end
