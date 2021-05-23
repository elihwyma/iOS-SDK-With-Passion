/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUApplier.h>

@class CADisplayLink;

@interface HUDisplayLinkApplier : HUApplier

{
    _Bool _applyOnlyOnProgressChanges;
    _Bool _completesWhenAtRest;
    _Bool _atRest;
    CDUnknownBlockType _progressInputBlock;
    CADisplayLink *_displayLink;
    unsigned long long _restingFrameCount;
}

@property (copy, nonatomic) CDUnknownBlockType progressInputBlock;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic, getter=isAtRest) _Bool atRest;
@property (nonatomic) unsigned long long restingFrameCount;
@property (nonatomic) _Bool applyOnlyOnProgressChanges;
@property (nonatomic) _Bool completesWhenAtRest;

- (id)init;
- (_Bool)start;
- (_Bool)complete:(_Bool)arg1;
- (id)initWithProgressInputBlock:(CDUnknownBlockType)arg1;
- (double)effectiveInputProgressForBlock:(CDUnknownBlockType)arg1;
- (void)_displayLinkTick;
- (void)_invalidateDisplayLinkIfNecessary;
- (void)_updateProgressForInitialUpdate:(_Bool)arg1;
- (void)restingStateDidChange;

@end
