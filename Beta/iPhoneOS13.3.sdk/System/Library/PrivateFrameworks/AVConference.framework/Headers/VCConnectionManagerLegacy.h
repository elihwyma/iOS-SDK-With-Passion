/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <AVConference/VCConnectionManager.h>

@class NSString;

@protocol VCConnectionProtocol;

__attribute__((visibility("hidden")))
@interface VCConnectionManagerLegacy : VCConnectionManager

{
    id <VCConnectionProtocol> _pendingPrimaryConnection;
    id <VCConnectionProtocol> _pendingSecondaryConnection;
    NSString *_relayConnectionID;
}

@property (retain, nonatomic) id <VCConnectionProtocol> pendingPrimaryConnection;
@property (retain, nonatomic) id <VCConnectionProtocol> pendingSecondaryConnection;
@property (copy, nonatomic) NSString *relayConnectionID;

- (id)init;
- (void)dealloc;
- (int)addConnection:(id)arg1;
- (int)removeConnection:(id)arg1;
- (int)shouldNominateCandidatePairInternal:(struct tagCANDIDATEPAIR *)arg1 interfaceMask:(int)arg2 nominated:(int *)arg3 demote:(int *)arg4 connectionPriority:(int *)arg5 replaceOnly:(int *)arg6;
- (_Bool)shouldNominateConnection:(id)arg1;
- (int)nominateConnection:(id)arg1 asPrimary:(_Bool)arg2 interfaceMask:(int)arg3 demote:(int *)arg4 connectionPriority:(int *)arg5 replaceOnly:(int *)arg6;
- (id)getPrimaryConnectionToBeCompared;
- (void)reportConnection:(id)arg1 isInitialConnection:(_Bool)arg2;
- (int)removeConnectionWithIPPort:(struct tagIPPORT *)arg1 isLocalInterface:(_Bool)arg2;
- (int)removeConnectionWithIPPortInternal:(struct tagIPPORT *)arg1 isLocalInterface:(_Bool)arg2;
- (int)updateStateWithCurrentConnection:(id)arg1 asPrimary:(_Bool)arg2 interfaceMask:(int)arg3 demote:(int *)arg4 replaceOnly:(int *)arg5;
- (id)getSecondaryConnectionToBeCompared;
- (int)shouldNominateCandidatePair:(struct tagCANDIDATEPAIR *)arg1 interfaceMask:(int)arg2 nominated:(int *)arg3 demote:(int *)arg4 connectionPriority:(int *)arg5 replaceOnly:(int *)arg6;
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

@end
