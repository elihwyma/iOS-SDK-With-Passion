/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIViewController.h>

@class PUActivityProgressController;

@interface PHActivityProgressViewController : UIViewController

{
    PUActivityProgressController *_pu_activityProgressController;
    double _progress;
}

@property (nonatomic) double progress;
@property (copy, nonatomic) CDUnknownBlockType cancellationHandler;

- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)_commonPHActivityProgressViewControllerInitialization;

@end
