/*
 Image: /System/Library/Frameworks/CoreHaptics.framework/CoreHaptics
 */

#import <Foundation/NSObject.h>

@class AVHapticSequence, CHHapticEngine, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface AdvancedPatternPlayer : NSObject

{
    CHHapticEngine *_engine;
    AVHapticSequence *_sequence;
    double _patternDuration;
    double _loopEnd;
    _Bool _paused;
    NSArray *_events;
    int _muteState;
    CDUnknownBlockType _completionHandler;
}

@property (weak) CHHapticEngine *engine;
@property (readonly) double patternDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property _Bool isMuted;
@property _Bool loopEnabled;
@property double loopEnd;
@property float playbackRate;
@property (copy) CDUnknownBlockType completionHandler;

- (id)init;
- (void)dealloc;
- (_Bool)seekToOffset:(double)arg1 error:(id *)arg2;
- (_Bool)sendParameters:(id)arg1 atTime:(double)arg2 error:(id *)arg3;
- (_Bool)startAtTime:(double)arg1 error:(id *)arg2;
- (_Bool)stopAtTime:(double)arg1 error:(id *)arg2;
- (void)finishInit;
- (_Bool)activateChannelByIndex:(unsigned long long)arg1 atTime:(double)arg2 error:(id *)arg3;
- (_Bool)setVolume:(float)arg1 atTime:(double)arg2 error:(id *)arg3;
- (_Bool)pauseAtTime:(double)arg1 error:(id *)arg2;
- (_Bool)resumeAtTime:(double)arg1 error:(id *)arg2;
- (_Bool)cancelAndReturnError:(id *)arg1;
- (void)doSetMute:(_Bool)arg1;
- (_Bool)scheduleParameterCurve:(id)arg1 atTime:(double)arg2 error:(id *)arg3;
- (void)clearExternalResources:(id)arg1;
- (_Bool)doStartFromStoppedAtTime:(double)arg1 error:(id *)arg2;
- (_Bool)doStartFromPausedAtTime:(double)arg1 error:(id *)arg2;
- (_Bool)doResumeAtTime:(double)arg1 error:(id *)arg2;
- (id)initWithPattern:(id)arg1 engine:(id)arg2 privileged:(_Bool)arg3 error:(id *)arg4;
- (id)initWithRingtoneData:(id)arg1 engine:(id)arg2 error:(id *)arg3;

@end
