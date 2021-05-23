/*
 Image: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
 */

#import <Foundation/NSObject.h>

@class NSString, NSXPCConnection;

@protocol OS_dispatch_queue, WAXPCConnectionDelegate;

@interface WAXPCConnection : NSObject

{
    id <WAXPCConnectionDelegate> _delegate;
    NSXPCConnection *_connection;
    NSString *_token;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSString *token;
@property (weak, nonatomic) id <WAXPCConnectionDelegate> delegate;
@property (nonatomic, readonly) NSXPCConnection *connection;

- (id)initWithXPCConnection:(id)arg1;
- (void)establishConnectionWithToken:(id)arg1 andReply:(CDUnknownBlockType)arg2;
- (void)registerMessageGroup:(long long)arg1 andReply:(CDUnknownBlockType)arg2;
- (void)getMessageForUUID:(id)arg1 andReply:(CDUnknownBlockType)arg2;
- (void)getNewMessageForKey:(id)arg1 groupType:(long long)arg2 andReply:(CDUnknownBlockType)arg3;
- (void)getMessagesModelForGroupType:(long long)arg1 andReply:(CDUnknownBlockType)arg2;
- (void)submitMessage:(id)arg1 groupType:(long long)arg2 andReply:(CDUnknownBlockType)arg3;
- (void)ingestMessage:(id)arg1 andReply:(CDUnknownBlockType)arg2;
- (void)registerForQueryableMessageWithidentifierDict:(id)arg1 groupType:(long long)arg2 andReply:(CDUnknownBlockType)arg3;
- (void)clientConfigChangeDelegateSetForGroupType:(long long)arg1 andReply:(CDUnknownBlockType)arg2;
- (void)triggerQueryForNWActivity:(long long)arg1 andReply:(CDUnknownBlockType)arg2;
- (void)killDaemonAndReply:(CDUnknownBlockType)arg1;
- (void)clearMessageStoreAndReply:(CDUnknownBlockType)arg1;
- (void)trapCrashMiniTracerDumpReadyForInterfaceWithName:(id)arg1 andReply:(CDUnknownBlockType)arg2;
- (void)trigger11axPerfStudyAndReply:(CDUnknownBlockType)arg1;

@end
