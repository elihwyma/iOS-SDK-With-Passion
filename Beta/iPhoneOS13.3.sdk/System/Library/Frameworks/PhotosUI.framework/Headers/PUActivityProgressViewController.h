/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIViewController.h>

@class PLRoundProgressView;

__attribute__((visibility("hidden")))
@interface PUActivityProgressViewController : UIViewController

{
    PLRoundProgressView *_progressView;
}

- (void)setFractionCompleted:(double)arg1;
- (void)viewDidLoad;
- (id)_progressView;

@end
