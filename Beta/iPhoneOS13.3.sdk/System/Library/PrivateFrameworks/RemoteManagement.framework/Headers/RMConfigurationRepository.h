/*
 Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
 */

#import <NSObject.h>

@class NSXPCConnection;

@interface RMConfigurationRepository : NSObject

{
    NSObject *_hasResumedConnectionLock;
    _Bool _hasResumedConnection;
    NSXPCConnection *_connection;
}

@property (nonatomic) _Bool hasResumedConnection;
@property (nonatomic, readonly) NSXPCConnection *connection;

- (id)init;
- (void)dealloc;
- (void)_proxyWithHandler:(CDUnknownBlockType)arg1;
- (void)fetchConfigurationsWithTypes:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addSubscription:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeSubscription:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
