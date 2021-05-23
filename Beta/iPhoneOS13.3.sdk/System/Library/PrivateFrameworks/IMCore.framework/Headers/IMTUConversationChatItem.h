/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <IMCore/IMTranscriptChatItem.h>

@class IMHandle, NSDate, NSUUID, TUConversation;

@interface IMTUConversationChatItem : IMTranscriptChatItem

{
    IMHandle *_conversationInitiator;
}

@property (weak, nonatomic, readonly) TUConversation *tuConversation;
@property (nonatomic, readonly) NSUUID *tuConversationUUID;
@property (nonatomic, readonly) IMHandle *conversationInitiator;
@property (nonatomic, readonly) _Bool isFromMe;
@property (nonatomic, readonly) NSDate *time;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)canDelete;
- (id)_initWithItem:(id)arg1 conversationInitiator:(id)arg2;
- (id)activeCall;

@end
