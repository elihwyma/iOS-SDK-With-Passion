/*
 Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

#import <NSObject.h>

@class CUTWeakReference, IDSBaseSocketPairConnection, NSArray, NSDictionary, NSError, NSMutableDictionary, NSNumber, NSSet, NSString;

@protocol OS_dispatch_queue;

@interface _IDSGroupSession : NSObject

{
    id _delegateContext;
    id _boostContext;
    NSString *_uniqueID;
    NSString *_instanceID;
    NSString *_accountID;
    NSSet *_destinations;
    NSString *_fromID;
    IDSBaseSocketPairConnection *_unreliableSocketPairConnection;
    CUTWeakReference *_delegate;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _isInvalidated;
    unsigned int _state;
    long long _transportType;
    unsigned long long _connectionCountHint;
    _Bool _needsToWaitForPreConnectionData;
    _Bool _disallowCellularInterface;
    _Bool _disallowWifiInterface;
    unsigned long long _preferredAddressFamily;
    _Bool _preferCellularForCallSetup;
    NSString *_clientUUID;
    _Bool _alwaysSkipSelf;
    unsigned int _sessionEndedReason;
    NSMutableDictionary *_preferences;
    NSMutableDictionary *_sessionConfig;
    _Bool _useConfServer;
    NSString *_stableGroupID;
    NSString *_groupID;
    NSDictionary *_participantInfo;
    struct cfs_client_s *_cfs_client;
    int _cfs_requestID;
    _Bool _cfsJoinReply;
    _Bool _didJoinCallback;
    _Bool _cfsLeaveReply;
    _Bool _didLeaveCallback;
    NSArray *_existingParticipants;
    NSError *_joinLeaveError;
    NSNumber *_qrReason;
    NSNumber *_previousError;
}

@property (nonatomic, readonly) NSString *uniqueID;
@property (nonatomic, readonly) unsigned int state;
@property (nonatomic, readonly) unsigned int sessionEndedReason;
@property (retain, nonatomic) id boostContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)setPreferences:(id)arg1;
- (void)xpcObject:(id)arg1 objectContext:(id)arg2;
- (void)session:(id)arg1 didReceiveReport:(id)arg2;
- (void)daemonDisconnected;
- (void)groupSessionDidTerminate:(id)arg1;
- (void)groupSessionEnded:(id)arg1 withReason:(unsigned int)arg2 error:(id)arg3;
- (void)sessionDidJoinGroup:(id)arg1 participantsInfo:(id)arg2 error:(id)arg3;
- (void)sessionDidJoinGroup:(id)arg1 participantInfo:(id)arg2 error:(id)arg3;
- (void)sessionDidJoinGroup:(id)arg1 participantUpdateDictionary:(id)arg2 error:(id)arg3;
- (void)sessionDidLeaveGroup:(id)arg1 error:(id)arg2;
- (void)session:(id)arg1 participantDidJoinGroupWithInfo:(id)arg2;
- (void)session:(id)arg1 participantDidLeaveGroupWithInfo:(id)arg2;
- (void)session:(id)arg1 didReceiveActiveParticipants:(id)arg2 success:(_Bool)arg3;
- (id)initWithAccount:(id)arg1 destinations:(id)arg2 options:(id)arg3 delegateContext:(id)arg4;
- (void)updateMembers:(id)arg1 withContext:(id)arg2 triggeredLocally:(_Bool)arg3;
- (void)updateParticipantData:(id)arg1 withContext:(id)arg2;
- (void)setParticipantInfo:(id)arg1;
- (void)joinWithOptions:(id)arg1;
- (void)leaveGroupSession;
- (void)requestActiveParticipants;
- (void)_broadcastNewSessionToDaemon;
- (void)_cleanupSocketPairConnections;
- (void)_callDelegateWithBlock:(CDUnknownBlockType)arg1;

@end
