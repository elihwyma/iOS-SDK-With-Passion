/*
 Image: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
 */

#import <VoiceTriggerUI/VTUIProximityView.h>

@class UIButton, UILabel, VTUIButton, VTUIProximityContainerView;

@interface VTUIProximityDataSharingOptInView : VTUIProximityView

{
    VTUIProximityContainerView *_containerView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    VTUIButton *_shareButton;
    VTUIButton *_notNowButton;
    UIButton *_dismissButton;
    UIButton *_aboutLink;
}

@property (retain, nonatomic) VTUIButton *shareButton;
@property (retain, nonatomic) VTUIButton *notNowButton;
@property (retain, nonatomic) UIButton *dismissButton;
@property (retain, nonatomic) UIButton *aboutLink;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)_setupContent;
- (void)_setupPortraitConstraints;

@end
