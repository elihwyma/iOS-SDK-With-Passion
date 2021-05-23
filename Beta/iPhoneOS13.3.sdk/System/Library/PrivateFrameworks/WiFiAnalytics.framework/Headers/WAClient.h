/*
 Image: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, NSXPCConnection;

@protocol OS_dispatch_queue;

@interface WAClient : NSObject

{
    NSMutableDictionary *_interestedMessageIdentifiers;
    NSMutableDictionary *_configuredMessageIdentifiers;
    unsigned char _daemonConnectionValid;
    unsigned char _blockDaemonConnection;
    NSXPCConnection *_conn;
    NSMutableDictionary *_configChangeDelegatesPerGroupType;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_replyQueue;
    NSObject<OS_dispatch_queue> *_recoveryQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    NSObject<OS_dispatch_queue> *_queryableQueue;
    NSMutableArray *_queuedInvocations;
    NSMutableDictionary *_registeredQueryableHandlerBlocks;
    double _connectionRecoveryStartTime;
    CDUnknownBlockType _recoveryTickBlock;
    NSString *_tokenForThisClient;
    NSString *_identifierForThisClient;
    NSMutableSet *_registeredGroupTypes;
}

@property (retain, nonatomic) NSXPCConnection *conn;
@property (retain, nonatomic) NSMutableDictionary *configChangeDelegatesPerGroupType;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *replyQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *recoveryQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queryableQueue;
@property (retain, nonatomic) NSMutableArray *queuedInvocations;
@property (retain, nonatomic) NSMutableDictionary *registeredQueryableHandlerBlocks;
@property (nonatomic) double connectionRecoveryStartTime;
@property (nonatomic) unsigned char daemonConnectionValid;
@property (nonatomic) unsigned char blockDaemonConnection;
@property (copy, nonatomic) CDUnknownBlockType recoveryTickBlock;
@property (retain, nonatomic) NSString *tokenForThisClient;
@property (retain, nonatomic) NSString *identifierForThisClient;
@property (retain, nonatomic) NSMutableSet *registeredGroupTypes;
@property (retain, nonatomic) NSMutableDictionary *configuredMessageIdentifiers;
@property (retain, nonatomic) NSMutableDictionary *interestedMessageIdentifiers;

+ (id)sharedClient;
+ (id)sharedClientWithIdentifier:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)_initPrivate;
- (void)registerMessageGroup:(long long)arg1 andReply:(CDUnknownBlockType)arg2;
- (void)getMessageForUUID:(id)arg1 andReply:(CDUnknownBlockType)arg2;
- (void)getNewMessageForKey:(id)arg1 groupType:(long long)arg2 andReply:(CDUnknownBlockType)arg3;
- (void)getMessagesModelForGroupType:(long long)arg1 andReply:(CDUnknownBlockType)arg2;
- (void)submitMessage:(id)arg1 groupType:(long long)arg2 andReply:(CDUnknownBlockType)arg3;
- (void)ingestMessage:(id)arg1 andReply:(CDUnknownBlockType)arg2;
- (void)triggerQueryForNWActivity:(long long)arg1 andReply:(CDUnknownBlockType)arg2;
- (void)killDaemonAndReply:(CDUnknownBlockType)arg1;
- (void)clearMessageStoreAndReply:(CDUnknownBlockType)arg1;
- (void)trapCrashMiniTracerDumpReadyForInterfaceWithName:(id)arg1 andReply:(CDUnknownBlockType)arg2;
- (void)trigger11axPerfStudyAndReply:(CDUnknownBlockType)arg1;
- (void)_registerMessageGroup:(long long)arg1 andReply:(CDUnknownBlockType)arg2 queuedInvocation:(id)arg3;
- (CDUnknownBlockType)_getConnectionIssueHandlerBlock;
- (void)_dequeueInvocation:(id)arg1;
- (void)_getNewMessageForKey:(id)arg1 groupType:(long long)arg2 andReply:(CDUnknownBlockType)arg3 queuedInvocation:(id)arg4;
- (void)_reregister;
- (void)_getMessageForUUID:(id)arg1 andReply:(CDUnknownBlockType)arg2 queuedInvocation:(id)arg3;
- (void)_ingestMessage:(id)arg1 andReply:(CDUnknownBlockType)arg2 queuedInvocation:(id)arg3;
- (void)_submitMessage:(id)arg1 groupType:(long long)arg2 andReply:(CDUnknownBlockType)arg3 queuedInvocation:(id)arg4;
- (void)_registerForQueryableMessageWithIdentifierDict:(id)arg1 groupType:(long long)arg2 withHandlerBlock:(CDUnknownBlockType)arg3 andReply:(CDUnknownBlockType)arg4 queuedInvocation:(id)arg5;
- (void)_triggerQueryForNWActivity:(long long)arg1 andReply:(CDUnknownBlockType)arg2 queuedInvocation:(id)arg3;
- (void)_killDaemonAndReply:(CDUnknownBlockType)arg1 queuedInvocation:(id)arg2;
- (void)_clearMessageStoreAndReply:(CDUnknownBlockType)arg1 queuedInvocation:(id)arg2;
- (void)_getMessagesModelForGroupType:(long long)arg1 andReply:(CDUnknownBlockType)arg2 queuedInvocation:(id)arg3;
- (void)_startConnectionRecovery;
- (void)_wakeUpNotificationForThisClientReceived:(id)arg1;
- (void)_connectionRecoveryTick;
- (void)_connectionRecovered;
- (void)_connectionTimedOut;
- (void)_establishDaemonConnection;
- (void)_replyAllWithTimeoutErrorAndRemove;
- (void)_setConfigChangeDelegateForGroupType:(long long)arg1 queuedInvocation:(id)arg2;
- (void)_trapCrashMiniTracerDumpReadyForInterfaceWithName:(id)arg1 andReply:(CDUnknownBlockType)arg2 queuedInvocation:(id)arg3;
- (void)_trigger11axPerfStudyAndReply:(CDUnknownBlockType)arg1 queuedInvocation:(id)arg2;
- (void)registerForQueryableMessageWithIdentifierDict:(id)arg1 groupType:(long long)arg2 withHandlerBlock:(CDUnknownBlockType)arg3 andReply:(CDUnknownBlockType)arg4;
- (void)submitQueriedMetricWithIdentifierDict:(id)arg1 groupType:(long long)arg2 andReply:(CDUnknownBlockType)arg3;
- (void)configuredMessagesDidChange:(id)arg1 andInterestedMessageIDs:(id)arg2 forGroupType:(long long)arg3;
- (void)setConfigChangedDelegate:(id)arg1 forGroupType:(long long)arg2 andReply:(CDUnknownBlockType)arg3;
- (void)fakeDaemonConnectionDead:(unsigned char)arg1;

@end
