/*
 Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

#import <Foundation/NSObject.h>

@class EMAccountRepository, EMActivityRegistry, EMBlockedSenderManager, EMClientState, EMDonationController, EMFetchController, EMInteractionLogger, EMMailboxRepository, EMMessageRepository, EMOutgoingMessageRepository, EMSearchableIndex, NSHashTable, NSString;

@protocol EFCancelable, EMVIPManager, NSXPCProxyCreating, OS_dispatch_queue;

@interface EMDaemonInterface : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_connections;
    long long _connectionState;
    id <EFCancelable> _daemonLaunchToken;
    _Bool _allowsBackgroundResume;
    struct os_unfair_lock_s _lock;
    EMMessageRepository *_messageRepository;
    EMOutgoingMessageRepository *_outgoingMessageRepository;
    EMMailboxRepository *_mailboxRepository;
    EMAccountRepository *_accountRepository;
    EMFetchController *_fetchController;
    EMClientState *_clientState;
    EMInteractionLogger *_interactionLogger;
    EMDonationController *_donationController;
    EMActivityRegistry *_activityRegistry;
    id <EMVIPManager> _vipManager;
    EMBlockedSenderManager *_blockedSenderManager;
    EMSearchableIndex *_searchableIndex;
    id <NSXPCProxyCreating> _proxyCreator;
}

@property (readonly) EMSearchableIndex *searchableIndex;
@property (readonly) id <NSXPCProxyCreating> proxyCreator;
@property (readonly) EMMessageRepository *messageRepository;
@property (readonly) EMOutgoingMessageRepository *outgoingMessageRepository;
@property (readonly) EMMailboxRepository *mailboxRepository;
@property (readonly) EMAccountRepository *accountRepository;
@property (readonly) EMFetchController *fetchController;
@property (readonly) EMClientState *clientState;
@property (readonly) EMInteractionLogger *interactionLogger;
@property (readonly) EMDonationController *donationController;
@property (readonly) EMActivityRegistry *activityRegistry;
@property (readonly) id <EMVIPManager> vipManager;
@property (readonly) EMBlockedSenderManager *blockedSenderManager;
@property _Bool allowsBackgroundResume;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)remoteObjectInterface;
+ (id)log;
+ (id)_remoteConnection;
+ (id)_mailUninstalledFile;
+ (_Bool)cachedMailAppIsInstalled;
+ (void)setCachedMailAppIsInstalled:(_Bool)arg1;

- (id)init;
- (void)dealloc;
- (id)initForTesting;
- (void)test_tearDown;
- (id)initWithProxyCreator:(id)arg1;
- (void)resetProtocolConnections;
- (void)handleDaemonAvailability;
- (id)connectionForProtocol:(id)arg1;
- (id)_connectionForProtocol:(id)arg1 error:(id *)arg2;

@end
