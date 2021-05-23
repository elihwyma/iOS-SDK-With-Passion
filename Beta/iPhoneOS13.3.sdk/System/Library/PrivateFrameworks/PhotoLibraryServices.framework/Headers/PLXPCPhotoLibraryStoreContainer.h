/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSXPCListener, NSXPCListenerEndpoint, NSXPCStoreServer;

@interface PLXPCPhotoLibraryStoreContainer : NSObject

{
    NSXPCStoreServer *_server;
    NSXPCListener *_listener;
}

@property (readonly) NSXPCStoreServer *server;
@property (readonly) NSXPCListenerEndpoint *listenerEndpoint;

+ (id)newContainerWithPathManager:(id)arg1;

- (id)initWithServer:(id)arg1 listener:(id)arg2;

@end
