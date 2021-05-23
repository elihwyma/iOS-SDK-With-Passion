/*
 Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

#import <Foundation/NSObject.h>

@class BKSApplicationStateMonitor, NSDictionary, NSLock, NSMutableDictionary, NSMutableSet, NSString;

@interface CLKComplicationClientManager : NSObject

{
    NSMutableDictionary *_clientsByIdentifier;
    NSLock *_clientsByIdentifierLock;
    NSMutableDictionary *_waitForClientRegistriesByIdentifier;
    NSLock *_waitForClientRegistriesByIdentifierLock;
    NSMutableSet *_anonymousClients;
    NSLock *_anonymousClientsLock;
    NSMutableSet *_clientPIDs;
    NSLock *_clientPIDsLock;
    unsigned long long _nextWaitForClientTokenValue;
    NSLock *_nextWaitForClientTokenValueLock;
    BKSApplicationStateMonitor *_applicationStateMonitor;
    CDUnknownBlockType _clientRegistrationHandler;
    CDUnknownBlockType _clientUnregistrationHandler;
}

@property (copy, nonatomic) CDUnknownBlockType clientRegistrationHandler;
@property (copy, nonatomic) CDUnknownBlockType clientUnregistrationHandler;
@property (nonatomic, readonly) NSDictionary *clientsByIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedClientManager;

- (id)init;
- (void)dealloc;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)_addClient:(id)arg1;
- (void)_removeClient:(id)arg1;
- (void)_handleApplicationStateChange:(id)arg1;
- (void)enumerateClientsWithBlock:(CDUnknownBlockType)arg1;
- (struct NSNumber *)waitForClientWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)stopWaitingForClientWithIdentifier:(id)arg1 forToken:(struct NSNumber *)arg2;

@end
