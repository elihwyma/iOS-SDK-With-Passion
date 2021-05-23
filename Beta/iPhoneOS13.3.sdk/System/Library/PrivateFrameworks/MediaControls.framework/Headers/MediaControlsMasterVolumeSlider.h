/*
 Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

#import <MediaControls/MediaControlsVolumeSlider.h>

@class NSString, UIImpactFeedbackGenerator, UILongPressGestureRecognizer, UINotificationFeedbackGenerator, UIView;

@protocol MediaControlsMasterVolumeSliderDelegate;

__attribute__((visibility("hidden")))
@interface MediaControlsMasterVolumeSlider : MediaControlsVolumeSlider

{
    UIView *_growingThumbView;
    double _forcePercent;
    float _initialX;
    _Bool _syncingEnabled;
    id <MediaControlsMasterVolumeSliderDelegate> _delegate;
    long long _syncState;
    UIImpactFeedbackGenerator *_positiveFeedbackGenerator;
    UINotificationFeedbackGenerator *_negativeFeedbackGenerator;
    UILongPressGestureRecognizer *_gestureRecognizer;
}

@property (nonatomic) long long syncState;
@property (retain, nonatomic) UIImpactFeedbackGenerator *positiveFeedbackGenerator;
@property (retain, nonatomic) UINotificationFeedbackGenerator *negativeFeedbackGenerator;
@property (retain, nonatomic) UILongPressGestureRecognizer *gestureRecognizer;
@property (nonatomic, getter=isSyncingEnabled) _Bool syncingEnabled;
@property (weak, nonatomic) id <MediaControlsMasterVolumeSliderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)createThumbView;
- (void)handleLongPress:(id)arg1;
- (void)shrinkThumbAfterDelay:(double)arg1;

@end
