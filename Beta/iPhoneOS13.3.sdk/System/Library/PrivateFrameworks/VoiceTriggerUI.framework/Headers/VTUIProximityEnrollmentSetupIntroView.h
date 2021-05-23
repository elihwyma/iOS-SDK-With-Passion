/*
 Image: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
 */

#import <VoiceTriggerUI/VTUIProximityView.h>

@class CSVoiceProfileManager, NSArray, NSString, UIButton, UIImageView, UILabel, UITextView, UIView, VTUIButton, VTUIProximityContainerView, VTUIStyle;

@protocol VTUIEnrollmentSetupIntroViewDelegate;

@interface VTUIProximityEnrollmentSetupIntroView : VTUIProximityView

{
    VTUIProximityContainerView *_containerView;
    UILabel *_titleLabel;
    UIImageView *_imageView;
    UIView *_imageViewContainer;
    UILabel *_subtitleLabel;
    UITextView *_termsAndConds;
    VTUIStyle *_vtStyle;
    CSVoiceProfileManager *_voiceProfileMgr;
    NSString *_languageCode;
    id <VTUIEnrollmentSetupIntroViewDelegate> _stateViewDelegate;
    VTUIButton *_setupButton;
    VTUIButton *_notNowButton;
    UIButton *_dismissButton;
    NSArray *_viewConstraints;
}

@property (retain, nonatomic) NSArray *viewConstraints;
@property (weak, nonatomic) id <VTUIEnrollmentSetupIntroViewDelegate> stateViewDelegate;
@property (nonatomic, readonly) VTUIButton *setupButton;
@property (nonatomic, readonly) VTUIButton *notNowButton;
@property (retain, nonatomic) UIButton *dismissButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)_setImage:(id)arg1;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (void)_setupContent;
- (void)_setupImage;
- (void)_setupConstraintsToSize:(struct CGSize)arg1;
- (void)_setupTermsAndConditions;
- (void)_setupPhoneLandscapeConstraints;
- (void)_setupPortraitConstraints;

@end
