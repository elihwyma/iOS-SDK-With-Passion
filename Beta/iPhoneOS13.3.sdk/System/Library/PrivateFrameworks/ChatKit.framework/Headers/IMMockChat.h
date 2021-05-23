/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <IMCore/IMChat.h>

@class IMHandle, IMMessage, NSArray;

@interface IMMockChat : IMChat

{
    NSArray *_mockChatItems;
    IMHandle *_incomingHandle;
    IMHandle *_outgoingHandle;
    IMMessage *_lastMockIMMessage;
    NSArray *_extraParticipants;
    unsigned long long _mockUnreadMessageCount;
}

@property (retain, nonatomic) NSArray *mockChatItems;
@property (retain, nonatomic) IMHandle *incomingHandle;
@property (retain, nonatomic) IMHandle *outgoingHandle;
@property (retain, nonatomic) IMMessage *lastMockIMMessage;
@property (retain, nonatomic) NSArray *extraParticipants;
@property (nonatomic) unsigned long long mockUnreadMessageCount;

- (id)init;
- (id)displayName;
- (unsigned long long)messageCount;
- (id)participants;
- (id)recipient;
- (id)lastMessage;
- (id)chatItems;
- (id)lastFinishedMessage;
- (id)lastFinishedMessageDate;
- (unsigned long long)unreadMessageCount;
- (id)_chatItemFromMockItemInfo:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)_messageFromMockItemInfo:(id)arg1;
- (void)deleteChatItems:(id)arg1;
- (void)addExtraParticipants:(id)arg1;
- (id)loadMessagesBeforeDate:(id)arg1 limit:(unsigned long long)arg2 loadImmediately:(_Bool)arg3;
- (_Bool)deleteAllHistory;
- (void)setupWithMockItemInfoArray:(id)arg1;
- (void)appendMockItemWithInfo:(id)arg1;

@end
