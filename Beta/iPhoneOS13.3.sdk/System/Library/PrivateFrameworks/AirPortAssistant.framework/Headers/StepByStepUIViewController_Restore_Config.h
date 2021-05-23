/*
 Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

#import <AirPortAssistant/StepByStepUIViewController.h>

@class UILabel, UIView;

@interface StepByStepUIViewController_Restore_Config : StepByStepUIViewController

{
    UIView *restoreRecommendationContainerView;
    UILabel *restoreRecommendationLabel;
    UIView *dontRestoreRecommendationContainerView;
    UILabel *dontRestoreRecommendationLabel;
    _Bool dontRestore;
}

@property (retain, nonatomic) UIView *restoreRecommendationContainerView;
@property (retain, nonatomic) UIView *dontRestoreRecommendationContainerView;

- (void)dealloc;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)setupInitialTableHeaderConfiguration;

@end
