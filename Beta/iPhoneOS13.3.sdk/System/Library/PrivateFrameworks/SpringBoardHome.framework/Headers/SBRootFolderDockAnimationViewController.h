/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <UIKit/UIViewController.h>

@interface SBRootFolderDockAnimationViewController : UIViewController

{
    long long _forcedInterfaceOrientation;
}

@property (nonatomic) long long forcedInterfaceOrientation;

- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;

@end
