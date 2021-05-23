/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <UIKit/UIGestureRecognizer.h>

@class NSString, UITapGestureRecognizer, _MKZoomingPanGestureRecognizer;

@protocol MKZoomingGestureControlConfiguration;

@interface _MKOneHandedZoomGestureRecognizer : UIGestureRecognizer

{
    _Bool _didReceive1stTap;
    _Bool _timerOn;
    UITapGestureRecognizer *_tapGestureRecognizer;
    _MKZoomingPanGestureRecognizer *_panGestureRecognizer;
    struct CGPoint _locationOfTapGesture;
    id <MKZoomingGestureControlConfiguration> _configuration;
}

@property (nonatomic, readonly) UITapGestureRecognizer *tapGestureRecognizer;
@property (nonatomic, readonly) _MKZoomingPanGestureRecognizer *panGestureRecognizer;
@property (nonatomic, readonly) struct CGPoint locationOfTapGesture;
@property (copy, nonatomic) id <MKZoomingGestureControlConfiguration> configuration;
@property (nonatomic, readonly) double scale;
@property (nonatomic, readonly) double velocity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)setEnabled:(_Bool)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)reset;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setAllowedPressTypes:(id)arg1;
- (void)_clearTapTimer;
- (void)_tapGestureRecognizerStateDidChange:(id)arg1;
- (void)_panGestureRecognizerStateDidChange:(id)arg1;
- (void)_startTapTimer:(double)arg1;
- (void)_tooSlow:(id)arg1;

@end
