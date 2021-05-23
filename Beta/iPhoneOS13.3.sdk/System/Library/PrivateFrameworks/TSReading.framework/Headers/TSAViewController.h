/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <UIKit/UIViewController.h>

@class NSArray, NSString, UIColor;

@interface TSAViewController : UIViewController

{
    _Bool _viewDidAppear;
    _Bool _showFirstLaunchCoachingTipAfterViewAppears;
    _Bool _firstLaunchCoachingTipsWereShowingBeforeRotation;
    _Bool _coachingTipsWereShowingBeforeRotation;
    _Bool _shouldShowHelpOnAppear;
    NSArray *_leftApplicationToolbarItems;
    NSArray *_rightApplicationToolbarItems;
    double _leftToolbarItemsInset;
    double _rightToolbarItemsInset;
    double _leftToolbarItemsMaximumWidth;
    double _rightToolbarItemsMaximumWidth;
}

@property (nonatomic) _Bool viewDidAppear;
@property (nonatomic) _Bool showFirstLaunchCoachingTipAfterViewAppears;
@property (nonatomic) _Bool firstLaunchCoachingTipsWereShowingBeforeRotation;
@property (nonatomic) _Bool coachingTipsWereShowingBeforeRotation;
@property (nonatomic) _Bool shouldShowHelpOnAppear;
@property (nonatomic, readonly) _Bool isViewVisible;
@property (nonatomic, readonly) _Bool isLayoutBelowApplicationToolbar;
@property (retain, nonatomic) NSArray *leftApplicationToolbarItems;
@property (retain, nonatomic) NSArray *rightApplicationToolbarItems;
@property (nonatomic, readonly) double leftToolbarItemsInset;
@property (nonatomic, readonly) double rightToolbarItemsInset;
@property (nonatomic) double leftToolbarItemsMaximumWidth;
@property (nonatomic) double rightToolbarItemsMaximumWidth;
@property (nonatomic, readonly) UIColor *applicationBackgroundColor;
@property (nonatomic, readonly) UIColor *applicationToolbarTitleColor;
@property (nonatomic, readonly) UIColor *applicationToolbarTintColor;
@property (nonatomic, readonly) UIColor *applicationToolbarBackgroundColor;
@property (nonatomic, readonly) NSString *toolbarButtonModalGearImageName;
@property (nonatomic, readonly, getter=isPresentingModalViewController) _Bool presentingModalViewController;
@property (nonatomic, readonly) id coachingTipsButton;

- (void)dealloc;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (id)toolbarButtonForModalDoneWithTarget:(id)arg1 action:(SEL)arg2;
- (id)toolbarButtonWithImageName:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (id)toolbarButtonWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3 isModal:(_Bool)arg4;
- (void)p_stopListeningForVoiceOverNotifications;
- (void)showFirstLaunchCoachingTipIfNecessary;
- (void)p_startListeningForVoiceOverNotifications;
- (void)p_voiceOverStatusDidChange;
- (void)dismissCoachingTips;
- (void)hideFirstLaunchCoachingTipIfNecessary;
- (id)toolbarButtonWithImageName:(id)arg1 disabledImageName:(id)arg2 target:(id)arg3 action:(SEL)arg4;
- (id)toolbarButtonForCoachingTipsWithTarget:(id)arg1 action:(SEL)arg2;
- (void)willSetupApplicationToolbar;
- (id)toolbarButtonForUndoWithIsModal:(_Bool)arg1;
- (id)toolbarButtonForModalDone;
- (_Bool)modalToolbarSupportsUndo;
- (id)imageViewFromSnapshotOfView:(id)arg1;
- (void)toggleCoachingTips:(id)arg1;
- (void)willShowCoachingTips;
- (void)willHideCoachingTips;
- (id)toolbarButtonItemForCoachingTipsWithTarget:(id)arg1 action:(SEL)arg2;
- (void)showHelpWithTopicId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissHelpWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)isFirstLaunchCoachingTipShowing;
- (id)firstLaunchCoachingTipShownUserDefaultKey;

@end
