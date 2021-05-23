/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface IMCommLimitsPolicyCache : NSObject

{
    NSMutableDictionary *_conversationContextToParticipantIDsHash;
    NSMutableDictionary *_participantIDsHashToConversationContext;
    NSMutableDictionary *_participantIDsHashToChatIdentifier;
    NSMutableDictionary *_chatIdentifierToParticipantIDsHash;
}

@property (retain, nonatomic) NSMutableDictionary *conversationContextToParticipantIDsHash;
@property (retain, nonatomic) NSMutableDictionary *participantIDsHashToConversationContext;
@property (retain, nonatomic) NSMutableDictionary *participantIDsHashToChatIdentifier;
@property (retain, nonatomic) NSMutableDictionary *chatIdentifierToParticipantIDsHash;

- (id)init;
- (id)conversationContextForChat:(id)arg1;
- (id)chatForParticipantIDsHash:(id)arg1;
- (void)addTrackingForChat:(id)arg1;
- (void)removeTrackingForChat:(id)arg1;
- (_Bool)isFetchingCommLimitsPolicyForChat:(id)arg1;
- (id)chatForConversationContext:(id)arg1;
- (void)addTrackingForConversationContext:(id)arg1 forParticipantIDsHash:(id)arg2;
- (void)addSentinelContextForParticipantIDsHash:(id)arg1;
- (id)contextForParticipantIDsHash:(id)arg1;

@end
