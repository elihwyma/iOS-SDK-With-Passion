/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <ScreenTimeUI/STTableWelcomeController.h>

@class OBBoldTrayButton, STIntroAppLimitsTableViewController, STIntroductionModel;

__attribute__((visibility("hidden")))
@interface STIntroAppLimitsViewController : STTableWelcomeController

{
    STIntroductionModel *_model;
    CDUnknownBlockType _continueHandler;
    OBBoldTrayButton *_setAppLimitButton;
}

@property (readonly) STIntroductionModel *model;
@property (copy, readonly) CDUnknownBlockType continueHandler;
@property (retain) OBBoldTrayButton *setAppLimitButton;
@property (retain, nonatomic) STIntroAppLimitsTableViewController *tableViewController;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)loadView;
- (void)_setAppLimit:(id)arg1;
- (void)_notNow:(id)arg1;
- (void)_allowanceTimeDidChange:(id)arg1;
- (void)_allowanceSelectedCategoriesDidChange:(id)arg1;
- (void)_updateSetAppLimitButtonWithTime:(id)arg1 selectedCategories:(id)arg2;
- (id)initWithIntroductionModel:(id)arg1 continueHandler:(CDUnknownBlockType)arg2;

@end
