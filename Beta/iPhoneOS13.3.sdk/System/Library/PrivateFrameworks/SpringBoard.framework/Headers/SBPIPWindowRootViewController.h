/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIViewController.h>

@class NSArray, NSHashTable, NSMapTable, NSMutableArray, NSString;

@interface SBPIPWindowRootViewController : UIViewController

{
    NSMutableArray *_containerViewControllers;
    NSHashTable *_interfaceOrientationLockHashTable;
    NSMapTable *_containerViewControllerRequiredInterfaceOrientationMapTable;
    long long _activeInterfaceOrientation;
}

@property (nonatomic) long long activeInterfaceOrientation;
@property (nonatomic, readonly) NSArray *containerViewControllers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (_Bool)shouldAutorotate;
- (long long)_overrideInterfaceOrientationMechanics;
- (void)activeInterfaceOrientationWillChangeToOrientation:(long long)arg1;
- (void)activeInterfaceOrientationDidChangeToOrientation:(long long)arg1 willAnimateWithDuration:(double)arg2 fromOrientation:(long long)arg3;
- (long long)_overrideWindowActiveInterfaceOrientation;
- (long long)interfaceOrientationForContainerViewController:(id)arg1;
- (void)containerViewControllerAcquireInterfaceOrientationLock:(id)arg1;
- (void)containerViewControllerRelinquishInterfaceOrientationLock:(id)arg1;
- (void)containerViewControllerRequiredInterfaceOrientationDidChange:(id)arg1;
- (void)addContainerViewController:(id)arg1;
- (void)removeContainerViewController:(id)arg1;
- (void)_layoutInterfaceOrientationUnlockedContainerViewControllers;
- (long long)_requiredInterfaceOrientationForContainerViewController:(id)arg1;
- (void)_layoutContainerViewControllers:(id)arg1;
- (long long)_interfaceOrientationForContainerViewController:(id)arg1;

@end
