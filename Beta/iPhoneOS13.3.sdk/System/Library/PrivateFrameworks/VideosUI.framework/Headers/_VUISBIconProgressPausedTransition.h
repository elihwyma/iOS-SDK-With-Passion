/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/_VUISBIconProgressTransition.h>

@class CAMediaTimingFunction;

__attribute__((visibility("hidden")))
@interface _VUISBIconProgressPausedTransition : _VUISBIconProgressTransition

{
    double _totalElapsedTime;
    double _duration;
    CAMediaTimingFunction *_timingFunction;
    _Bool _toPaused;
    double _fraction;
}

+ (id)newTransitionToPaused:(_Bool)arg1;

- (void)dealloc;
- (void)_updateView:(id)arg1;
- (_Bool)isCompleteWithView:(id)arg1;
- (void)completeTransitionAndUpdateView:(id)arg1;
- (void)updateToPaused:(_Bool)arg1;
- (void)updateView:(id)arg1 withElapsedTime:(double)arg2;
- (id)_initToPaused:(_Bool)arg1;
- (void)_updateTimingFunction;
- (void)_updateElapsedTimeFromFraction;

@end
