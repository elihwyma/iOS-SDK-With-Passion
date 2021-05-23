/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <Foundation/NSObject.h>

@class IDSService, NSArray, NSMutableSet, NSString;

@protocol MSPSharedTripGroupSessionDelegate, OS_os_transaction;

__attribute__((visibility("hidden")))
@interface MSPSharedTripGroupSession : NSObject

{
    _Bool _joined;
    NSString *_joinedFromHandle;
    NSString *_joinedFromAccountIdentifier;
    _Bool _initiator;
    NSString *_groupID;
    unsigned long long _nbClients;
    NSMutableSet *_liveModeParticipantIdentifiers;
    IDSService *_sharingService;
    NSMutableSet *_identifiers;
    NSObject<OS_os_transaction> *_transaction;
    NSString *_initiatorIdentifier;
    NSString *_initiatorDisplayName;
    id <MSPSharedTripGroupSessionDelegate> _delegate;
}

@property (nonatomic, readonly) _Bool inLiveMode;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *initiatorIdentifier;
@property (copy, nonatomic) NSString *initiatorDisplayName;
@property (nonatomic, readonly) NSArray *accountIdentifiers;
@property (weak, nonatomic) id <MSPSharedTripGroupSessionDelegate> delegate;

- (void)dealloc;
- (void)joinLiveModeFromHandle:(id)arg1 fromAccountID:(id)arg2;
- (_Bool)leaveLiveModeIfNeeded;
- (void)sendChunkedMessage:(id)arg1 to:(id)arg2;
- (void)_joinLiveModeFromHandle:(id)arg1 fromAccountID:(id)arg2;
- (void)leaveLiveModeForced;
- (void)_leaveLivemode;
- (void)_sharingEnded;
- (void)sendCommand:(id)arg1 fromHandle:(id)arg2 fromAccountID:(id)arg3;
- (void)_sharingEndedWithError:(id)arg1;
- (void)_sendChunkMessage:(id)arg1 to:(id)arg2 packet:(id)arg3;
- (_Bool)_validParticipant:(id)arg1;
- (id)initWithService:(id)arg1 groupID:(id)arg2 initiator:(_Bool)arg3 initiatorIdentifier:(id)arg4;
- (void)addSharingWith:(id)arg1;
- (_Bool)sessionIsAliveAfterRemovingSharingIdentifiers:(id)arg1;
- (id)_currentRoutePath;
- (void)participantDidJoin:(id)arg1;
- (void)participantDidLeave:(id)arg1;

@end
