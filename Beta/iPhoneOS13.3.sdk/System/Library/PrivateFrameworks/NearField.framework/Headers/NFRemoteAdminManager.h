/*
 Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSString, NSXPCConnection;

@interface NFRemoteAdminManager : NSObject

{
    NSXPCConnection *_connection;
    _Bool _hasEventListener;
    NSMutableSet *_eventListeners;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedRemoteAdminManager;

- (id)init;
- (void)dealloc;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)registerEventListener:(id)arg1;
- (id)registrationInfo;
- (void)_connectIfNeeded;
- (void)unregisterEventListener:(id)arg1;
- (_Bool)setRegistrationInfo:(id)arg1 primaryRegionTopic:(id)arg2;
- (void)getSELDInfoForBroker:(CDUnknownBlockType)arg1;
- (_Bool)queueServerConnection:(id)arg1;
- (_Bool)queueServerConnectionForApplets:(id)arg1;
- (void)connectToServer:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)primaryRegionTopic;
- (void)remoteAdminCleanupProgress:(double)arg1;
- (void)readerModeCardSessionToken:(id)arg1;
- (void)readerModeCardIngestionStatus:(unsigned long long)arg1;
- (_Bool)cancelCardIngestion;
- (void)ingestCard:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)didInvalidateXPCConnection:(id)arg1;
- (void)didInterruptXPCConnection:(id)arg1;
- (id)nextRequestForServer:(id)arg1;
- (id)getAPNPublicToken;
- (id)deleteAllAppletsAndCleanupWithTSM;

@end
