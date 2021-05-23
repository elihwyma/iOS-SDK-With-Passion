/*
 Image: /System/Library/PrivateFrameworks/LoginUILogViewer.framework/LoginUILogViewer
 */

#import <UIKitCore/UIView.h>

@class UIButton, UIStackView;

@interface LUILogOptionsView : UIView

{
    UIStackView *_buttonStackView;
    UIButton *_tenMinutesLogButton;
    UIButton *_halfHourButton;
    UIButton *_hourButton;
    UIButton *_lastDayButton;
    UIButton *_streamButton;
}

@property (retain, nonatomic) UIStackView *buttonStackView;
@property (retain, nonatomic) UIButton *tenMinutesLogButton;
@property (retain, nonatomic) UIButton *halfHourButton;
@property (retain, nonatomic) UIButton *hourButton;
@property (retain, nonatomic) UIButton *lastDayButton;
@property (retain, nonatomic) UIButton *streamButton;

- (void)_setup;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)_createButtonStackView;
- (id)_createButtonWithTitle:(id)arg1;

@end
