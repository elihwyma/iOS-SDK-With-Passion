/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class UIControl, UISelectionFeedbackGenerator;

@protocol MPDetailScrubControllerDelegate, MPDetailedScrubbing;

@interface MPDetailScrubController : NSObject

{
    _Bool _didBeginTracking;
    _Bool _needsCommit;
    float _accumulatedDelta;
    struct CGPoint _previousLocationInView;
    struct CGPoint _beginLocationInView;
    struct CGPoint _lastCommittedLocationInView;
    float _currentValue;
    UISelectionFeedbackGenerator *_feedbackGenerator;
    _Bool _detailedScrubbingEnabled;
    _Bool _isTracking;
    UIControl<MPDetailedScrubbing> *_scrubbingControl;
    id <MPDetailScrubControllerDelegate> _delegate;
    double _duration;
    double _scrubbingVerticalRange;
    long long _currentScrubSpeed;
}

@property (weak, nonatomic) UIControl<MPDetailedScrubbing> *scrubbingControl;
@property (weak, nonatomic) id <MPDetailScrubControllerDelegate> delegate;
@property (nonatomic) double duration;
@property (nonatomic) double scrubbingVerticalRange;
@property (nonatomic) _Bool detailedScrubbingEnabled;
@property (nonatomic, readonly) _Bool durationAllowsForDetailedScrubbing;
@property (nonatomic, readonly) _Bool isTracking;
@property (nonatomic, readonly) long long currentScrubSpeed;

- (id)init;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (float)_minimumScale;
- (id)initWithScrubbingControl:(id)arg1;
- (float)scaleForVerticalPosition:(double)arg1;
- (float)_scaleForIdealValueForVerticalPosition:(double)arg1;
- (void)_beginScrubbing;
- (void)_endScrubbing;
- (void)_commitValue:(float)arg1;

@end
