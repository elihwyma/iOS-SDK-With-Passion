/*
 Image: /System/Library/PrivateFrameworks/Settings/DisplayAndBrightnessSettings.framework/DisplayAndBrightnessSettings
 */

#import <UIKit/UIView.h>

@class DBSCheckmarkView, DBSDeviceDisplayZoomAnimationView, NSString, UIImpactFeedbackGenerator, UILabel;

@protocol DBSDisplayZoomOptionViewDelegate;

__attribute__((visibility("hidden")))
@interface DBSDisplayZoomOptionView : UIView

{
    _Bool _selected;
    _Bool _highlight;
    unsigned long long _displayZoomOption;
    id <DBSDisplayZoomOptionViewDelegate> _delegate;
    UILabel *_optionNameLabel;
    DBSCheckmarkView *__checkmarkView;
    DBSDeviceDisplayZoomAnimationView *__packageView;
    UIImpactFeedbackGenerator *__feedbackGenerator;
}

@property (retain, nonatomic) UILabel *optionNameLabel;
@property (retain, nonatomic) DBSCheckmarkView *_checkmarkView;
@property (retain, nonatomic) DBSDeviceDisplayZoomAnimationView *_packageView;
@property (retain, nonatomic) UIImpactFeedbackGenerator *_feedbackGenerator;
@property (nonatomic, getter=highlighted) _Bool highlight;
@property (nonatomic, readonly) unsigned long long displayZoomOption;
@property (weak, nonatomic) id <DBSDisplayZoomOptionViewDelegate> delegate;
@property (nonatomic, getter=isSelected) _Bool selected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)startAnimation;
- (void)stopAnimation;
- (void)_configureView;
- (id)initWithFrame:(struct CGRect)arg1 displayZoomOption:(unsigned long long)arg2;
- (void)_userDidTapOnView:(id)arg1;

@end
