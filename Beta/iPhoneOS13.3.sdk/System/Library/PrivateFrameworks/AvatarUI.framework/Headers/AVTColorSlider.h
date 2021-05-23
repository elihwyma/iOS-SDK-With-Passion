/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <UIKit/UISlider.h>

@class CALayer, CAShapeLayer, UIImageView, UISelectionFeedbackGenerator, _UIEdgeFeedbackGenerator;

@protocol AVTColorSliderDelegate;

@interface AVTColorSlider : UISlider

{
    _Bool _shouldTriggerFeedback;
    id <AVTColorSliderDelegate> _delegate;
    CALayer *_trackLayer;
    CAShapeLayer *_thumbClippingLayer;
    CALayer *_thumbContentLayer;
    CAShapeLayer *_thumbBorderLayer;
    UIImageView *_thumbView;
    _UIEdgeFeedbackGenerator *_edgeFeedbackGenerator;
    UISelectionFeedbackGenerator *_selectionFeedbackGenerator;
    long long _layoutDirection;
}

@property (retain, nonatomic) CALayer *trackLayer;
@property (retain, nonatomic) CAShapeLayer *thumbClippingLayer;
@property (retain, nonatomic) CALayer *thumbContentLayer;
@property (retain, nonatomic) CAShapeLayer *thumbBorderLayer;
@property (retain, nonatomic) UIImageView *thumbView;
@property (retain, nonatomic) _UIEdgeFeedbackGenerator *edgeFeedbackGenerator;
@property (retain, nonatomic) UISelectionFeedbackGenerator *selectionFeedbackGenerator;
@property (nonatomic) _Bool shouldTriggerFeedback;
@property (nonatomic) long long layoutDirection;
@property (nonatomic, readonly) CALayer *thumbLayer;
@property (weak, nonatomic) id <AVTColorSliderDelegate> delegate;

- (void)layoutSubviews;
- (struct CGRect)trackRectForBounds:(struct CGRect)arg1;
- (struct CGRect)thumbRectForBounds:(struct CGRect)arg1 trackRect:(struct CGRect)arg2 value:(float)arg3;
- (id)createThumbView;
- (id)currentMinimumTrackImage;
- (id)currentMaximumTrackImage;
- (void)relayoutSublayers;
- (void)valueDidChange:(id)arg1 forEvent:(id)arg2;
- (struct CGColor *)trackBorderColor;
- (void)removeTrackLayer:(id)arg1 animated:(_Bool)arg2;
- (id)initWithUserInterfaceLayoutDirection:(long long)arg1;
- (void)setTrackLayer:(id)arg1 animated:(_Bool)arg2;

@end
