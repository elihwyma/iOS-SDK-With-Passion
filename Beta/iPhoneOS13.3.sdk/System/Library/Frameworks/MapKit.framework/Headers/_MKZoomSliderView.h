/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <UIKit/UIView.h>

@class NSLayoutConstraint, UIImageView;

__attribute__((visibility("hidden")))
@interface _MKZoomSliderView : UIView

{
    NSLayoutConstraint *_knobCenterYConstraint;
    UIView *_knob;
    double _zoomFraction;
    _Bool _active;
    UIImageView *_shadowImageView;
    double _lastTrackShadowImageScale;
}

@property (nonatomic) double zoomFraction;
@property (nonatomic, getter=isActive) _Bool active;

- (void)setBounds:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateConstraints;
- (void)didMoveToWindow;

@end
