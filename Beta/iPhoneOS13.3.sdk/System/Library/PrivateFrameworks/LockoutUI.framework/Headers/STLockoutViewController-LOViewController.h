/*
 Image: /System/Library/PrivateFrameworks/LockoutUI.framework/LockoutUI
 */

#import <ScreenTimeUI/STLockoutViewController.h>

@class NSString;

@protocol LOViewControllerDelegate;

@interface STLockoutViewController (LOViewController)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, getter=isForSnapshot) _Bool forSnapshot;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (nonatomic, readonly) _Bool didFinishDismissing;
@property (weak, nonatomic) id <LOViewControllerDelegate> viewControllerDelegate;

@end
