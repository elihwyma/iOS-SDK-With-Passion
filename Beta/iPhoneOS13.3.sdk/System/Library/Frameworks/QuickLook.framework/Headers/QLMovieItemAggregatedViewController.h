/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <QuickLook/QLItemAggregatedViewController.h>

@class QLItemViewController;

__attribute__((visibility("hidden")))
@interface QLMovieItemAggregatedViewController : QLItemAggregatedViewController

{
    QLItemViewController *_previewController;
}

- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
