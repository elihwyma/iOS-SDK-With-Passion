/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <NetworkExtension/Swift-Protocol.h>

@class NSArray, NSXPCInterface;

@protocol NEAgentSessionDelegate <Swift>

@property (nonatomic, readonly) NSArray *uuids;
@property (nonatomic, readonly) NSXPCInterface *driverInterface;
@property (nonatomic, readonly) NSXPCInterface *managerInterface;

- (unsigned short)handleDisposeWithCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)handleCancel;
- (unsigned short)handleAppsUninstalled: /* Error: Ran out of types for this method. */;
- (unsigned short)handleAppsUpdateBegins: /* Error: Ran out of types for this method. */;
- (unsigned short)handleAppsUpdateEnding: /* Error: Ran out of types for this method. */;
- (unsigned short)handleAppsUpdateEnds: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithPluginType:pluginClass:pluginInfo:queue:factory: /* Error: Ran out of types for this method. */;
- (unsigned short)handleInitWithCompletionHandler: /* Error: Ran out of types for this method. */;

@end
