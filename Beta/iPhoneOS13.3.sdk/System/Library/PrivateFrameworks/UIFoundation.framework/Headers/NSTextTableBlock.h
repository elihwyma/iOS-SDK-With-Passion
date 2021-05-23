/*
 Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <UIFoundation/NSTextBlock.h>

@class NSTextTable;

@interface NSTextTableBlock : NSTextBlock

{
    NSTextTable *_table;
    long long _rowNum;
    long long _colNum;
    long long _rowSpan;
    long long _colSpan;
    void *_tableBlockPrimary;
    void *_tableBlockSecondary;
}

+ (void)initialize;
+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)table;
- (void)drawBackgroundWithFrame:(struct CGRect)arg1 inView:(id)arg2 characterRange:(struct _NSRange)arg3 layoutManager:(id)arg4;
- (long long)startingRow;
- (long long)columnSpan;
- (long long)rowSpan;
- (struct CGRect)rectForLayoutAtPoint:(struct CGPoint)arg1 inRect:(struct CGRect)arg2 textContainer:(id)arg3 characterRange:(struct _NSRange)arg4;
- (struct CGRect)boundsRectForContentRect:(struct CGRect)arg1 inRect:(struct CGRect)arg2 textContainer:(id)arg3 characterRange:(struct _NSRange)arg4;
- (id)initWithTable:(id)arg1 startingRow:(long long)arg2 rowSpan:(long long)arg3 startingColumn:(long long)arg4 columnSpan:(long long)arg5;
- (long long)startingColumn;
- (void)_setRowSpan:(long long)arg1;
- (void)_setColumnSpan:(long long)arg1;

@end
