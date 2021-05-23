/*
 Image: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
 */

#import <UIKit/UIViewController.h>

@class NSString, SUICProgressIndicatorView;

@protocol SUICProgressIndicatorViewControllerDataSource;

@interface SUICProgressIndicatorViewController : UIViewController

{
    SUICProgressIndicatorView *_progressIndicatorView;
    id <SUICProgressIndicatorViewControllerDataSource> _dataSource;
}

@property (retain, nonatomic, getter=_progressIndicatorView, setter=_setProgressIndicatorView:) SUICProgressIndicatorView *progressIndicatorView;
@property (weak, nonatomic) id <SUICProgressIndicatorViewControllerDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)loadView;
- (_Bool)_canShowWhileLocked;
- (id)_stateMachine;
- (_Bool)_shouldAcceptEventsFromStateMachine:(id)arg1;
- (void)progressStateMachine:(id)arg1 didTransitionToState:(unsigned long long)arg2 fromState:(unsigned long long)arg3 forEvent:(unsigned long long)arg4;
- (void)progressStateMachine:(id)arg1 ignoredEvent:(unsigned long long)arg2;

@end
