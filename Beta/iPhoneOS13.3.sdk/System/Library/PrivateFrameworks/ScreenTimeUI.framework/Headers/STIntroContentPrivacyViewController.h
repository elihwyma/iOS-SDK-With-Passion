/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <OnBoardingKit/OBWelcomeController.h>

__attribute__((visibility("hidden")))
@interface STIntroContentPrivacyViewController : OBWelcomeController

{
    CDUnknownBlockType _continueHandler;
}

@property (copy, readonly) CDUnknownBlockType continueHandler;

- (void)loadView;
- (void)_continue:(id)arg1;
- (id)initWithContinueHandler:(CDUnknownBlockType)arg1;

@end
