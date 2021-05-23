/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoardUIServices/SBUIEmergencyCallHostViewController.h>

@protocol SBLockScreenEmergencyCallViewControllerDelegate;

@interface SBLockScreenEmergencyCallViewController : SBUIEmergencyCallHostViewController

{
    id <SBLockScreenEmergencyCallViewControllerDelegate> _delegate;
}

@property (weak, nonatomic) id <SBLockScreenEmergencyCallViewControllerDelegate> delegate;

- (void)dismiss;
- (_Bool)_canShowWhileLocked;
- (void)setBackgroundStyle:(long long)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (id)tintColorForBackgroundStyle:(long long)arg1 outBlurRadius:(double *)arg2;
- (long long)_wallpaperStyleFromUIBackgroundStyle:(long long)arg1;

@end
