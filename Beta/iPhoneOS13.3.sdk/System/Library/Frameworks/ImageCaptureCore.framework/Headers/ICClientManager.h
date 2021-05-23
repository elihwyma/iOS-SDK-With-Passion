/*
 Image: /System/Library/Frameworks/ImageCaptureCore.framework/ImageCaptureCore
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface ICClientManager : NSObject

{
    _Bool _clientAdded;
    NSMutableArray *_clients;
    struct os_unfair_lock_s _clientsLock;
    id _delegate;
}

@property (retain, nonatomic) NSMutableArray *clients;
@property (nonatomic) id delegate;

- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (id)findClientWithPID:(id)arg1;
- (unsigned long long)removeClientWithPID:(id)arg1;
- (unsigned long long)currentClientCount;
- (id)copyClientsArray;
- (void)sendMessage:(id)arg1 withConnection:(id)arg2;
- (void)addClientWithConnection:(id)arg1;
- (void)sendMessage:(id)arg1 forClientWithPID:(id)arg2;
- (void)addNotifications:(id)arg1 toClientWithPID:(id)arg2;
- (void)remNotifications:(id)arg1 toClientWithPID:(id)arg2;
- (int)clientUsingDevice;
- (void)setClientWithPID:(id)arg1 usingDevice:(_Bool)arg2;
- (void)setClientWithPID:(id)arg1 usingObjectHandle:(id)arg2;
- (id)clientConnectionsMonitoringNotification:(id)arg1;
- (id)clientConnectionsMonitoringObjectID:(id)arg1;
- (id)allClientConnections;

@end
