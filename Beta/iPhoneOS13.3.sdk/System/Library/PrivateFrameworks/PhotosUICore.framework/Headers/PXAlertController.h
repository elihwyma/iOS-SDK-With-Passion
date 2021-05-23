/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIAlertController.h>

@class UIActivityIndicatorView, UIProgressView, UIView, _PXAlertContentViewController;

@interface PXAlertController : UIAlertController

{
    _PXAlertContentViewController *_contentViewController;
    UIActivityIndicatorView *_activityIndicatorView;
    UIProgressView *_progressView;
    UIView *_contentView;
}

@property (retain, nonatomic) UIView *contentView;

+ (id)activityAlertControllerWithTitle:(id)arg1 cancelHandler:(CDUnknownBlockType)arg2;
+ (id)progressAlertControllerWithMessage:(id)arg1;

- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)setProgress:(float)arg1 animated:(_Bool)arg2;

@end
