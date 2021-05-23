/*
 Image: /System/Library/PrivateFrameworks/OSAnalyticsPrivate.framework/OSAnalyticsPrivate
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_source, OS_os_transaction, OS_xpc_object;

@interface OSAXPCServices : NSObject

{
    NSObject<OS_xpc_object> *_listenerConnection;
    NSObject<OS_dispatch_source> *_txnTimer;
    NSObject<OS_os_transaction> *_txn;
}

- (void)dealloc;
- (void)postNotification:(id)arg1;
- (id)initWithServiceName:(const char *)arg1;
- (void)restartTransactionTimer;
- (_Bool)serviceRequest:(id)arg1 fromPID:(int)arg2;
- (_Bool)generateJetsamWithParams:(id)arg1;

@end
