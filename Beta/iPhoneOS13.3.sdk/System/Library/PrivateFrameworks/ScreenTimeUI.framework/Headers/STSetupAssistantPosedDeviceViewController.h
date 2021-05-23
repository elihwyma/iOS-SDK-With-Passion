/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <UIKit/UIViewController.h>

@class STSetupAssistantUsageDetailsCoordinator, STWeeklyReportViewController, UIImageView, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface STSetupAssistantPosedDeviceViewController : UIViewController

{
    _Bool _isiPad;
    long long _deviceSize;
    STSetupAssistantUsageDetailsCoordinator *_coordinator;
    STWeeklyReportViewController *_reportViewController;
    UIImageView *_deviceWithScreenImageView;
    UILabel *_screenTimeLabel;
    UILabel *_manageScreenTimeLabel;
    UIView *_screenTimeLabelTopLayoutGuide;
    UIView *_manageScreenTimeLabelBottomLayoutGuide;
}

@property (readonly) _Bool isiPad;
@property (readonly) long long deviceSize;
@property (readonly) STSetupAssistantUsageDetailsCoordinator *coordinator;
@property (readonly) STWeeklyReportViewController *reportViewController;
@property (retain) UIImageView *deviceWithScreenImageView;
@property (retain) UILabel *screenTimeLabel;
@property (retain) UILabel *manageScreenTimeLabel;
@property (retain) UIView *screenTimeLabelTopLayoutGuide;
@property (retain) UIView *manageScreenTimeLabelBottomLayoutGuide;

- (id)initWithCoder:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;
- (_Bool)_isRTL;
- (void)_stSetupAssistantPosedDeviceViewControllerCommonInit;
- (id)_deviceWithScreenImage;
- (double)_screenTimeTopOffset;
- (double)_screenTimeLeadingOffset;
- (double)_screenTimeTrailingOffset;
- (id)_deviceBezelImageName;
- (double)_notificationWidth;
- (double)_notificationTopOffset;

@end
