/*
 Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface GKVoiceChatDictionary : NSObject

{
    NSMutableDictionary *actualDictionary;
    unsigned long long type;
    unsigned int orignalCallID;
}

@property unsigned int callID;
@property (readonly) unsigned int originalCallID;
@property long long nonce;

+ (_Bool)validateDictionary:(id)arg1;
+ (_Bool)validateInvite:(id)arg1;
+ (_Bool)validateReply:(id)arg1;
+ (_Bool)validateCancel:(id)arg1;
+ (_Bool)validateFocus:(id)arg1;
+ (id)inviteDictionaryToParticipantID:(id)arg1 fromParticipantID:(id)arg2 connectionData:(id)arg3 callID:(unsigned int)arg4 focus:(_Bool)arg5;
+ (id)dictionaryFromData:(id)arg1;

- (void)dealloc;
- (id)description;
- (unsigned long long)type;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)version;
- (unsigned long long)response;
- (id)participantID;
- (_Bool)isFocus;
- (id)connectionData;
- (id)fromParticipantID;
- (id)remoteVCPartyID;
- (id)localVCPartyID;
- (_Bool)matchesNonce:(long long)arg1;
- (id)replyDictionary:(unsigned long long)arg1 connectionData:(id)arg2 callID:(unsigned int)arg3 focus:(_Bool)arg4;
- (id)cancelDictionary;
- (id)focusDictionary:(_Bool)arg1;
- (_Bool)isInviteDictionary;
- (_Bool)isCancelDictionary;
- (_Bool)isReplyDictionary;
- (_Bool)isFocusDictionary;
- (_Bool)matchesResponse:(id)arg1;
- (void)setFromParticipantID:(id)arg1;
- (void)setFocus:(_Bool)arg1;
- (id)createBlob;
- (id)setLocalVCPartyID:(id)arg1;
- (id)setRemoteVCPartyID:(id)arg1;

@end
