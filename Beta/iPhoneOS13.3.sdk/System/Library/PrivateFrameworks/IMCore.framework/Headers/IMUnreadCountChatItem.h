/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <IMCore/IMTranscriptChatItem.h>

@interface IMUnreadCountChatItem : IMTranscriptChatItem

{
    unsigned long long _unreadCount;
}

@property (nonatomic, readonly) unsigned long long unreadCount;

- (id)_initWithItem:(id)arg1 unreadCount:(unsigned long long)arg2;

@end
