/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <Foundation/NSObject.h>

#import <TelephonyUtilities/Swift-Protocol.h>

@class NSSet, NSString, NSUUID, TUContactsDataProvider, TUConversationMember, TUHandle;

@interface TUConversation : NSObject <Swift>

{
    _Bool _audioEnabled;
    _Bool _videoEnabled;
    _Bool _locallyCreated;
    _Bool _hasJoined;
    TUContactsDataProvider *_contactsDataProvider;
    NSUUID *_UUID;
    NSUUID *_groupUUID;
    long long _state;
    NSSet *_participantHandles;
    NSSet *_remoteMembers;
    NSSet *_activeRemoteParticipants;
    long long _avcSessionToken;
    NSString *_avcSessionIdentifier;
    TUConversationMember *_localMember;
    NSUUID *_messagesGroupUUID;
    TUHandle *_initiator;
    NSString *_messagesGroupName;
    long long _maxVideoDecodesAllowed;
    NSObject *_reportingHierarchyToken;
    NSObject *_reportingHierarchySubToken;
}

@property (nonatomic, readonly) TUContactsDataProvider *contactsDataProvider;
@property (nonatomic) long long state;
@property (nonatomic) long long avcSessionToken;
@property (copy, nonatomic) NSString *avcSessionIdentifier;
@property (nonatomic, getter=isAudioEnabled) _Bool audioEnabled;
@property (nonatomic, getter=isVideoEnabled) _Bool videoEnabled;
@property (nonatomic, getter=isLocallyCreated) _Bool locallyCreated;
@property (nonatomic, getter=hasJoined) _Bool hasJoined;
@property (retain, nonatomic) TUConversationMember *localMember;
@property (copy, nonatomic) NSSet *remoteMembers;
@property (retain, nonatomic) NSUUID *messagesGroupUUID;
@property (copy, nonatomic) NSSet *participantHandles;
@property (copy, nonatomic) NSSet *activeRemoteParticipants;
@property (retain, nonatomic) TUHandle *initiator;
@property (copy, nonatomic) NSString *messagesGroupName;
@property (nonatomic) long long maxVideoDecodesAllowed;
@property (retain, nonatomic) NSObject *reportingHierarchyToken;
@property (retain, nonatomic) NSObject *reportingHierarchySubToken;
@property (nonatomic, readonly) NSUUID *UUID;
@property (nonatomic, readonly) NSUUID *groupUUID;

+ (_Bool)supportsSecureCoding;
+ (id)numberFormatter;
+ (id)emptyConversationWithGroupUUID:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)displayName;
- (id)initWithUUID:(id)arg1 groupUUID:(id)arg2;
- (_Bool)isEqualToConversation:(id)arg1;
- (id)initiatorLocalizedName;
- (_Bool)isRepresentedByRemoteMembers:(id)arg1;

@end
