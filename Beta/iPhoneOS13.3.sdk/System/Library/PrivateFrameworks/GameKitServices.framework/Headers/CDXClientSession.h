/*
 Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

#import <Foundation/NSObject.h>

@class CDXClient, NSData, NSIndexSet, NSMutableIndexSet;

@protocol CDXClientSessionDelegate, OS_dispatch_source;

@interface CDXClientSession : NSObject

{
    id <CDXClientSessionDelegate> delegate_;
    CDXClient *CDXClient_;
    NSData *ticket_;
    NSData *sessionKey_;
    NSData *sessionKeyPrepped_;
    NSMutableIndexSet *participantsInFlight_;
    long long retransmitAttempts_;
    NSData *lastSent_;
    unsigned short seq_;
    unsigned char pid_;
    unsigned short *ack_;
    NSObject<OS_dispatch_source> *retransmitTimer_;
    CDUnknownBlockType inboundHandler_;
}

@property (retain, nonatomic, readonly) CDXClient *CDXClient;
@property (nonatomic) id <CDXClientSessionDelegate> delegate;
@property (copy, nonatomic) NSData *ticket;
@property (copy, nonatomic, readonly) NSData *sessionKey;
@property (copy, nonatomic, readonly) NSIndexSet *participantsInFlight;
@property (copy, nonatomic) CDUnknownBlockType inboundHandler;

- (void)dealloc;
- (void)invalidate;
- (_Bool)sendData:(id)arg1;
- (id)encrypt:(id)arg1;
- (void)stopRetransmitTimer;
- (_Bool)sendRaw:(id)arg1 toParticipants:(id)arg2;
- (_Bool)retransmitEvent;
- (_Bool)sendData:(id)arg1 toParticipants:(id)arg2;
- (void)resetRetransmitTimer;
- (id)decrypt:(id)arg1 ticket:(id)arg2;
- (id)initWithCDXClient:(id)arg1 ticket:(id)arg2 sessionKey:(id)arg3;
- (void)recvRaw:(id)arg1 ticket:(id)arg2;

@end
