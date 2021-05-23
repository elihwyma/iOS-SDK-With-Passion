/*
 Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <UIFoundation/NSTextBlock.h>

@interface NSTextTable : NSTextBlock

{
    unsigned long long _numCols;
    unsigned long long _tableFlags;
    id _lcache;
    void *_tablePrimary;
    void *_tableSecondary;
}

+ (void)initialize;
+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)numberOfColumns;
- (void)_takeValuesFromTextBlock:(id)arg1;
- (struct CGRect)rectForBlock:(id)arg1 layoutAtPoint:(struct CGPoint)arg2 inRect:(struct CGRect)arg3 textContainer:(id)arg4 characterRange:(struct _NSRange)arg5;
- (struct CGRect)boundsRectForBlock:(id)arg1 contentRect:(struct CGRect)arg2 inRect:(struct CGRect)arg3 textContainer:(id)arg4 characterRange:(struct _NSRange)arg5;
- (void)drawBackgroundForBlock:(id)arg1 withFrame:(struct CGRect)arg2 inView:(id)arg3 characterRange:(struct _NSRange)arg4 layoutManager:(id)arg5;
- (_Bool)collapsesBorders;
- (id)_rowArrayForBlock:(id)arg1 atIndex:(unsigned long long)arg2 text:(id)arg3 layoutManager:(id)arg4 containerWidth:(double)arg5 withRepetitions:(_Bool)arg6 collapseBorders:(_Bool)arg7 rowCharRange:(struct _NSRange *)arg8 indexInRow:(unsigned long long *)arg9 startingRow:(long long *)arg10 startingColumn:(long long *)arg11 previousRowBlockHelper:(id *)arg12;
- (struct CGRect)_contentRectForCharRange:(struct _NSRange)arg1 textContainer:(id)arg2;
- (_Bool)hidesEmptyCells;
- (_Bool)_missingColumnsForRowRange:(struct _NSRange)arg1 blockIndex:(unsigned long long)arg2 text:(id)arg3;
- (void)setNumberOfColumns:(unsigned long long)arg1;
- (void)setCollapsesBorders:(_Bool)arg1;
- (void)setHidesEmptyCells:(_Bool)arg1;
- (unsigned long long)layoutAlgorithm;
- (void)setLayoutAlgorithm:(unsigned long long)arg1;
- (unsigned long long)_tableFlags;
- (void)_setTableFlags:(unsigned long long)arg1;
- (id)_descriptionAtIndex:(unsigned long long)arg1 text:(id)arg2;

@end
