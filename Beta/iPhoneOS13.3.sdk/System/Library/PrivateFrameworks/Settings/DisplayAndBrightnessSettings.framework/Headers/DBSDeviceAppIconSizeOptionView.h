/*
 Image: /System/Library/PrivateFrameworks/Settings/DisplayAndBrightnessSettings.framework/DisplayAndBrightnessSettings
 */

#import <UIKit/UIView.h>

@class DBSCheckmarkView, DBSDeviceAppIconSizeAnimationView, NSString, SBSHomeScreenService, UIImpactFeedbackGenerator, UILabel, UIStackView;

@protocol DBSDeviceAppIconSizeOptionViewDelegate;

__attribute__((visibility("hidden")))
@interface DBSDeviceAppIconSizeOptionView : UIView

{
    _Bool _highlight;
    id <DBSDeviceAppIconSizeOptionViewDelegate> _delegate;
    unsigned long long _appIconSizeOption;
    UIStackView *__stackView;
    DBSDeviceAppIconSizeAnimationView *__packageView;
    UILabel *__label;
    DBSCheckmarkView *__checkmarkView;
    UIImpactFeedbackGenerator *__feedbackGenerator;
    SBSHomeScreenService *__homeScreenService;
}

@property (retain, nonatomic) UIStackView *_stackView;
@property (retain, nonatomic) DBSDeviceAppIconSizeAnimationView *_packageView;
@property (retain, nonatomic) UILabel *_label;
@property (retain, nonatomic) DBSCheckmarkView *_checkmarkView;
@property (retain, nonatomic) UIImpactFeedbackGenerator *_feedbackGenerator;
@property (nonatomic, getter=highlighted) _Bool highlight;
@property (retain, nonatomic) SBSHomeScreenService *_homeScreenService;
@property (weak, nonatomic) id <DBSDeviceAppIconSizeOptionViewDelegate> delegate;
@property (nonatomic, readonly) unsigned long long appIconSizeOption;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)reload;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)startAnimation;
- (void)stopAnimation;
- (void)_configureView;
- (void)_userDidTapOnView:(id)arg1;
- (void)_updateViewForCurrentDeviceAppIconSize;
- (id)initWithFrame:(struct CGRect)arg1 appIconSizeOption:(unsigned long long)arg2;

@end
