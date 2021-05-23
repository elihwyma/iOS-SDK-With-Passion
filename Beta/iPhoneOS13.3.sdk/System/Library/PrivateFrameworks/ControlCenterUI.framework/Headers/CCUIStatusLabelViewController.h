/*
 Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 */

#import <UIKit/UIViewController.h>

@class CCUIStatusUpdateQueue, NSArray, NSTimer;

@protocol CCUIStatusLabelViewControllerDelegate;

@interface CCUIStatusLabelViewController : UIViewController

{
    CCUIStatusUpdateQueue *_updateQueue;
    NSArray *_statusLabels;
    unsigned long long _currentStatusLabelIndex;
    unsigned long long _presentationState;
    NSTimer *_presentationTimer;
    id <CCUIStatusLabelViewControllerDelegate> _delegate;
}

@property (weak, nonatomic) id <CCUIStatusLabelViewControllerDelegate> delegate;
@property (nonatomic) struct UIEdgeInsets edgeInsets;
@property (nonatomic) unsigned long long verticalAlignment;

- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (_Bool)_canShowWhileLocked;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)enqueueStatusUpdate:(id)arg1 forIdentifier:(id)arg2;
- (void)_advancePresentationState;
- (void)_resetPresentationStateAnimated:(_Bool)arg1;
- (void)_fadeOutStatusLabel:(id)arg1;
- (void)_notifyDelegateDidFinishStatusUpdates;
- (unsigned long long)_advancePresentationStateFromReady;
- (unsigned long long)_advancePresentationStateFromFadeIn;
- (unsigned long long)_advancePresentationStateFromPresenting;
- (unsigned long long)_advancePresentationStateFromFadeOut;
- (void)_notifyDelegateWillBeginStatusUpdates;
- (void)_fadeInStatusLabel:(id)arg1;

@end
