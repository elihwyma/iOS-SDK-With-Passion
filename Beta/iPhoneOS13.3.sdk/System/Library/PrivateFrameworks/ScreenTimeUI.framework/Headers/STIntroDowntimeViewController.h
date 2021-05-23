/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <ScreenTimeUI/STTableWelcomeController.h>

@class STIntroDowntimeTableViewController, STIntroductionModel;

__attribute__((visibility("hidden")))
@interface STIntroDowntimeViewController : STTableWelcomeController

{
    STIntroductionModel *_model;
    CDUnknownBlockType _continueHandler;
}

@property (readonly) STIntroductionModel *model;
@property (copy, readonly) CDUnknownBlockType continueHandler;
@property (retain, nonatomic) STIntroDowntimeTableViewController *tableViewController;

- (void)loadView;
- (void)_notNow:(id)arg1;
- (id)initWithIntroductionModel:(id)arg1 continueHandler:(CDUnknownBlockType)arg2;
- (void)_setDowntime:(id)arg1;

@end
