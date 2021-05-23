/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIViewController.h>

@class NSString, UIButton, UIImageView, UIScrollView, WFWidgetExplanationPageView, WFWidgetExplanationSettings;

@protocol WFWidgetExplanationViewControllerDelegate;

@interface WFWidgetExplanationViewController : UIViewController

{
    _Bool _continueWasTapped;
    _Bool _completedOnboarding;
    id <WFWidgetExplanationViewControllerDelegate> _delegate;
    UIScrollView *_scrollView;
    UIButton *_videoButton;
    UIImageView *_checkmarkView;
    WFWidgetExplanationPageView *_pageView;
    WFWidgetExplanationSettings *_settings;
    double _appearanceTimeInterval;
    double _maxSecondsOfVideoWatched;
    long long _numberOfTimesVideoWasWatched;
}

@property (weak, nonatomic) UIScrollView *scrollView;
@property (weak, nonatomic) UIButton *videoButton;
@property (weak, nonatomic) UIImageView *checkmarkView;
@property (weak, nonatomic) WFWidgetExplanationPageView *pageView;
@property (retain, nonatomic) WFWidgetExplanationSettings *settings;
@property (nonatomic) double appearanceTimeInterval;
@property (nonatomic) double maxSecondsOfVideoWatched;
@property (nonatomic) long long numberOfTimesVideoWasWatched;
@property (nonatomic) _Bool continueWasTapped;
@property (nonatomic) _Bool completedOnboarding;
@property (weak, nonatomic) id <WFWidgetExplanationViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)initWithSettings:(id)arg1;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)donePressed;
- (id)eventDictionary;
- (void)playVideo;
- (void)widgetOnboardingDidActivateWidget:(id)arg1;
- (void)pageViewContinueTapped:(id)arg1;

@end
