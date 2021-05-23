/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <IMCore/IMAssociatedMessageChatItem.h>

@interface IMMessageAcknowledgmentChatItem : IMAssociatedMessageChatItem

{
    long long _messageAcknowledgmentType;
}

@property (nonatomic, readonly) long long messageAcknowledgmentType;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithItem:(id)arg1 sender:(id)arg2 messageAcknowledgmentType:(long long)arg3;

@end
