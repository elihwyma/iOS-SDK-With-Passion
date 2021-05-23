/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface SenderLargeFrameInfo : NSObject

{
    double probingInterval;
    double startTime;
    double lastProbingSequenceTimeExpect;
    double lastProbingSequenceTimeActual;
    unsigned int largeFrameSizeRequested;
    unsigned int largeFrameSizeAtCurrentBandwidth;
    unsigned int probingSequencePacketSize;
    unsigned int probingSequencePacketCount;
    int probingSequenceCount;
    int totalLargeFrameWaste;
    _Bool isLastFrameProbingSequence;
    _Bool isLargeFrameRequestDisabled;
}

@property (nonatomic) double startTime;
@property (nonatomic) double lastProbingSequenceTimeExpect;
@property (nonatomic) double lastProbingSequenceTimeActual;
@property (nonatomic) unsigned int largeFrameSizeRequested;
@property (nonatomic) unsigned int largeFrameSizeAtCurrentBandwidth;
@property (nonatomic) unsigned int probingSequencePacketSize;
@property (nonatomic) unsigned int probingSequencePacketCount;
@property (nonatomic) int probingSequenceCount;
@property (nonatomic) int totalLargeFrameWaste;
@property (nonatomic) _Bool isLastFrameProbingSequence;
@property (nonatomic) _Bool isLargeFrameRequestDisabled;

@end
