/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWNode.h>

@interface BWSynchronizerNode : BWNode

{
    struct OpaqueCMClock *_sourceClock;
    struct OpaqueCMClock *_masterClock;
    struct {
        CDStruct_1b6d18a9 sourceTime;
        CDStruct_1b6d18a9 syncedTime;
    } _ptsSyncHistory[16];
    int _oldestPTSSyncHistoryElement;
    int _newestPTSSyncHistoryElement;
}

+ (void)initialize;

- (void)dealloc;
- (id)nodeType;
- (struct OpaqueCMClock *)masterClock;
- (void)setMasterClock:(struct OpaqueCMClock *)arg1;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 forInput:(id)arg2;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)handleDroppedSample:(id)arg1 forInput:(id)arg2;
- (id)initWithMediaType:(unsigned int)arg1;
- (void)setSourceClock:(struct OpaqueCMClock *)arg1;
- (struct opaqueCMSampleBuffer *)_newRetimedVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 updatePTSSyncHistory:(_Bool)arg2;
- (CDStruct_1b6d18a9)_getSyncedTimeForSourceTime:(CDStruct_1b6d18a9)arg1;
- (void)_updatePTSSyncHistoryWithSourceTime:(CDStruct_1b6d18a9)arg1 syncedTime:(CDStruct_1b6d18a9)arg2;
- (void)_synchronizeDetectedFaces:(id)arg1 metadata:(id)arg2 timescale:(int)arg3;
- (struct OpaqueCMClock *)sourceClock;

@end
