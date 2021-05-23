/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <UIKit/UIViewController.h>

@class NSArray, UIImageView, _WKActivatedElementInfo;

@interface _SFQRImagePreviewViewController : UIViewController

{
    UIImageView *_imageView;
    NSArray *_imageActions;
    _WKActivatedElementInfo *_activatedElementInfo;
}

- (void)loadView;
- (id)previewActionItems;
- (id)_contentViewSubtitleWithAction:(id)arg1;
- (id)initWithImage:(id)arg1 defaultActions:(id)arg2 elementInfo:(id)arg3;

@end
