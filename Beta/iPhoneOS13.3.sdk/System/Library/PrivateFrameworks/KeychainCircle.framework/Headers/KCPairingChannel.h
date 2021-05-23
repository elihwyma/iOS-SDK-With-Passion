/*
 Image: /System/Library/PrivateFrameworks/KeychainCircle.framework/KeychainCircle
 */

#import <Foundation/NSObject.h>

@class KCPairingChannelContext, NSString, NSXPCConnection, OTControl, OTJoiningConfiguration;

@interface KCPairingChannel : NSObject

{
    _Bool _needInitialSync;
    _Bool _initiator;
    _Bool _acceptorWillSendInitialSyncCredentials;
    _Bool _testFailSOS;
    _Bool _testFailOctagon;
    _Bool _sessionSupportsSOS;
    _Bool _sessionSupportsOctagon;
    unsigned int _counter;
    KCPairingChannelContext *_peerVersionContext;
    NSXPCConnection *_connection;
    OTControl *_otControl;
    NSString *_contextID;
    CDUnknownBlockType _nextOctagonState;
    CDUnknownBlockType _nextState;
    OTJoiningConfiguration *_joiningConfiguration;
}

@property KCPairingChannelContext *peerVersionContext;
@property _Bool initiator;
@property unsigned int counter;
@property _Bool acceptorWillSendInitialSyncCredentials;
@property (retain) NSXPCConnection *connection;
@property (retain) OTControl *otControl;
@property (retain) NSString *contextID;
@property (copy) CDUnknownBlockType nextOctagonState;
@property (copy) CDUnknownBlockType nextState;
@property (retain, nonatomic) OTJoiningConfiguration *joiningConfiguration;
@property (nonatomic) _Bool testFailSOS;
@property (nonatomic) _Bool testFailOctagon;
@property _Bool sessionSupportsSOS;
@property _Bool sessionSupportsOctagon;
@property (readonly) _Bool needInitialSync;

+ (id)pairingChannelAcceptor:(id)arg1;
+ (id)pairingChannelInitiator:(id)arg1;
+ (_Bool)isSupportedPlatform;

- (void)setConfiguration:(id)arg1;
- (id)initAsInitiator:(_Bool)arg1 version:(id)arg2;
- (void)oneStepTooMany:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)setNextStateError:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (id)compressData:(id)arg1;
- (id)decompressData:(id)arg1;
- (void)attemptSosUpgrade;
- (void)initiatorFirstPacket:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)initiatorSecondPacket:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)initiatorCompleteSecondPacketWithSOS:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)initiatorCompleteSecondPacketOctagon:(id)arg1 application:(id)arg2 complete:(CDUnknownBlockType)arg3;
- (void)initiatorThirdPacket:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)initiatorFourthPacket:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)acceptorFirstPacket:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)acceptorFirstOctagonPacket:(id)arg1 reply:(id)arg2 complete:(CDUnknownBlockType)arg3;
- (void)acceptorSecondPacket:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)acceptorSecondOctagonPacket:(id)arg1 reply:(id)arg2 complete:(CDUnknownBlockType)arg3;
- (void)acceptorThirdPacket:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (_Bool)ensureControlChannel;
- (void)validateStart:(CDUnknownBlockType)arg1;
- (void)exchangePacket:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (id)exchangePacket:(id)arg1 complete:(_Bool *)arg2 error:(id *)arg3;
- (void)setXPCConnectionObject:(id)arg1;
- (void)setControlObject:(id)arg1;
- (void)setSOSMessageFailForTesting:(_Bool)arg1;
- (void)setOctagonMessageFailForTesting:(_Bool)arg1;
- (void)setSessionSupportsOctagonForTesting:(_Bool)arg1;

@end
