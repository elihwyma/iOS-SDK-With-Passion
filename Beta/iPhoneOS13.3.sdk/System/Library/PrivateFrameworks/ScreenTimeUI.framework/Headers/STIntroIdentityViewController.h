/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <OnBoardingKit/OBWelcomeController.h>

@class STIntroductionModel;

__attribute__((visibility("hidden")))
@interface STIntroIdentityViewController : OBWelcomeController

{
    STIntroductionModel *_model;
    CDUnknownBlockType _continueHandler;
}

@property (readonly) STIntroductionModel *model;
@property (copy, readonly) CDUnknownBlockType continueHandler;

- (void)loadView;
- (id)initWithIntroductionModel:(id)arg1 continueHandler:(CDUnknownBlockType)arg2;
- (void)_myDevice:(id)arg1;
- (void)_myChildsDevice:(id)arg1;

@end
