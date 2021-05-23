/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBLockOverlayViewController.h>

@class NSString, SBLockScreenTemperatureWarningView;

@interface SBLockScreenTemperatureWarningViewController : SBLockOverlayViewController

{
    SBLockScreenTemperatureWarningView *_warningView;
}

@property (weak, nonatomic, readonly) NSString *slideToUnlockText;

- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
