/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBHUDViewController.h>

@interface SBRotationLockHUDViewController : SBHUDViewController

{
    _Bool _locked;
}

@property (nonatomic, getter=isLocked) _Bool locked;

- (id)init;
- (void)_updateLockedImage;

@end
