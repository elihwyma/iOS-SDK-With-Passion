/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <QuickLook/QLPreviewPrinter.h>

@class NSObject;

@protocol OS_dispatch_queue, OS_dispatch_semaphore, QLPrintingProtocol;

__attribute__((visibility("hidden")))
@interface QLPreviewItemPrinter : QLPreviewPrinter

{
    NSObject<OS_dispatch_queue> *_accessPrinterQueue;
    NSObject<OS_dispatch_semaphore> *_waitForPrinterSemaphore;
    _Bool _didReceivePrinter;
    id <QLPrintingProtocol> _itemPrinter;
}

@property (retain, nonatomic) id <QLPrintingProtocol> itemPrinter;

- (id)initWithItem:(id)arg1;
- (long long)numberOfPages;
- (id)printer;
- (void)prepareForDrawingPages:(struct _NSRange)arg1;
- (void)drawPageAtIndex:(long long)arg1 inRect:(struct CGRect)arg2;
- (void)_didReceivePrinter:(id)arg1;
- (void)_waitForPrinterSynchronously;

@end
