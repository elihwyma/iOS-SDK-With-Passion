/*
 Image: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
 */

#import <OnBoardingKit/OBNavigationController.h>

__attribute__((visibility("hidden")))
@interface OBPrivacyModalNavigationController : OBNavigationController

{
    _Bool _darkMode;
    CDUnknownBlockType _dismissButtonPressedHandler;
}

@property (copy) CDUnknownBlockType dismissButtonPressedHandler;
@property (nonatomic, getter=isDarkMode) _Bool darkMode;

- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredUserInterfaceStyle;
- (void)_doneButtonPressed;
- (void)addDismissButtonWithPressedHandler:(CDUnknownBlockType)arg1;

@end
