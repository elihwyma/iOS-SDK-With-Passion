/*
 Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <CorePDF/CPTextObject.h>

@class CPCharSequence, NSArray;

__attribute__((visibility("hidden")))
@interface CPTextLine : CPTextObject

{
    CPCharSequence *charSequence;
    CDStruct_2e2afed4 *wordArray;
    unsigned int wordCount;
    struct CPInlineContainer *inlineList;
    int lineNumber;
    int columnNumber;
    double baseline;
    _Bool baseLineIsNull;
    _Bool hasBeenSplit;
    _Bool hasBeenProcessed;
    _Bool maySplit;
    _Bool hasTabs;
    NSArray *columnBreaks;
    NSArray *xsegments;
    int levels;
    float maximumLetterGap;
    float maximumWordGap;
    int tabsBefore;
    _Bool irregular;
    unsigned int leftSpacerIndex;
    unsigned int rightSpacerIndex;
    _Bool isListItem;
    unsigned int listSpacerIndex;
    _Bool lineBreakAfter;
    struct CPPDFStyle *uniformStyle;
    unsigned short uniformStyleFlags;
    double monospaceWidth;
    unsigned int *spacesBefore;
    _Bool disposed;
}

@property (nonatomic) unsigned int leftSpacerIndex;
@property (nonatomic) unsigned int rightSpacerIndex;
@property (nonatomic) _Bool isListItem;
@property (nonatomic) unsigned int listSpacerIndex;
@property (nonatomic) _Bool lineBreakAfter;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)finalize;
- (id)attributes;
- (struct CGRect)bounds;
- (id)properties;
- (int)levels;
- (void)setLevels:(int)arg1;
- (_Bool)hasBeenProcessed;
- (struct CGPoint)anchor;
- (void)setBaseline:(double)arg1;
- (double)baseline;
- (unsigned int)wordCount;
- (int)align;
- (long long)zOrder;
- (void)fitBoundsToChildren;
- (void)accept:(id)arg1;
- (void)translateObjectYBy:(double)arg1;
- (void)dispose;
- (_Bool)isIndivisible;
- (_Bool)isMonospaced;
- (unsigned int)inlineCount;
- (_Bool)styleIsUniform:(struct CPPDFStyle **)arg1 styleFlags:(unsigned short)arg2;
- (id)charSequence;
- (double)monospaceWidth;
- (_Bool)hasDropCap;
- (struct CPInlineContainer *)inlineList;
- (CDStruct_2e2afed4 *)wordAtIndex:(unsigned int)arg1;
- (unsigned int)spacesBeforeWordAtIndex:(unsigned int)arg1;
- (CDStruct_2e2afed4 *)firstWord;
- (CDStruct_2e2afed4 *)lastWord;
- (void)setCharSequence:(id)arg1;
- (CDStruct_2e2afed4 *)wordArrayOfSize:(unsigned int)arg1;
- (void)recomputeLevels;
- (id)newTextLineFromWordAt:(unsigned int)arg1 lengthInWords:(unsigned int)arg2;
- (void)recomputeBaseline;
- (_Bool)overlapsHorizontally:(struct CGRect)arg1;
- (_Bool)mapToWordsWithIndex:(CDUnknownFunctionPointerType)arg1 passing:(void *)arg2;
- (CDStruct_2e2afed4 *)wordArray;
- (struct CGRect)boundsOfWordAtIndex:(unsigned int)arg1;
- (void)anchorChunk:(id)arg1 atWordIndex:(unsigned int)arg2;
- (_Bool)hasJustifiedAlignment;
- (_Bool)changesFontAt:(id)arg1;
- (_Bool)removeTextLines:(id)arg1 whereTrue:(CDUnknownFunctionPointerType)arg2 passing:(void *)arg3;
- (_Bool)mapToWords:(CDUnknownFunctionPointerType)arg1 passing:(void *)arg2;
- (_Bool)mapToWordPairs:(CDUnknownFunctionPointerType)arg1 passing:(void *)arg2;
- (_Bool)mapToWordPairsWithIndex:(CDUnknownFunctionPointerType)arg1 passing:(void *)arg2;
- (void)setHasBeenSplit:(_Bool)arg1;
- (_Bool)hasBeenSplit;
- (void)setHasBeenProcessed:(_Bool)arg1;
- (id)columnBreaks;
- (void)setColumnBreaks:(id)arg1;
- (void)setHasTabs:(_Bool)arg1;
- (_Bool)hasTabs;
- (void)setTabsBefore:(int)arg1;
- (int)tabsBefore;
- (long long)baseLineAscending:(id)arg1;
- (long long)baseLineDescending:(id)arg1;
- (_Bool)overlapsWith:(id)arg1;
- (_Bool)hyphenated;
- (void)setBaselineToNull;
- (void)setSpaces:(unsigned int)arg1 beforeWordAtIndex:(unsigned int)arg2;
- (float)maximumLetterGap;
- (void)setMaximumLetterGap:(float)arg1;
- (float)maximumWordGap;
- (void)setMaximumWordGap:(float)arg1;
- (_Bool)irregular;
- (void)setIrregular:(_Bool)arg1;
- (long long)topIsAbove:(id)arg1;
- (double)medianFontSize;

@end
