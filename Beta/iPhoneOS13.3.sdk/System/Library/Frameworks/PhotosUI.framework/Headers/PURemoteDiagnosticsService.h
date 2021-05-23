/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSString, NSXPCListener;

@protocol OS_dispatch_queue;

@interface PURemoteDiagnosticsService : NSObject

{
    NSXPCListener *_listener;
    NSObject<OS_dispatch_queue> *_diagnosticsQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)startServerOnInternalDevices;
+ (_Bool)_isRunningInPhotosApp;

- (id)init;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)_startListening;

@end
