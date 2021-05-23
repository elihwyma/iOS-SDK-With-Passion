/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <AVConference/VCConnectionManager.h>

@class VCSessionBitrateArbiter;

__attribute__((visibility("hidden")))
@interface VCConnectionManagerIDS : VCConnectionManager

{
    double _lastTimestampForRemoteSendingFromNonPrimary;
    double _lastTimestampPreferredRemoteInterfaceUpdated;
    unsigned int _sentPacketCount[256];
    unsigned int _sentByteCount[256];
    unsigned int _receivedPacketCount[256];
    unsigned int _receivedByteCount[256];
    VCSessionBitrateArbiter *_bitrateArbiter;
    _Bool _isMultiwaySession;
}

- (void)dealloc;
- (int)addConnection:(id)arg1;
- (int)removeConnection:(id)arg1;
- (id)getPrimaryConnectionToBeCompared;
- (void)reportConnection:(id)arg1 isInitialConnection:(_Bool)arg2;
- (id)getSecondaryConnectionToBeCompared;
- (void)updateCellularMTU:(int)arg1;
- (void)updateCellularTech:(int)arg1 forLocalInterface:(_Bool)arg2;
- (void)sourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg1 isSourceOnCellular:(_Bool *)arg2 isSourceIPv6:(_Bool *)arg3;
- (_Bool)shouldAcceptDataFromSourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg1;
- (id)copyConnectionWithSourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg1 isPrimary:(_Bool *)arg2;
- (void)updateSessionStats:(unsigned short)arg1;
- (void)updatePacketCountAndByteCountWithIndex:(unsigned char)arg1 packetSize:(int)arg2 numOfStreamId:(int)arg3 isPriorityIncluded:(_Bool)arg4 isOutgoing:(_Bool)arg5;
- (void)synchronizeParticipantGenerationCounter:(unsigned char)arg1;
- (unsigned int)getPacketCountWithIndex:(unsigned char)arg1 isOutgoing:(_Bool)arg2;
- (unsigned int)getByteCountWithIndex:(unsigned char)arg1 isOutgoing:(_Bool)arg2;
- (void)updateConnectionForDuplication;
- (id)initWithMultiwayEnabled:(_Bool)arg1;
- (void)resetParticipantGenerationCounter;
- (void)setPreferredLocalInterfaceForDuplication:(int)arg1;
- (void)setPreferredRemoteInterfaceForDuplication:(int)arg1;
- (_Bool)isPrimaryConnectionSameAsConnection:(id)arg1;
- (void)updatePrimaryWithConnection:(id)arg1;
- (void)updateSecondaryWithConnection:(id)arg1;
- (_Bool)addConnectionToConnectionArray:(id)arg1;
- (unsigned int)uplinkBitrateCapForConnectionType:(int)arg1;
- (unsigned int)downlinkBitrateCapForConnectionType:(int)arg1;
- (_Bool)selectPrimaryAndSecondaryWithConnection:(id)arg1;
- (void)handleSecondaryConnectionRemoved;
- (void)optOutAllStreamsForNonPrimaryConnections;
- (void)handlePrimaryConnectionRemoved;
- (void)resetPacketCountAndByteCountWithConnection:(id)arg1;
- (_Bool)shouldReplaceConnection:(id)arg1 withConnection:(id)arg2;

@end
