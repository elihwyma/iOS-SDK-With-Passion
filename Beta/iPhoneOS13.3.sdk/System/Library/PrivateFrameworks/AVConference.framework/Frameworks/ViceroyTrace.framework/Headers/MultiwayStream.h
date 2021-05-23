/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/Frameworks/ViceroyTrace.framework/ViceroyTrace
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MultiwayStream : NSObject

{
    NSString *_streamID;
    int _interval;
    int _frequency;
    double _lastReceivedVideoStallTime;
    double _currentStallTime;
    double _totalVideoStallTime;
    double _maxVideoStallTime;
    unsigned short _significantVideoStallCount;
    unsigned short _audioErasureCount;
    double _totalAudioErasureTime;
    double _averageFramerateSum;
    unsigned short _averageFramerateReportCounter;
    double _averageJitterLengthSum;
    unsigned short _averageJitterReportCounter;
    int _totalVideoPacketsReceived;
    int _oooPacketCount;
    unsigned int _totalFIRDemandCounter;
    unsigned int _totalFIRCounter;
    unsigned int _videoFrameDecodedButSkippedCounter;
    unsigned int _videoFrameImcompleteNextTSCounter;
    unsigned int _videoFrameTotalIncompleteCounter;
    unsigned int _decodedVideoFrameEnqueueCounter;
}

- (void)dealloc;
- (void)processData:(id)arg1;
- (unsigned int)RTPeriod;
- (unsigned int)totalFIRDemandCounter;
- (unsigned int)totalFIRCounter;
- (unsigned int)videoFrameDecodedButSkippedCounter;
- (unsigned int)videoFrameImcompleteNextTSCounter;
- (unsigned int)videoFrameTotalIncompleteCounter;
- (unsigned int)decodedVideoFrameEnqueueCounter;
- (id)initStreamWithID:(id)arg1;
- (unsigned short)significantVideoStallCount;
- (double)videoStallTotalTime;
- (unsigned short)audioErasureCount;
- (double)audioErasureTotalTime;
- (double)averageFramerateSum;
- (unsigned short)averageFramerateReportCounter;
- (double)averageJitterLengthSum;
- (unsigned short)averageJitterReportCounter;
- (unsigned int)oooPacketCount;
- (unsigned int)totalVideoPacketsReceived;

@end
