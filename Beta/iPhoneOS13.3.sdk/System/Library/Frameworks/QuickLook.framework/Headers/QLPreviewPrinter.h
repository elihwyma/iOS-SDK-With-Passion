/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <UIPrintPageRenderer.h>

@protocol QLPrintingProtocol;

__attribute__((visibility("hidden")))
@interface QLPreviewPrinter : UIPrintPageRenderer

{
    id <QLPrintingProtocol> _printer;
}

@property (readonly) id <QLPrintingProtocol> printer;

- (long long)numberOfPages;
- (void)prepareForDrawingPages:(struct _NSRange)arg1;
- (void)drawPageAtIndex:(long long)arg1 inRect:(struct CGRect)arg2;
- (id)initWithPreviewPrinter:(id)arg1;

@end
