/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

#import <UIKit/UIViewController.h>

@class NSString, SearchUIConfirmationHUDView;

@interface SearchUIConfirmationHUDViewController : UIViewController

@property (retain, nonatomic) SearchUIConfirmationHUDView *view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)setTitle:(id)arg1;
- (_Bool)_canShowWhileLocked;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (long long)preferredUserInterfaceStyle;

@end
