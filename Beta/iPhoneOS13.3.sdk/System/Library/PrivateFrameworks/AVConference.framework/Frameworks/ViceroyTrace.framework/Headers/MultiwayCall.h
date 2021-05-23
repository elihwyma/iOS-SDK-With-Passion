/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/Frameworks/ViceroyTrace.framework/ViceroyTrace
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface MultiwayCall : NSObject

{
    NSString *_remoteParticipantID;
    NSMutableDictionary *_streams;
    _Bool _isAudioEnabled;
    _Bool _isVideoEnabled;
    _Bool _live;
    _Bool _isFullSize;
    int _duration;
    int _adjustedDuration;
    int _interval;
    int _frequency;
    unsigned long long _downlinkRateSum;
    unsigned int _downlinkRateUpdateCounter;
    unsigned long long _actualBitrateSum;
    unsigned int _actualBitrateUpdateCounter;
    unsigned int _videoStreamSwitchCount;
    unsigned int _audioStreamSwitchCount;
    unsigned int _downlinkTargetBitrateSwitchCount;
    unsigned int _timeToSeeFirstRemoteVideoFrame;
    unsigned int _timeToHearFirstRemoteAudioFrame;
    unsigned int _averageReceiveFramerate;
    unsigned int _averageJitterbufferLength;
    double _connectionTime;
    unsigned int _firstVideoFrameReceivedDelta;
    unsigned int _firstMKIReceivedDelta;
    unsigned int _firstDecodableVideoFrameDelta;
    _Bool _isVideoDegraded;
    unsigned int _videoDegradedTotalCounter;
    double _videoDegradedTotalTime;
    double _videoDegradedStartTime;
}

@property (readonly) NSString *remoteParticipantID;
@property (readonly, getter=isLive) _Bool live;
@property _Bool isAudioEnabled;
@property _Bool isVideoEnabled;
@property _Bool isFullSize;
@property int duration;
@property int adjustedDuration;
@property (readonly) NSMutableDictionary *streams;
@property unsigned int videoStreamSwitchCount;
@property unsigned int audioStreamSwitchCount;
@property unsigned int downlinkTargetBitrateSwitchCount;
@property unsigned int timeToSeeFirstRemoteVideoFrame;
@property unsigned int timeToHearFirstRemoteAudioFrame;
@property unsigned int averageJitterbufferLength;
@property double connectionTime;
@property unsigned int firstVideoFrameReceivedDelta;
@property unsigned int firstMKIReceivedDelta;
@property unsigned int firstDecodableVideoFrameDelta;
@property double videoDegradedStartTime;
@property _Bool isVideoDegraded;
@property unsigned int videoDegradedTotalCounter;
@property double videoDegradedTotalTime;

- (void)dealloc;
- (void)finalize;
- (unsigned int)RTPeriod;
- (unsigned short)significantVideoStallCount;
- (unsigned short)audioErasureCount;
- (double)audioErasureTotalTime;
- (id)initCallWithRemoteParticipantID:(id)arg1;
- (void)processDownlinkRateChange:(unsigned int)arg1;
- (void)processActualBitrateRateChange:(unsigned int)arg1;
- (unsigned long long)downlinkRateSum;
- (unsigned int)downlinkRateUpdateCounter;
- (unsigned long long)actualBitrateSum;
- (unsigned int)actualBitrateUpdateCounter;
- (double)significantVideoStallTotalTime;
- (void)processVideoDegraded:(_Bool)arg1;

@end
