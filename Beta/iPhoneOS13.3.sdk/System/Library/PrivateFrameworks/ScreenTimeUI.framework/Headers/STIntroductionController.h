/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <Foundation/NSObject.h>

@class NSString, STIntroductionModel, UINavigationController, UIViewController;

__attribute__((visibility("hidden")))
@interface STIntroductionController : NSObject

{
    _Bool _allowParentalControls;
    _Bool _forceParentalControls;
    _Bool _askForRecoveryAppleID;
    _Bool _skipWelcome;
    _Bool _isModalPresentation;
    NSString *_childName;
    NSString *_altDSID;
    CDUnknownBlockType _completionBlock;
    STIntroductionModel *_introductionModel;
    UINavigationController *_navigationController;
}

@property (readonly) STIntroductionModel *introductionModel;
@property (nonatomic) _Bool isModalPresentation;
@property (retain) UINavigationController *navigationController;
@property _Bool allowParentalControls;
@property _Bool forceParentalControls;
@property _Bool askForRecoveryAppleID;
@property (copy) NSString *childName;
@property (copy) NSString *altDSID;
@property _Bool skipWelcome;
@property (copy) CDUnknownBlockType completionBlock;
@property (readonly) UIViewController *initialViewController;

- (id)init;
- (void)presentOverViewController:(id)arg1;
- (id)_viewControllerFollowingViewController:(id)arg1;
- (void)_cancel:(id)arg1;
- (void)_viewControllerCompleted:(id)arg1;

@end
