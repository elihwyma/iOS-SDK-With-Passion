/*
 Image: /System/Library/Frameworks/VisionKit.framework/VisionKit
 */

#import <UIKit/UIViewController.h>

@class DCCircularProgressView, NSProgress, UIActivityIndicatorView, UILabel;

@protocol DCProgressViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface DCProgressViewController : UIViewController

{
    _Bool _showsCancel;
    NSProgress *_observedProgress;
    id <DCProgressViewControllerDelegate> _progressDelegate;
    UILabel *_label;
    UIActivityIndicatorView *_activityIndicator;
    DCCircularProgressView *_circularProgressView;
}

@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator;
@property (retain, nonatomic) DCCircularProgressView *circularProgressView;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) NSProgress *observedProgress;
@property (nonatomic) _Bool showsCancel;
@property (weak, nonatomic) id <DCProgressViewControllerDelegate> progressDelegate;

- (id)initWithDelegate:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;

@end
