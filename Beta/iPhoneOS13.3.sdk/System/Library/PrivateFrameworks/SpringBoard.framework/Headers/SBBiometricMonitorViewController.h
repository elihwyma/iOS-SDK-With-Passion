/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIViewController.h>

@class SBBiometricMonitorView;

@interface SBBiometricMonitorViewController : UIViewController

@property (retain, nonatomic, readonly) SBBiometricMonitorView *monitorView;

- (void)loadView;

@end
