/*
 Image: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
 */

#import <PlugInKit/Swift-Protocol.h>

@class NSDate, NSDictionary, NSUUID, NSXPCConnection;

@protocol PKPlugInPrivate <Swift>

@property (readonly) NSUUID *uuid;
@property (readonly) NSDate *timestamp;
@property (readonly) NSXPCConnection *pluginConnection;
@property (retain) NSDictionary *extensionState;
@property (retain) NSDictionary *environment;

@end
