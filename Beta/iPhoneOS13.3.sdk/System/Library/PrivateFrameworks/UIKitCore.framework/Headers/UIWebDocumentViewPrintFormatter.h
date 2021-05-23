/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIViewPrintFormatter.h>

@class UIWebPaginationInfo, WebFrame;

@interface UIWebDocumentViewPrintFormatter : UIViewPrintFormatter

{
    UIWebPaginationInfo *_paginationInfo;
    WebFrame *_frameToPrint;
}

@property (retain, nonatomic) WebFrame *frameToPrint;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)removeFromPrintPageRenderer;
- (long long)_recalcPageCount;
- (struct CGRect)rectForPageAtIndex:(long long)arg1;
- (void)drawInRect:(struct CGRect)arg1 forPageAtIndex:(long long)arg2;
- (id)_webDocumentView;

@end
