/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <Foundation/NSObject.h>

#import <TelephonyUtilities/Swift-Protocol.h>

@class NSSet, NSString, NSURL, NSUUID, TUHandle;

@interface TUJoinConversationRequest : NSObject <Swift>

{
    _Bool _videoEnabled;
    _Bool _shouldSuppressInCallUI;
    _Bool _wantsStagingArea;
    _Bool _showUIPrompt;
    _Bool _uplinkMuted;
    NSSet *_remoteMembers;
    NSUUID *_UUID;
    TUHandle *_callerID;
    NSUUID *_messagesGroupUUID;
    NSString *_messagesGroupName;
}

@property (retain, nonatomic) TUHandle *callerID;
@property (copy, nonatomic) NSUUID *messagesGroupUUID;
@property (copy, nonatomic) NSString *messagesGroupName;
@property (nonatomic) _Bool showUIPrompt;
@property (nonatomic, getter=isUplinkMuted) _Bool uplinkMuted;
@property (copy, nonatomic, readonly) NSSet *remoteMembers;
@property (retain, nonatomic) NSUUID *UUID;
@property (nonatomic, getter=isVideoEnabled) _Bool videoEnabled;
@property (nonatomic) _Bool shouldSuppressInCallUI;
@property (nonatomic) _Bool wantsStagingArea;
@property (nonatomic, readonly) NSURL *URL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)sanitizedMembersFromMembers:(id)arg1;
+ (id)remoteMembersFromURLComponents:(id)arg1;
+ (id)callerIDFromURLComponents:(id)arg1;
+ (_Bool)videoEnabledFromURLComponents:(id)arg1;
+ (_Bool)shouldSuppressInCallUIFromURLComponents:(id)arg1;
+ (_Bool)wantsStagingAreaFromURLComponents:(id)arg1;
+ (id)messagesGroupUUIDFromURLComponents:(id)arg1;
+ (id)messagesGroupNameFromURLComponents:(id)arg1;
+ (_Bool)showUIPromptFromURLComponents:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)bundleIdentifier;
- (id)queryItems;
- (id)handles;
- (id)initWithRemoteMembers:(id)arg1;
- (id)remoteMembersQueryItem;
- (id)callerIDQueryItem;
- (id)videoEnabledQueryItem;
- (id)shouldSuppressInCallUIQueryItem;
- (id)wantsStagingAreaQueryItem;
- (id)messagesGroupUUIDQueryItem;
- (id)messagesGroupNameQueryItem;
- (id)showUIPromptQueryItem;
- (id)initWithConversation:(id)arg1;
- (id)initWithGroupUUID:(id)arg1 localParticipantHandle:(id)arg2 remoteParticipantHandles:(id)arg3;

@end
