/*
 Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

#import <Foundation/NSObject.h>

@interface GKConnection : NSObject

@property id eventDelegate;
@property (nonatomic) struct opaqueRTCReporting *reportingAgent;

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (_Bool)isRelayEnabled;
+ (id)externalAddressForSelfConnectionData:(id)arg1;
+ (id)externalAddressForCDXSelfConnectionData:(id)arg1;

- (void)connect;
- (struct OpaqueGCKSession *)gckSession;
- (unsigned int)gckPID;
- (id)initWithParticipantID:(id)arg1;
- (void)getLocalConnectionDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)getLocalConnectionDataForLocalGaming;
- (void)connectParticipantsWithConnectionData:(id)arg1 withSessionInfo:(id)arg2;
- (_Bool)convertPeerID:(id)arg1 toParticipantID:(id *)arg2;
- (_Bool)convertParticipantID:(id)arg1 toPeerID:(id *)arg2;
- (void)initiateRelayWithParticipant:(id)arg1 withConnectionData:(id)arg2 withRelayInfo:(id)arg3 didInitiate:(_Bool)arg4;
- (void)updateRelayWithParticipant:(id)arg1 withConnectionData:(id)arg2 withRelayInfo:(id)arg3 didInitiate:(_Bool)arg4;
- (id)networkStatistics;
- (void)preRelease;
- (void)setParticipantID:(id)arg1 forPeerID:(id)arg2;
- (void)cancelConnectParticipant:(id)arg1;
- (id)networkStatisticsDictionaryForGCKStats:(void *)arg1;

@end
