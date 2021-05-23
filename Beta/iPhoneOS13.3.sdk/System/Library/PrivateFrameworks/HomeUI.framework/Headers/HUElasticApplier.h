/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUApplier.h>

@class CADisplayLink;

@interface HUElasticApplier : HUApplier

{
    _Bool _completesWhenAtRest;
    _Bool _progressBeginsFromInitialInputProgress;
    _Bool _applyOnlyOnProgressChanges;
    double _friction;
    double _tension;
    double _currentVelocity;
    CDUnknownBlockType _progressInputBlock;
    CADisplayLink *_displayLink;
    unsigned long long _frameCount;
    unsigned long long _restingFrameCount;
    double _previousForce;
}

@property (copy, nonatomic) CDUnknownBlockType progressInputBlock;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) unsigned long long frameCount;
@property (nonatomic) unsigned long long restingFrameCount;
@property (nonatomic) double previousForce;
@property (nonatomic) double currentVelocity;
@property (nonatomic) double friction;
@property (nonatomic) double tension;
@property (nonatomic) _Bool completesWhenAtRest;
@property (nonatomic) _Bool progressBeginsFromInitialInputProgress;
@property (nonatomic) _Bool applyOnlyOnProgressChanges;

- (id)init;
- (_Bool)start;
- (_Bool)complete:(_Bool)arg1;
- (id)initWithProgressInputBlock:(CDUnknownBlockType)arg1;
- (void)_displayLinkTick;
- (void)_invalidateDisplayLinkIfNecessary;
- (void)_updateProgressForInitialUpdate:(_Bool)arg1;

@end
