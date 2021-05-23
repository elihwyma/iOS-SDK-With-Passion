/*
 Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

#import <Foundation/NSObject.h>

@interface IMDMessageSortOrderAssigner : NSObject

- (id)messageWithGUID:(id)arg1;
- (id)copyOfMessagesWithReplyToGUID:(id)arg1;
- (void)compareMessageToOtherMessagesWithSameReplyToGUIDAndAssignSortID:(id)arg1 existingMessagesWithSameReplyToGUID:(id)arg2;
- (void)assignSortIDToIncomingMessageWithNoExistingMessagesWithSameReplyToGUID:(id)arg1 onChat:(id)arg2;
- (void)assignSortIDToIncomingMessage:(id)arg1 onChat:(id)arg2;
- (void)persistMessage:(id)arg1;
- (void)assignAndPersistSortIDForIncomingMessage:(id)arg1 onChat:(id)arg2;

@end
