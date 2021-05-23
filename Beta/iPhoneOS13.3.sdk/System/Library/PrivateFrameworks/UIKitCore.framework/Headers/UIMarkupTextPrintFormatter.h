/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIPrintFormatter.h>

@class NSString, UIWebDocumentView, UIWebPaginationInfo;

@interface UIMarkupTextPrintFormatter : UIPrintFormatter

{
    UIWebDocumentView *_webDocumentView;
    UIWebPaginationInfo *_paginationInfo;
    NSString *_markupText;
}

@property (copy, nonatomic) NSString *markupText;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)removeFromPrintPageRenderer;
- (id)initWithMarkupText:(id)arg1;
- (long long)_recalcPageCount;
- (struct CGRect)rectForPageAtIndex:(long long)arg1;
- (void)drawInRect:(struct CGRect)arg1 forPageAtIndex:(long long)arg2;

@end
