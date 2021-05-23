/*
 Image: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
 */

#import <PlugInKit/PKPlugInCore.h>

@class NSDictionary, NSString, NSURL, NSUUID, NSUserDefaults, NSXPCConnection;

@interface PKServicePersonality : PKPlugInCore

{
    id _plugInPrincipal;
    id _hostPrincipal;
    id _embeddedPrincipal;
    NSXPCConnection *_connection;
    NSUserDefaults *_preferences;
}

@property (retain) id plugInPrincipal;
@property (retain) id hostPrincipal;
@property (retain) id embeddedPrincipal;
@property (retain) NSXPCConnection *connection;
@property (retain) NSUserDefaults *preferences;
@property (copy) NSDictionary *_userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) NSString *identifier;
@property (readonly) NSString *version;
@property (readonly) NSURL *url;
@property (readonly) NSUUID *uuid;
@property (readonly) NSDictionary *bundleInfoDictionary;
@property (readonly) NSDictionary *plugInDictionary;

- (id)initWithConnection:(id)arg1;
- (void)prepareUsingPlugIn:(id)arg1 hostProtocol:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)prepareUsing:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)beginUsingPlugIn:(id)arg1 ready:(CDUnknownBlockType)arg2;
- (void)hostHasControl;
- (void)shutdownPlugIn;
- (void)prefsObjectForKey:(id)arg1 inPlugIn:(id)arg2 result:(CDUnknownBlockType)arg3;
- (void)prefsSetObject:(id)arg1 forKey:(id)arg2 inPlugIn:(id)arg3 result:(CDUnknownBlockType)arg4;
- (id)setupWithIdentifier:(id)arg1;
- (id)defaultPrincipalObject;
- (id)findProtocol:(id)arg1;

@end
