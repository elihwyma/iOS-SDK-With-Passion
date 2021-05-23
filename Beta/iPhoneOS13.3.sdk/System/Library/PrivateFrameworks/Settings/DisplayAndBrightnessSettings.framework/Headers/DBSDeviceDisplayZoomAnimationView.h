/*
 Image: /System/Library/PrivateFrameworks/Settings/DisplayAndBrightnessSettings.framework/DisplayAndBrightnessSettings
 */

#import <UIKit/UIView.h>

@class CALayer, CAPackage, CAStateController;

@interface DBSDeviceDisplayZoomAnimationView : UIView

{
    _Bool _animating;
    float _duration;
    unsigned long long _displayZoomOption;
    CALayer *_packageLayer;
    CAPackage *_package;
    CAStateController *_stateController;
    unsigned long long _state;
}

@property (nonatomic) unsigned long long displayZoomOption;
@property (retain, nonatomic) CALayer *packageLayer;
@property (retain, nonatomic) CAPackage *package;
@property (retain, nonatomic) CAStateController *stateController;
@property (nonatomic) unsigned long long state;
@property (nonatomic) float duration;
@property (nonatomic, getter=isAnimating) _Bool animating;

- (struct CGSize)intrinsicContentSize;
- (void)traitCollectionDidChange:(id)arg1;
- (void)startAnimation;
- (void)stopAnimation;
- (void)drawRect:(struct CGRect)arg1;
- (void)_setPackage:(id)arg1;
- (void)_configureView;
- (void)_startAnimationForLayer:(id)arg1;
- (void)_stepAnimamtionForLayer:(id)arg1;
- (id)initWithDisplayZoomOption:(unsigned long long)arg1;

@end
