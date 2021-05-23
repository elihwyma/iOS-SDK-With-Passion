/*
 Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

#import <Foundation/NSObject.h>

@class ISAnimatedImage, ISAnimatedImageTimer, NSHashTable, NSString;

@interface ISAnimatedImagePlayer : NSObject

{
    NSHashTable *_weakDestinations;
    ISAnimatedImage *_image;
    ISAnimatedImageTimer *_timer;
    struct CGImage *_currentImage;
    _Bool _hasStartedAnimating;
    _Bool _hasFinishedAnimating;
    double _timeAccumulator;
    double _previousFrameTime;
    _Bool _infiniteLoop;
    unsigned long long _remainingLoopCount;
    _Bool _playing;
    _Bool _allowFrameDrops;
    unsigned long long _displayedFrameIndex;
}

@property (nonatomic, readonly) ISAnimatedImage *animatedImage;
@property (nonatomic, getter=isPlaying) _Bool playing;
@property (nonatomic) unsigned long long displayedFrameIndex;
@property (nonatomic) _Bool allowFrameDrops;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (struct CGImage *)currentImage;
- (_Bool)_shouldAnimate;
- (id)initWithAnimatedImage:(id)arg1;
- (void)animationTimerFired:(double)arg1;
- (void)updateAnimation;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)registerDestination:(id)arg1;
- (void)unregisterDestination:(id)arg1;
- (void)_notifyDestinationsOfFrameChange;
- (void)_notifyDestinationsOfAnimationStart;
- (void)_notifyDestinationsOfAnimationEnd;
- (_Bool)_anyDestinationIsReady;
- (void)_seekToBeginning;
- (void)_setCurrentFrame:(struct CGImage *)arg1;
- (void)_resetAnimationState;

@end
