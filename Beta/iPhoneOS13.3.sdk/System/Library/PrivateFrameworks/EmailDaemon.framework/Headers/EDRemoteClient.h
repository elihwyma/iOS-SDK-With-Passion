/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <Foundation/NSObject.h>

@class EDAccountRepository, EDActivityRegistry, EDClientResumer, EDClientState, EDDaemonInterfaceFactory, EDFetchController, EDInteractionLogger, EDMailboxRepository, EDMessageRepository, EDOutgoingMessageRepository, EDSearchableIndex, NSString, NSXPCConnection;

@protocol EMVIPManagerInterface;

@interface EDRemoteClient : NSObject

{
    EDClientResumer *_clientResumer;
    struct os_unfair_lock_s _lock;
    EDAccountRepository *_accountRepository;
    EDMailboxRepository *_mailboxRepository;
    EDMessageRepository *_messageRepository;
    EDOutgoingMessageRepository *_outgoingMessageRepository;
    EDFetchController *_fetchController;
    EDSearchableIndex *_searchableIndex;
    EDInteractionLogger *_interactionLogger;
    id <EMVIPManagerInterface> _vipManagerInterface;
    EDActivityRegistry *_activityRegistry;
    NSXPCConnection *_clientConnection;
    EDDaemonInterfaceFactory *_daemonInterfaceFactory;
    EDClientState *_clientState;
}

@property (nonatomic, readonly) NSXPCConnection *clientConnection;
@property (nonatomic, readonly) EDDaemonInterfaceFactory *daemonInterfaceFactory;
@property (nonatomic, readonly) EDAccountRepository *accountRepository;
@property (nonatomic, readonly) EDClientState *clientState;
@property (nonatomic, readonly) EDFetchController *fetchController;
@property (nonatomic, readonly) EDMailboxRepository *mailboxRepository;
@property (nonatomic, readonly) EDMessageRepository *messageRepository;
@property (nonatomic, readonly) EDOutgoingMessageRepository *outgoingMessageRepository;
@property (nonatomic, readonly) EDSearchableIndex *searchableIndex;
@property (nonatomic, readonly) EDInteractionLogger *interactionLogger;
@property (nonatomic, readonly) EDActivityRegistry *activityRegistry;
@property (nonatomic, readonly) id <EMVIPManagerInterface> vipManagerInterface;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)log;

- (void)dealloc;
- (void)test_tearDown;
- (void)getMessageRepositoryInterface:(CDUnknownBlockType)arg1;
- (void)getOutgoingMessageRepositoryInterface:(CDUnknownBlockType)arg1;
- (void)getAccountRepositoryInterface:(CDUnknownBlockType)arg1;
- (void)getFetchControllerInterface:(CDUnknownBlockType)arg1;
- (void)getMailboxRepositoryInterface:(CDUnknownBlockType)arg1;
- (void)getClientStateInterface:(CDUnknownBlockType)arg1;
- (void)getSearchableIndexInterface:(CDUnknownBlockType)arg1;
- (void)getInteractionLoggerInterface:(CDUnknownBlockType)arg1;
- (void)getVIPManagerInterface:(CDUnknownBlockType)arg1;
- (void)getActivityRegistryInterface:(CDUnknownBlockType)arg1;
- (void)debugStatusWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)launchForEarlyRecovery:(CDUnknownBlockType)arg1;
- (void)setAllowsBackgroundResume:(_Bool)arg1;
- (id)initWithConnection:(id)arg1 daemonInterfaceFactory:(id)arg2;

@end
