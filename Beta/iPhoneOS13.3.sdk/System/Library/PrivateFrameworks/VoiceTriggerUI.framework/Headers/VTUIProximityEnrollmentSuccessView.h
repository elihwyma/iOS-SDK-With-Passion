/*
 Image: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
 */

#import <VoiceTriggerUI/VTUIProximityView.h>

@class NSArray, NSString, UIButton, UIImageView, UILabel, UIView, VTUIButton, VTUIProximityContainerView, VTUIStyle;

@interface VTUIProximityEnrollmentSuccessView : VTUIProximityView

{
    NSString *_languageCode;
    VTUIProximityContainerView *_containerView;
    UILabel *_titleLabel;
    UIImageView *_imageView;
    UIView *_imageViewContainer;
    UILabel *_subtitleLabel;
    VTUIStyle *_vtStyle;
    VTUIButton *_continueButton;
    UIButton *_dismissButton;
    NSArray *_viewConstraints;
}

@property (retain, nonatomic) NSArray *viewConstraints;
@property (nonatomic, readonly) VTUIButton *continueButton;
@property (retain, nonatomic) UIButton *dismissButton;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)_setImage:(id)arg1;
- (void)_setupContent;
- (void)_setupImage;
- (void)_setupConstraintsToSize:(struct CGSize)arg1;
- (void)_setupPhoneLandscapeConstraints;
- (void)_setupPortraitConstraints;

@end
