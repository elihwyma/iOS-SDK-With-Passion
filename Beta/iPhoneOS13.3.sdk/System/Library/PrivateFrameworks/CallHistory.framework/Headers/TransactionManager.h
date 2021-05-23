/*
 Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

#import <CallHistory/CHSynchronizedLoggable.h>

@class NSMutableArray, NSXPCConnection, NSXPCInterface;

__attribute__((visibility("hidden")))
@interface TransactionManager : CHSynchronizedLoggable

{
    NSXPCConnection *_connection;
    NSXPCInterface *_interface;
    id _syncHelperReadyNotificationRef;
    NSMutableArray *_queuedTransactions;
}

+ (id)instance;

- (id)init;
- (void)dealloc;
- (void)appendTransactions:(id)arg1;
- (void)createXpcConnection;
- (void)createXpcConnection_sync;
- (void)setupConnectionHandlers_sync;
- (void)appendTransactions_sync:(id)arg1;

@end
