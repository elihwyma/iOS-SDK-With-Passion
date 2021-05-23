/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSString, NSXPCConnection, NSXPCListener, NSXPCListenerEndpoint;

@protocol PUEditingExtensionUndoButtonHost;

@interface PUEditingExtensionUndoProxyHostSide : NSObject

{
    id <PUEditingExtensionUndoButtonHost> _target;
    NSXPCListener *_listener;
    NSXPCConnection *_connection;
}

@property (nonatomic, readonly) NSXPCListener *listener;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (nonatomic, readonly) NSXPCListenerEndpoint *listenerEndpoint;
@property (weak, nonatomic) id <PUEditingExtensionUndoButtonHost> target;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)remoteObject;
- (void)performUndo;
- (void)performRedo;
- (void)setShowUndoRedo:(_Bool)arg1;
- (void)setUndoEnabled:(_Bool)arg1 redoEnabled:(_Bool)arg2;

@end
