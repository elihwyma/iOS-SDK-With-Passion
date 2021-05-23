/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <OnBoardingKit/OBWelcomeController.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface STIntroWelcomeViewController : OBWelcomeController

{
    NSString *_childName;
    CDUnknownBlockType _continueHandler;
}

@property (copy, readonly) NSString *childName;
@property (copy, readonly) CDUnknownBlockType continueHandler;

- (void)loadView;
- (void)_continue:(id)arg1;
- (id)initWithChildName:(id)arg1 continueHandler:(CDUnknownBlockType)arg2;

@end
