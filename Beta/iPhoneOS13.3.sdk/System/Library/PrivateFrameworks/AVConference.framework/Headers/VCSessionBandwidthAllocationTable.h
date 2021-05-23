/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@class NSArray, NSDictionary, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VCSessionBandwidthAllocationTable

{
    unsigned char _type;
    NSMutableDictionary *_aggregatedAudioOnlyTable;
    NSMutableDictionary *_aggregatedAudioVideoTable;
    NSMutableDictionary *_aggregatedAudioOnlyTableWithRedundancy;
    NSMutableDictionary *_aggregatedAudioVideoTableWithRedundancy;
    NSMutableDictionary *_audioTable;
    NSMutableDictionary *_videoTable;
    NSMutableDictionary *_audioOnlyBitrateToStreamIDsTable;
    NSMutableDictionary *_audioVideoBitrateToStreamIDsTable;
    NSMutableDictionary *_videoOnlyBitrateToStreamIDsTable;
    NSMutableDictionary *_streamIDToEntryTable;
}

@property (nonatomic, readonly) NSDictionary *aggregatedAudioOnlyTable;
@property (nonatomic, readonly) NSDictionary *aggregatedAudioVideoTable;
@property (nonatomic, readonly) NSDictionary *aggregatedAudioOnlyTableWithRedundancy;
@property (nonatomic, readonly) NSDictionary *aggregatedAudioVideoTableWithRedundancy;
@property (nonatomic, readonly) NSDictionary *audioOnlyBitrateToStreamIDsTable;
@property (nonatomic, readonly) NSDictionary *audioVideoBitrateToStreamIDsTable;
@property (nonatomic, readonly) NSDictionary *videoOnlyBitrateToStreamIDsTable;
@property (nonatomic, readonly) NSArray *audioEntries;
@property (nonatomic, readonly) NSArray *videoEntries;

- (void)dealloc;
- (id)initWithType:(unsigned char)arg1;
- (void)generate;
- (void)addBandwidthAllocationTableEntry:(id)arg1;
- (id)entryForStreamID:(id)arg1;
- (void)generateAudioOnlyBandwidthAllocationTable;
- (void)generateAudioVideoBandwidthAllocationTable;
- (void)generateAudioOnlyBandwidthAllocationTableWithRedundancy;
- (void)generateAudioVideoBandwidthAllocationTableWithRedundancy;
- (void)generateAudioOnlyBitrateToStreamIDsTable;
- (void)generateVideoOnlyBitrateToStreamIDsTable;
- (void)generateAudioVideoBitrateToStreamIDsTable;
- (id)newAggregateTableWithAudioTable:(id)arg1 videoTable:(id)arg2 isVideoEnabled:(_Bool)arg3 isRedundancyEnabled:(_Bool)arg4;
- (void)printTable:(id)arg1;
- (id)newBitrateToStreamIDsTableWithAudioTable:(id)arg1 videoTable:(id)arg2;

@end
