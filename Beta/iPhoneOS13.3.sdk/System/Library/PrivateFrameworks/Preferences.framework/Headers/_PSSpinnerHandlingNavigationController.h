/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <UIKit/UINavigationController.h>

@class NSString;

@interface _PSSpinnerHandlingNavigationController : UINavigationController

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)_removeSpinnerViewControllerIfNeeded;

@end
