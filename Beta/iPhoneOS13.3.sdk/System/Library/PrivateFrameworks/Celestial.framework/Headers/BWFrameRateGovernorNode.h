/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWNode.h>

@class BWMotionDataPreserver;

@interface BWFrameRateGovernorNode : BWNode

{
    _Bool _dropsStillBracketFramesToMaintainConsistentFrameRate;
    _Bool _dropsStartupFramesWithUnstableAE;
    _Bool _preservesMotionDataFromDroppedFrames;
    CDStruct_1b6d18a9 _lastEmittedPTS;
    CDStruct_1b6d18a9 _lastEmittedStreamingFrameDuration;
    int _activeBracketSequenceRate;
    BWMotionDataPreserver *_motionDataPreserver;
    long long _frameCount;
    _Bool _aeStableAfterStartStreaming;
    int _aeStableTimeoutFrameCount;
    int _ltmStableTimeoutFrameCount;
    int _numFramesSinceAEBecameStable;
}

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (id)nodeType;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 forInput:(id)arg2;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)setDropsStillBracketFramesToMaintainConsistentFrameRate:(_Bool)arg1;
- (void)setDropsStartupFramesWithUnstableAE:(_Bool)arg1;
- (void)setPreservesMotionDataFromDroppedFrames:(_Bool)arg1;
- (_Bool)dropsStillBracketFramesToMaintainConsistentFrameRate;
- (_Bool)dropsStartupFramesWithUnstableAE;
- (_Bool)preservesMotionDataFromDroppedFrames;

@end
