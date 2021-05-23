/*
 Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import <Foundation/NSObject.h>

@class BBDataProviderConnection, NSString, NSXPCConnection, NSXPCListener;

@protocol OS_dispatch_queue;

@interface BBDataProviderConnectionResolver : NSObject

{
    NSXPCListener *_wakeupListener;
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_connectionToServer;
    int _listeningToken;
    BBDataProviderConnection *_dataProviderConnection;
}

@property (weak, nonatomic) BBDataProviderConnection *dataProviderConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)xpcInterface;
+ (id)resolverForConnection:(id)arg1;

- (void)dealloc;
- (void)invalidate;
- (void)_invalidate;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)initWithConnection:(id)arg1;
- (void)ping:(CDUnknownBlockType)arg1;
- (void)_registerForPublicationNotification;
- (void)_queue_registerWithServer:(CDUnknownBlockType)arg1;

@end
