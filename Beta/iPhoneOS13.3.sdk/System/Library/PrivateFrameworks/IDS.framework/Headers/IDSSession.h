/*
 Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

#import <NSObject.h>

@class NSString, _IDSSession;

@interface IDSSession : NSObject

{
    _IDSSession *_internal;
    NSString *_uniqueID;
    struct os_unfair_lock_s _uniqueIDLock;
}

@property (retain, nonatomic) NSString *uniqueID;
@property (nonatomic, readonly) int socket;
@property (nonatomic, readonly) NSString *sessionID;
@property (nonatomic, readonly) NSString *destination;
@property (nonatomic) _Bool isAudioEnabled;
@property (nonatomic) _Bool isMuted;
@property (nonatomic) long long invitationTimeOut;
@property (nonatomic, readonly) unsigned int sessionEndedReason;

- (void)dealloc;
- (id)description;
- (id)_internal;
- (unsigned int)state;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)endSession;
- (void)setPreferences:(id)arg1;
- (void)acceptInvitation;
- (void)cancelInvitation;
- (void)sendInvitationWithOptions:(id)arg1;
- (id)initWithAccount:(id)arg1 destinations:(id)arg2 options:(id)arg3;
- (unsigned long long)initialLinkType;
- (void)sendInvitationWithData:(id)arg1 declineOnError:(_Bool)arg2;
- (void)cancelInvitationWithRemoteEndedReasonOverride:(unsigned int)arg1;
- (void)cancelInvitationWithData:(id)arg1;
- (void)acceptInvitationWithData:(id)arg1;
- (void)declineInvitationWithData:(id)arg1;
- (void)declineInvitation;
- (void)endSessionWithData:(id)arg1;
- (void)sendSessionMessage:(id)arg1;
- (void)sendSessionMessage:(id)arg1 toDestinations:(id)arg2;
- (void)sendAllocationRequest:(id)arg1;
- (_Bool)sendData:(id)arg1 error:(id *)arg2;
- (void)reconnectSession;
- (_Bool)shouldUseSocketForTransport;
- (unsigned long long)MTUForAddressFamily:(unsigned long long)arg1;
- (id)initWithAccount:(id)arg1 destinations:(id)arg2 transportType:(long long)arg3;
- (id)_initWithAccount:(id)arg1 destinations:(id)arg2 transportType:(long long)arg3 uniqueID:(id)arg4;
- (void)sendInvitation;
- (void)sendInvitationWithData:(id)arg1;
- (void)setStreamPreferences:(id)arg1;
- (id)_streamPreferences;

@end
