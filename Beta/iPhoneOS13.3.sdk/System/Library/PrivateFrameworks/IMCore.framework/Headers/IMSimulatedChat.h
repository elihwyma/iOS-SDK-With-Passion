/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <IMCore/IMChat.h>

@class IMSimulatedAccount, NSMutableArray, NSString;

@protocol IMSimulatedChatDelegate;

@interface IMSimulatedChat : IMChat

{
    id <IMSimulatedChatDelegate> _delegate;
    IMSimulatedAccount *_simulatedAccount;
    unsigned long long _currentMessageID;
    NSString *_simulatedChatIdentifier;
    NSMutableArray *_simulatedAttachments;
    NSString *_simulatedDisplayName;
}

@property (nonatomic, readonly) IMSimulatedAccount *simulatedAccount;
@property (nonatomic, readonly) unsigned long long currentMessageID;
@property (copy, nonatomic) NSString *simulatedChatIdentifier;
@property (nonatomic, readonly) NSMutableArray *simulatedAttachments;
@property (copy, nonatomic) NSString *simulatedDisplayName;
@property (weak, nonatomic) id <IMSimulatedChatDelegate> delegate;

- (id)attachments;
- (id)displayName;
- (void)sendMessage:(id)arg1;
- (id)account;
- (void)setDisplayName:(id)arg1;
- (id)chatIdentifier;
- (void)markAsAutoSpamReported;
- (long long)joinState;
- (id)loadMessagesBeforeDate:(id)arg1 limit:(unsigned long long)arg2 loadImmediately:(_Bool)arg3;
- (void)simulatedDaemon:(id)arg1 willSendBalloonPayload:(id)arg2 attachments:(id)arg3 messageGUID:(id)arg4 bundleID:(id)arg5;
- (_Bool)_handleIncomingItem:(id)arg1;
- (id)_messageWithGUID:(id)arg1;
- (id)initWithIncomingIDs:(id)arg1 messageIDOffset:(unsigned long long)arg2 account:(id)arg3;
- (void)chat:(id)arg1 didSendMessage:(id)arg2;

@end
