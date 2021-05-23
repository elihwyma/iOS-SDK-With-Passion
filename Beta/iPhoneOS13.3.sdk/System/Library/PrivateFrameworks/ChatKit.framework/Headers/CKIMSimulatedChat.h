/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <IMCore/IMChat.h>

@class CKIMSimulatedAccount, IMHandle, NSArray, NSString;

@protocol CKIMSimulatedChatDelegate;

@interface CKIMSimulatedChat : IMChat

{
    id <CKIMSimulatedChatDelegate> _delegate;
    CKIMSimulatedAccount *_simulatedAccount;
    NSString *_simulatedGUID;
    NSArray *_incomingHandles;
    IMHandle *_outgoingHandle;
    unsigned long long _currentMessageID;
    NSString *_simulatedChatIdentifier;
}

@property (nonatomic, readonly) CKIMSimulatedAccount *simulatedAccount;
@property (nonatomic, readonly) NSString *simulatedGUID;
@property (nonatomic, readonly) NSArray *incomingHandles;
@property (nonatomic, readonly) IMHandle *outgoingHandle;
@property (nonatomic, readonly) unsigned long long currentMessageID;
@property (copy, nonatomic) NSString *simulatedChatIdentifier;
@property (weak, nonatomic) id <CKIMSimulatedChatDelegate> delegate;

+ (id)prepopulatedChat;

- (void)sendMessage:(id)arg1;
- (id)account;
- (id)participants;
- (id)guid;
- (id)recipient;
- (id)chatIdentifier;
- (unsigned char)chatStyle;
- (void)markAsAutoSpamReported;
- (id)loadMessagesBeforeDate:(id)arg1 limit:(unsigned long long)arg2 loadImmediately:(_Bool)arg3;
- (void)simulatedDaemon:(id)arg1 willSendBalloonPayload:(id)arg2 attachments:(id)arg3 messageGUID:(id)arg4 bundleID:(id)arg5;
- (void)_sendMessage:(id)arg1 adjustingSender:(_Bool)arg2 shouldQueue:(_Bool)arg3;
- (void)chat:(id)arg1 didSendMessage:(id)arg2 finished:(_Bool)arg3;
- (_Bool)_handleIncomingItem:(id)arg1;
- (id)_messageWithGUID:(id)arg1;
- (id)initWithIncomingIDs:(id)arg1 outgoingID:(id)arg2 messageIDOffset:(unsigned long long)arg3 service:(id)arg4;

@end
