/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIViewController.h>

@class UISegmentedControl, UISwitch;

@protocol _PXFeedbackTapToRadarViewControllerDelegate;

@interface _PXFeedbackTapToRadarViewController : UIViewController

{
    UISwitch *_screenshotSwitch;
    UISwitch *_diagnoseSwitch;
    id <_PXFeedbackTapToRadarViewControllerDelegate> _delegate;
    UISegmentedControl *_segmentedControl;
}

@property (retain, nonatomic) UISwitch *screenshotSwitch;
@property (retain, nonatomic) UISwitch *diagnoseSwitch;
@property (retain, nonatomic) id <_PXFeedbackTapToRadarViewControllerDelegate> delegate;
@property (retain, nonatomic) UISegmentedControl *segmentedControl;

- (void)viewDidLoad;
- (void)_didSelectCancelButton:(id)arg1;
- (void)_didSelectFileRadarButton:(id)arg1;

@end
