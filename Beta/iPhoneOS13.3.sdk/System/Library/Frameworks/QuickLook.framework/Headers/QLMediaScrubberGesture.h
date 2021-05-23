/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <UIPanGestureRecognizer.h>

@class AVPlayer;

@protocol QLMediaScrubberGestureDelegate;

__attribute__((visibility("hidden")))
@interface QLMediaScrubberGesture : UIPanGestureRecognizer

{
    struct CGPoint _previousTouchLocationInView;
    struct CGPoint _startTouchLocationInView;
    _Bool _shouldRecoverFromPrecisionScrubbingIfNeeded;
    double _estimatedFrameRate;
    AVPlayer *_player;
    float _value;
    float _minimumValue;
    float _maximumValue;
    id <QLMediaScrubberGestureDelegate> _scrubberDelegate;
}

@property (weak, nonatomic) id <QLMediaScrubberGestureDelegate> scrubberDelegate;
@property (nonatomic) float value;
@property (nonatomic) float minimumValue;
@property (nonatomic) float maximumValue;

- (id)initWithPlayer:(id)arg1;
- (float)nominalFrameRate;
- (float)clampedEstimatedFrameRate;
- (void)scrubbGestureDidChange:(id)arg1;

@end
