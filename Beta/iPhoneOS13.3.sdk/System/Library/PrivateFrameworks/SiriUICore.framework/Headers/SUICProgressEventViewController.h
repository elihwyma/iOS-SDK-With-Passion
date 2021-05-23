/*
 Image: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
 */

#import <SiriUICore/SUICProgressIndicatorViewController.h>

@class NSProgress, NSString, SUICProgressStateMachine;

@interface SUICProgressEventViewController : SUICProgressIndicatorViewController

{
    SUICProgressStateMachine *_stateMachine;
    NSProgress *_progress;
}

@property (retain, nonatomic) NSProgress *progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)handleEvent:(unsigned long long)arg1;
- (id)stateMachineForProgressIndicatorViewController:(id)arg1;

@end
