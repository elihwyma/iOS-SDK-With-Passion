/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <NSObject.h>

@class NSString, NSXPCListener;

__attribute__((visibility("hidden")))
@interface _LSDService : NSObject

{
    NSXPCListener *_listener;
}

@property (weak, readonly) NSXPCListener *XPCListener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)replacementObjectForXPCConnection:(id)arg1 encoder:(id)arg2 object:(id)arg3;
+ (_Bool)isEnabled;
+ (id)allServiceClasses;
+ (_Bool)XPCConnectionIsAlwaysPrivileged;
+ (id)XPCConnectionToService;
+ (id)synchronous:(_Bool)arg1 XPCProxyWithErrorHandler:(CDUnknownBlockType)arg2;
+ (id)synchronousXPCProxyWithErrorHandler:(CDUnknownBlockType)arg1;
+ (id)XPCProxyWithErrorHandler:(CDUnknownBlockType)arg1;
+ (unsigned short)connectionType;
+ (Class)clientClass;
+ (id)XPCInterface;
+ (void)beginListeningWithAllServices;
+ (id)dispatchQueue;

- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)initWithXPCListener:(id)arg1;

@end
