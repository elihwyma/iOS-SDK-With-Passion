/*
 Image: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AccessibilityUIService.framework/AccessibilityUIService
 */

#import <NSObject.h>

@class AXAccessQueue, AXUIDisplayManager, AXUIMessageSender, BSProcessDeathWatcher, NSMutableArray, NSMutableDictionary, NSString;

@interface AXUIServiceManager : NSObject

{
    BSProcessDeathWatcher *_springBoardReaper;
    _Bool _shouldAllowServicesToProcessMessages;
    AXUIDisplayManager *_displayManager;
    AXAccessQueue *_resumingConnectionsQueue;
    NSMutableArray *_pausedConnections;
    AXAccessQueue *_entitlementsCheckersAccessQueue;
    NSMutableDictionary *_entitlementsCheckers;
    AXUIMessageSender *_messageSender;
    NSMutableArray *_serviceContexts;
    AXAccessQueue *_servicesAccessQueue;
    unsigned long long _lastUsedServiceIdentifier;
    NSMutableDictionary *_transactions;
}

@property (retain, nonatomic) NSMutableArray *pausedConnections;
@property (retain, nonatomic) AXAccessQueue *resumingConnectionsQueue;
@property (retain, nonatomic) NSMutableDictionary *entitlementsCheckers;
@property (retain, nonatomic) AXAccessQueue *entitlementsCheckersAccessQueue;
@property (retain, nonatomic) AXUIMessageSender *messageSender;
@property (retain, nonatomic) NSMutableArray *serviceContexts;
@property (retain, nonatomic) AXAccessQueue *servicesAccessQueue;
@property (nonatomic) unsigned long long lastUsedServiceIdentifier;
@property (nonatomic) _Bool shouldAllowServicesToProcessMessages;
@property (retain, nonatomic) AXUIDisplayManager *displayManager;
@property (retain, nonatomic) NSMutableDictionary *transactions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedServiceManager;
+ (void)_releaseSharedServiceManager;

- (id)init;
- (void)dealloc;
- (_Bool)_start;
- (void)messageSender:(id)arg1 accessXPCConnectionForMessageWithContext:(void *)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)messageSender:(id)arg1 willSendXPCMessage:(id)arg2 context:(void *)arg3;
- (void)_applicationDidFinishLaunching;
- (void)_applicationDidReceiveMemoryWarning:(id)arg1;
- (id)_clientMessengerWithIdentifier:(id)arg1;
- (void)_sendAsynchronousMessage:(id)arg1 withIdentifier:(unsigned long long)arg2 toClientWithMessenger:(id)arg3 targetAccessQueue:(id)arg4 completionRequiresWritingBlock:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
- (id)_sendSynchronousMessage:(id)arg1 withIdentifier:(unsigned long long)arg2 toClientWithMessenger:(id)arg3 error:(id *)arg4;
- (void)beginTransactionWithIdentifier:(id)arg1 forService:(id)arg2;
- (id)_uniqueIdentifierForService:(id)arg1;
- (void)endTransactionWithIdentifier:(id)arg1 forService:(id)arg2;
- (id)_servicesForUniqueIdentifiers:(id)arg1;
- (_Bool)_registerClientWithIdentifier:(id)arg1 connection:(id)arg2 serviceBundleName:(id)arg3 initiatingMessageIdentifier:(unsigned long long)arg4 error:(id *)arg5;
- (id)_serviceContextForClientWithIdentifier:(id)arg1;
- (_Bool)_serviceWithClass:(Class)arg1 canProcessMessageWithIdentifier:(unsigned long long)arg2 fromClientWithConnection:(id)arg3 possibleRequiredEntitlements:(id *)arg4;
- (void)_unregisterAllClientsWithConnection:(id)arg1;
- (void)_registerForSpringBoardDeath;
- (id)_serviceContextForService:(id)arg1;
- (void)_handleConnection:(id)arg1;

@end
