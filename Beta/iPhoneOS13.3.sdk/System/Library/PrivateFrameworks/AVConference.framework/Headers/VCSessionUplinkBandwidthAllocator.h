/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@class NSDictionary, VCSessionBandwidthAllocationTable;

__attribute__((visibility("hidden")))
@interface VCSessionUplinkBandwidthAllocator

{
    VCSessionBandwidthAllocationTable *_table;
    NSDictionary *_currentTable;
    _Bool _videoEnabled;
    _Bool _redundancyEnabled;
}

@property (nonatomic, getter=isVideoEnabled) _Bool videoEnabled;
@property (nonatomic, getter=isRedundancyEnabled) _Bool redundancyEnabled;

- (id)init;
- (void)dealloc;
- (void)_assignCurrentTables;
- (_Bool)_isAvailableStreamConfiguration:(id)arg1;
- (id)_audioEntriesForTargetBitrate:(unsigned int)arg1;
- (id)_videoEntriesForTargetBitrate:(unsigned int)arg1 ignorePausedOnDemandStreams:(_Bool)arg2 remainingBitrate:(unsigned int *)arg3;
- (void)addBandwidthAllocationTableEntry:(id)arg1 updateNow:(_Bool)arg2;
- (_Bool)enableVideoStream:(_Bool)arg1 streamID:(unsigned short)arg2;
- (id)audioStreamIDsforTargetBitrate:(unsigned int)arg1;
- (id)audioRepairStreamIDsforTargetBitrate:(unsigned int)arg1;
- (id)videoMediaBitratesForTargetNetworkBitrate:(unsigned int)arg1 ignorePausedOnDemandStreams:(_Bool)arg2;
- (id)videoStreamIDsforTargetBitrate:(unsigned int)arg1 ignorePausedOnDemandStreams:(_Bool)arg2;
- (id)videoRepairStreamIDsforTargetBitrate:(unsigned int)arg1 ignorePausedOnDemandStreams:(_Bool)arg2;
- (id)videoRepairStreamIDsForStreamIDs;
- (id)audioRepairStreamIDsForStreamIDs;

@end
