/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <UIKit/UIViewController.h>

__attribute__((visibility("hidden")))
@interface WKImagePreviewViewController : UIViewController

{
    RetainPtr_f649c0c3 _imageActions;
    RetainPtr_5a40b48a _activatedElementInfo;
    RetainPtr_c27edd19 _image;
    struct RetainPtr<UIImageView> _imageView;
}

- (id).cxx_construct;
- (void)loadView;
- (void)viewDidLayoutSubviews;
- (id)previewActionItems;
- (id)initWithCGImage:(RetainPtr_c27edd19)arg1 defaultActions:(RetainPtr_f649c0c3)arg2 elementInfo:(RetainPtr_5a40b48a)arg3;

@end
