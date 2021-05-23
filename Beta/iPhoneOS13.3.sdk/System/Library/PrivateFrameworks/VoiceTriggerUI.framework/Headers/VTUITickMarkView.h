/*
 Image: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
 */

#import <UIKit/UIView.h>

@class CADisplayLink, NSLock, NSTimer;

@interface VTUITickMarkView : UIView

{
    CADisplayLink *_displayLink;
    _Bool _shown;
    long long _currentPreferredFrameRate;
    long long _currentFrame;
    int _animState;
    NSTimer *_safetyTimer;
    _Bool _completionCalled;
    CDUnknownBlockType _completionBlock;
    NSLock *_completionLock;
    long long _fadeInFrames;
    long long _pauseFrames;
    long long _fadeOutFrames;
}

+ (void)initialize;

- (id)init;
- (void)setHidden:(_Bool)arg1;
- (void)layoutSubviews;
- (void)didMoveToSuperview;
- (void)drawRect:(struct CGRect)arg1;
- (void)setUpDisplayLink;
- (struct CGImage *)imageMask:(_Bool)arg1;
- (void)handleSafetyTimer:(id)arg1;
- (void)tearDownDisplayLink;
- (void)startAnimationsForTickMark:(_Bool)arg1 fadeInFrames:(long long)arg2 pauseFrames:(long long)arg3 fadeOutFrames:(long long)arg4 completion:(CDUnknownBlockType)arg5;

@end
