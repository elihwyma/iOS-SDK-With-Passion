/*
 Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

#import <AirPortAssistant/AssistantSubUIViewController.h>

@class NetTopoMiniStaticLayout, UIActivityIndicatorView, UILabel, UIView;

@interface StepByStepUIViewController : AssistantSubUIViewController

{
    UIView *topoView;
    NetTopoMiniStaticLayout *topoLayout;
    UIView *tableHeaderContainerView;
    UIView *justTextContainerView;
    UILabel *justTextLabel;
    UIView *tableFooterContainerView;
    UIView *spinnerWithStatusBelowView;
    UILabel *spinnerWithStatusBelowLabel;
    UIActivityIndicatorView *spinnerWithStatusBelowSpinner;
    int sbsMode;
}

@property (retain, nonatomic) UIView *topoView;
@property (retain, nonatomic) NetTopoMiniStaticLayout *topoLayout;
@property (retain, nonatomic) UIView *tableHeaderContainerView;
@property (retain, nonatomic) UIView *justTextContainerView;
@property (nonatomic) UILabel *justTextLabel;
@property (retain, nonatomic) UIView *tableFooterContainerView;
@property (retain, nonatomic) UIView *spinnerWithStatusBelowView;
@property (retain, nonatomic) UILabel *spinnerWithStatusBelowLabel;
@property (retain, nonatomic) UIActivityIndicatorView *spinnerWithStatusBelowSpinner;
@property (nonatomic) int sbsMode;

- (void)dealloc;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)stepByStepUpdateProgress:(id)arg1 forState:(int)arg2;
- (void)syncTopoUIForTarget:(id)arg1 andSource:(id)arg2 andNetwork:(id)arg3 connectionType:(id)arg4;

@end
