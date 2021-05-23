/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <OnBoardingKit/OBWelcomeController.h>

@protocol STSetupAssistantViewControllerDelegate;

@interface STSetupAssistantViewController : OBWelcomeController

{
    _Bool _hasRestrictionsPasscode;
    id <STSetupAssistantViewControllerDelegate> _delegate;
    long long _state;
}

@property (readonly) long long state;
@property (readonly) _Bool hasRestrictionsPasscode;
@property (weak) id <STSetupAssistantViewControllerDelegate> delegate;

+ (id)new;

- (id)init;
- (void)viewDidLoad;
- (void)_continue:(id)arg1;
- (id)initWithScreenTimeState:(long long)arg1 passcode:(_Bool)arg2;
- (void)_setUpLater:(id)arg1;

@end
