/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface SBAppSwitcherSnapshotLockoutViewControllerProvider : NSObject

{
    NSMutableArray *_availableControllers;
}

- (id)init;
- (void)dealloc;
- (void)_receivedMemoryWarning:(id)arg1;
- (id)lockoutViewControllerForBundleIdentifier:(id)arg1;
- (void)recycleLockoutViewController:(id)arg1;

@end
