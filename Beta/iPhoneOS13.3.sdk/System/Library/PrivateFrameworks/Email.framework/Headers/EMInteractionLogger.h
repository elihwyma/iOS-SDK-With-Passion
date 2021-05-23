/*
 Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

#import <Foundation/NSObject.h>

@class EMRemoteConnection, NSMutableDictionary, NSString;

@protocol OS_dispatch_queue;

@interface EMInteractionLogger : NSObject

{
    _Bool _appLaunched;
    EMRemoteConnection *_connection;
    NSObject<OS_dispatch_queue> *_stateTrackingQueue;
    NSMutableDictionary *_viewedMessages;
    NSMutableDictionary *_messageListMessages;
    struct _NSRange _messageListVisibleRows;
}

@property (retain) EMRemoteConnection *connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *stateTrackingQueue;
@property (retain, nonatomic) NSMutableDictionary *viewedMessages;
@property (retain, nonatomic) NSMutableDictionary *messageListMessages;
@property (nonatomic) struct _NSRange messageListVisibleRows;
@property _Bool appLaunched;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)log;
+ (id)remoteInterface;

- (id)initWithRemoteConnection:(id)arg1;
- (void)_appWillEnterForeground;
- (void)_appDidEnterBackground;
- (id)_rescopedMessageObjectID:(id)arg1;
- (void)_xpcLogEvent:(id)arg1 date:(id)arg2 messageID:(id)arg3 data:(id)arg4;
- (id)_stateForObjectID:(id)arg1 container:(id)arg2;
- (void)_logMessageListDisplayStartedMessageID:(id)arg1 now:(id)arg2 type:(id)arg3 row:(long long)arg4 cellStyle:(id)arg5;
- (void)_logMessageListDisplayEndedForState:(id)arg1 now:(id)arg2;
- (void)_xpcLogEvent:(id)arg1 date:(id)arg2 data:(id)arg3;
- (void)messageListDisplayEndedForAllListItems;
- (void)_viewingEndedForAllMessages;
- (void)clickedLinkInMessage:(id)arg1 scheme:(id)arg2;
- (void)scrolledToEndOfMessage:(id)arg1;
- (void)viewingStartedForMessage:(id)arg1 messageListScope:(id)arg2;
- (void)viewingEndedForMessage:(id)arg1;
- (void)composeReplyStartedForMessage:(id)arg1;
- (void)composeFowardStartedForMessage:(id)arg1;
- (void)messageListDisplayStartedForListItem:(id)arg1 messageListType:(id)arg2 row:(long long)arg3 cellStyle:(id)arg4;
- (void)messageListDisplayEndedForListItem:(id)arg1 cellStyle:(id)arg2;
- (id)messageListTypeForMailboxes:(id)arg1;
- (void)applicationLaunched;

@end
