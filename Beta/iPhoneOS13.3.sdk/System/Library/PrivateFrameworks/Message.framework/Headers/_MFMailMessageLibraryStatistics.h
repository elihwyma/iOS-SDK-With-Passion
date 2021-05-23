/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>

@interface _MFMailMessageLibraryStatistics : NSObject

{
    _Bool _protectedDataAvailable;
    double _start;
    double _duration;
    unsigned long long _messages;
    unsigned long long _protectedMessages;
    unsigned long long _messageData;
    unsigned long long _protectedMessageData;
    unsigned long long _messagesDeleted;
    unsigned long long _messageDataDeleted;
    unsigned long long _messagesMarkedAsJournaled;
    unsigned long long _mailboxesNeedingReconcilication;
}

@property (nonatomic) double start;
@property (nonatomic) double duration;
@property (nonatomic) _Bool protectedDataAvailable;
@property (nonatomic) unsigned long long messages;
@property (nonatomic) unsigned long long protectedMessages;
@property (nonatomic) unsigned long long messageData;
@property (nonatomic) unsigned long long protectedMessageData;
@property (nonatomic) unsigned long long messagesDeleted;
@property (nonatomic) unsigned long long messageDataDeleted;
@property (nonatomic) unsigned long long messagesMarkedAsJournaled;
@property (nonatomic) unsigned long long mailboxesNeedingReconcilication;

@end
