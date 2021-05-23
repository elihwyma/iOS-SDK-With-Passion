/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface EDInteractionEventLogMultiplexer : NSObject

{
    NSArray *_logs;
}

@property (retain, nonatomic) NSArray *logs;

- (id)description;
- (id)initWithLogs:(id)arg1;
- (void)persistEvent:(id)arg1 date:(id)arg2 message:(id)arg3 data:(id)arg4;
- (void)persistEvent:(id)arg1 date:(id)arg2 conversationID:(long long)arg3 data:(id)arg4;
- (void)persistEvent:(id)arg1 dataFromMessage:(id)arg2;
- (void)persistEvent:(id)arg1 dataFromMessage:(id)arg2 account:(id)arg3;
- (void)persistEvent:(id)arg1 date:(id)arg2 message:(id)arg3 mailbox:(id)arg4;
- (void)persistEvent:(id)arg1 date:(id)arg2 message:(id)arg3 mailboxType:(long long)arg4;

@end
