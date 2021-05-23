/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIViewPrintFormatter.h>

@class NSArray;

@interface UITextViewPrintFormatter : UIViewPrintFormatter

{
    struct {
        unsigned int initializedUsedRects:1;
    } _textViewPrintFormatterFlags;
    NSArray *_pageData;
}

- (id)color;
- (void)setColor:(id)arg1;
- (id)text;
- (void)setText:(id)arg1;
- (id)_textView;
- (void)setFont:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (id)font;
- (void)setAttributedText:(id)arg1;
- (id)attributedText;
- (long long)textAlignment;
- (long long)_recalcPageCount;
- (struct CGRect)rectForPageAtIndex:(long long)arg1;
- (void)drawInRect:(struct CGRect)arg1 forPageAtIndex:(long long)arg2;
- (id)_pageData;

@end
