/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <NSObject.h>

@class NSString, QLItem, QLPreviewPrinter;

__attribute__((visibility("hidden")))
@interface QLActivityItemProvider : NSObject

{
    QLPreviewPrinter *_printer;
    QLItem *_activityPreviewItem;
}

@property (retain) QLPreviewPrinter *printer;
@property (retain) QLItem *activityPreviewItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2;
- (id)printInfo;
- (id)activityViewControllerPlaceholderItems:(id)arg1;
- (id)mainItem;
- (id)_pdfPreviewDataAtURL:(id)arg1;

@end
