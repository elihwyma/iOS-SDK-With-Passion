/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIViewController.h>

@class UIPrintPreviewViewController;

__attribute__((visibility("hidden")))
@interface _UIPrintPagePreviewImageViewController : UIViewController

{
    UIPrintPreviewViewController *_printPreviewViewController;
    long long _pageIndex;
}

- (id)previewActionItems;
- (id)initWithPageIndex:(long long)arg1 printPreviewViewController:(id)arg2;

@end
