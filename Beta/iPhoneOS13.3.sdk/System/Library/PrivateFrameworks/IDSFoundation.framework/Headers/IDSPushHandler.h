/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

@class APSConnection, NSData, NSMapTable, NSMutableSet, NSRecursiveLock, NSString;

@interface IDSPushHandler : NSObject

{
    APSConnection *_apsConnection;
    NSData *_cachedPushToken;
    NSMutableSet *_topicsCache;
    NSMapTable *_handlerMap;
    NSRecursiveLock *_recursiveLock;
    _Bool _shouldWaitToSetTopics;
}

@property (nonatomic, readonly) _Bool isConnected;
@property (nonatomic, readonly) NSData *pushToken;
@property (nonatomic) _Bool shouldWaitToSetTopics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)sharedInstanceWithPortName:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didSendOutgoingMessage:(id)arg2;
- (void)connection:(id)arg1 didFailToSendOutgoingMessage:(id)arg2 error:(id)arg3;
- (void)connection:(id)arg1 didChangeConnectedStatus:(_Bool)arg2;
- (void)connectionDidReconnect:(id)arg1;
- (id)initWithPort:(id)arg1;
- (void)removeListener:(id)arg1;
- (_Bool)_validateHandler:(id)arg1 withSelector:(SEL)arg2 topic:(id)arg3 command:(id)arg4;
- (void)_updateTopics;
- (void)_recalculateTopicsCache;
- (id)_apsConnectionPushToken;
- (id)_getValidPushHandlersWithSelector:(SEL)arg1 topic:(id)arg2 command:(id)arg3;
- (void)addListener:(id)arg1 topics:(id)arg2 commands:(id)arg3 queue:(id)arg4;
- (void)setTopics:(id)arg1 forListener:(id)arg2;
- (void)setCommands:(id)arg1 forListener:(id)arg2;
- (struct __SecIdentity *)copyPushIdentity;
- (void)configureAsMacNotificationCenterObserver:(id)arg1 withPushToWakeTopics:(id)arg2;
- (void)configureAsMacNotificationCenterObserver:(id)arg1;

@end
