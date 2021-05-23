/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@interface GEOXPCUtil : NSObject

+ (id)createServerConnectionWithDebugIdentifier:(id)arg1 eventHandler:(CDUnknownBlockType)arg2;
+ (id)defaultXPCServerConnectionQueue;
+ (id)createServerConnectionWithPort:(const char *)arg1 queue:(id)arg2 debugIdentifier:(id)arg3 eventHandler:(CDUnknownBlockType)arg4;
+ (CDUnknownBlockType)daemonXPCConnectionCreationBlock;
+ (void)setDaemonXPCConnectionCreationBlock:(CDUnknownBlockType)arg1;
+ (void)setDefaultXPCServerConnectionQueue:(id)arg1;
+ (id)createServerConnectionWithQueue:(id)arg1 debugIdentifier:(id)arg2 eventHandler:(CDUnknownBlockType)arg3;

@end
