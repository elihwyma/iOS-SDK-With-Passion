/*
 Image: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
 */

@class UIView, VTUIButton;

@interface VTUIEnrollmentSuccessView

{
    UIView *_footerView;
    VTUIButton *_finishButton;
}

@property (nonatomic, readonly) VTUIButton *finishButton;

- (id)initWithFrame:(struct CGRect)arg1;
- (id)footerView;
- (id)_createFooter;
- (void)_setupContent;
- (void)_setupImage;
- (_Bool)suppressFinishButton;

@end
