/*
 Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

#import <NSObject.h>

@class MFMailMessageStore, NSArray, NSMutableArray;

@interface _MFIMAPAppendMessagesContext : NSObject

{
    MFMailMessageStore *store;
    NSArray *messages;
    NSArray *flagsToSet;
    NSArray *customFlagsToSet;
    _Bool someMsgsWentToServer;
    NSMutableArray *msgsAppendedOffline;
    NSMutableArray *missedMessages;
    NSMutableArray *newMessageIDs;
    NSMutableArray *newMessages;
    unsigned int unreadCountDelta;
    unsigned int destUidNext;
}

@end
