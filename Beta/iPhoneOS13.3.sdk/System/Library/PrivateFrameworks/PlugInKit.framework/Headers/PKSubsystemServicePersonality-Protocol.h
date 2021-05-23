/*
 Image: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
 */

#import <PlugInKit/Swift-Protocol.h>

@class NSDictionary, NSString, NSURL, NSUUID, NSXPCConnection;

@protocol PKSubsystemServicePersonality <Swift>

@property (readonly) NSString *identifier;
@property (readonly) NSString *version;
@property (readonly) NSURL *url;
@property (readonly) NSUUID *uuid;
@property (readonly) NSDictionary *bundleInfoDictionary;
@property (readonly) NSDictionary *plugInDictionary;
@property (readonly) NSXPCConnection *connection;

@end
