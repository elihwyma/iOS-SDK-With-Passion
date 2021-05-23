/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSMutableSet;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCSessionDownlinkBandwidthAllocator : NSObject

{
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSMutableArray *_clients;
    NSMutableDictionary *_selectedMediaEntriesForClients;
    NSMutableDictionary *_allocatedMediaEntriesForClients;
    NSMutableSet *_decoderConstrainedClients;
    NSMutableSet *_bandwidthConstrainedClients;
    NSMutableArray *_sortedMediaEntries;
    struct opaqueRTCReporting *_reportingAgent;
    unsigned int _maxConcurrentVideoClients;
}

- (void)dealloc;
- (void)reset;
- (id)initWithReportingAgent:(struct opaqueRTCReporting *)arg1;
- (void)actualNetworkBitrateVideoDidChangeForClient:(id)arg1;
- (void)actualNetworkBitrateAudioDidChangeForClient:(id)arg1;
- (id)distributeBitrate:(unsigned int)arg1;
- (void)registerForBandwidthAllocationWithClient:(id)arg1;
- (void)deregisterForBandwidthAllocationWithClient:(id)arg1;
- (unsigned int)requiredAudioBitrate:(unsigned int)arg1 highestAudioBitrates:(id)arg2;
- (void)sortMediaEntries;
- (unsigned long long)simultaneousTalkers;
- (void)updateHighestAudioBitrates:(id)arg1 bitrate:(unsigned int)arg2;
- (void)updateClient:(id)arg1 bandwidthConstrained:(_Bool)arg2 decoderConstrained:(_Bool)arg3;
- (void)updateSelectedMediaEntriesForClientWithUUID:(id)arg1;
- (void)reportingSessionParticipantEventBitrateChanged:(id)arg1 optedInNetworkBitrate:(unsigned int)arg2 actualNetworkBitrate:(unsigned int)arg3 optedInStreamID:(unsigned short)arg4 actualStreamID:(unsigned short)arg5;

@end
