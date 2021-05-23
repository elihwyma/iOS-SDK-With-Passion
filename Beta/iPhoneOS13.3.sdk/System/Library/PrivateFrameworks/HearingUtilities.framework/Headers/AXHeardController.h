/*
 Image: /System/Library/PrivateFrameworks/HearingUtilities.framework/HearingUtilities
 */

#import <NSObject.h>

@class NSArray, NSDictionary, NSString;

@protocol OS_xpc_object;

@interface AXHeardController : NSObject

{
    NSObject<OS_xpc_object> *_service;
    NSArray *_clients;
    NSDictionary *_handlers;
}

@property (retain, nonatomic) NSArray *clients;
@property (retain, nonatomic) NSDictionary *handlers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedServer;
+ (id)entitlementsForMessageID:(unsigned long long)arg1;

- (id)init;
- (void)dealloc;
- (void)handleNewConnection:(id)arg1;
- (_Bool)sendMessage:(id)arg1 withError:(id *)arg2;
- (void)sendUpdateMessage:(id)arg1 forIdentifier:(unsigned long long)arg2;
- (void)sendClientsMessageWithPayload:(id)arg1 excluding:(id)arg2;
- (unsigned long long)countOfClientsListeningForIdentifier:(unsigned long long)arg1;
- (void)addHandler:(id)arg1 andBlock:(CDUnknownBlockType)arg2 forMessageIdentifier:(unsigned long long)arg3;
- (_Bool)connection:(id)arg1 hasEntitlementForMessage:(unsigned long long)arg2;
- (void)handleMessage:(id)arg1 forIdentifier:(unsigned long long)arg2;
- (void)startServer;
- (void)registerFakeClient:(id)arg1;

@end
