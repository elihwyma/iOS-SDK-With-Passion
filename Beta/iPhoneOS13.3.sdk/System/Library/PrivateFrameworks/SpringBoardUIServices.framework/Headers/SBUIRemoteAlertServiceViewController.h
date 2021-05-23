/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

#import <UIKit/UIViewController.h>

#import <SpringBoardUIServices/Swift-Protocol.h>

@interface SBUIRemoteAlertServiceViewController : UIViewController <Swift>

{
    _Bool _hasPreservedInputViews;
    _Bool _hasSentAnimationFence;
}

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;

- (void)dealloc;
- (void)setUserInfo:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (long long)preferredStatusBarStyle;
- (void)synchronizeAnimationsInActions:(CDUnknownBlockType)arg1;
- (void)sb_restoreInputViewsAnimated:(_Bool)arg1;
- (void)prepareForActivationWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_selectorIsOverriden:(SEL)arg1;
- (void)handleButtonActions:(id)arg1;
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleDoubleHeightStatusBarTap;
- (void)noteActivatedForActivityContinuationWithIdentifier:(id)arg1;
- (void)didInvalidateForRemoteAlert;
- (void)sb_becomeFirstResponder;
- (void)sb_resignFirstResponder;
- (void)sb_preserveInputViewsAnimated:(_Bool)arg1;
- (void)sb_presentForAlertAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sb_dismissForAlertAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;

@end
