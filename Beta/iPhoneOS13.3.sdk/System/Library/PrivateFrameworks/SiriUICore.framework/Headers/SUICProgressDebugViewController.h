/*
 Image: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
 */

#import <UIKit/UIViewController.h>

@class NSProgress, NSString, SUICProgressIndicatorViewController, SUICProgressStateMachine, UIButton;

@interface SUICProgressDebugViewController : UIViewController

{
    SUICProgressIndicatorViewController *_indicatorViewController;
    UIButton *_eventGeneratorButton;
    SUICProgressStateMachine *_stateMachine;
    unsigned long long _testEventLoopCounter;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) NSProgress *progress;

- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)stateMachineForProgressIndicatorViewController:(id)arg1;
- (void)_eventGeneratorButtonTouchedUpInside:(id)arg1;

@end
