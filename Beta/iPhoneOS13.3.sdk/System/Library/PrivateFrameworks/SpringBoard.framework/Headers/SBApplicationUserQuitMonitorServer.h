/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class BSServiceConnectionListener, FBServiceClientAuthenticator, NSMutableArray, NSString;

@protocol OS_dispatch_queue;

@interface SBApplicationUserQuitMonitorServer : NSObject

{
    FBServiceClientAuthenticator *_clientAuthenticator;
    BSServiceConnectionListener *_connectionListener;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_connections;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;
- (void)userClosedLastSceneOfApplicationWithBundleID:(id)arg1;
- (void)_queue_addConnection:(id)arg1;
- (void)_queue_removeConnection:(id)arg1;

@end
