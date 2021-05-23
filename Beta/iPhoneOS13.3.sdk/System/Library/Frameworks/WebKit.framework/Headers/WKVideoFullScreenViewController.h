/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <UIKit/UIViewController.h>

__attribute__((visibility("hidden")))
@interface WKVideoFullScreenViewController : UIViewController

{
    struct WeakObjCPtr<AVPlayerViewController> _avPlayerViewController;
}

- (id).cxx_construct;
- (void)viewDidLoad;
- (_Bool)prefersStatusBarHidden;
- (id)initWithAVPlayerViewController:(id)arg1;

@end
