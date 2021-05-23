/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBDashBoardHostedAppViewController.h>

@protocol SBSecureAppViewControllerDelegate;

@interface SBSecureAppViewController : SBDashBoardHostedAppViewController

@property (weak, nonatomic) id <SBSecureAppViewControllerDelegate> delegate;

- (_Bool)handleEvent:(id)arg1;
- (void)configureDisplayLayoutElement:(id)arg1;

@end
