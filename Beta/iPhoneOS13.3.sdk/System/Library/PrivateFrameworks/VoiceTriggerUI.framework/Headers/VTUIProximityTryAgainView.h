/*
 Image: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
 */

#import <VoiceTriggerUI/VTUIProximityView.h>

@class NSArray, UIButton, UILabel, VTPreferences, VTUIButton, VTUIProximityContainerView, VTUIStyle;

@interface VTUIProximityTryAgainView : VTUIProximityView

{
    VTUIButton *_continueButton;
    UIButton *_dismissButton;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    VTUIStyle *_vtStyle;
    VTPreferences *_vtPrefs;
    VTUIProximityContainerView *_containerView;
    NSArray *_viewConstraints;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) VTUIButton *continueButton;
@property (retain, nonatomic) VTUIStyle *vtStyle;
@property (retain, nonatomic) VTPreferences *vtPrefs;
@property (retain, nonatomic) VTUIProximityContainerView *containerView;
@property (retain, nonatomic) NSArray *viewConstraints;
@property (nonatomic, readonly) UIButton *dismissButton;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)_setupViews;
- (void)_setupConstraintsToSize:(struct CGSize)arg1;

@end
