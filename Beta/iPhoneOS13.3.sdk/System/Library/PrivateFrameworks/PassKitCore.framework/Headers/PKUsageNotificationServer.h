/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PDXPCService.h>

@class NSMutableSet, NSString, NSXPCListener;

@interface PKUsageNotificationServer : PDXPCService

{
    NSXPCListener *_listener;
    NSMutableSet *_connections;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)initializeUsageNotificationServer;
- (void)notifyPassUsed:(id)arg1 fromSource:(long long)arg2;
- (void)notifyPaymentPassIdentifierUsed:(id)arg1 withTransactionInfo:(id)arg2;

@end
