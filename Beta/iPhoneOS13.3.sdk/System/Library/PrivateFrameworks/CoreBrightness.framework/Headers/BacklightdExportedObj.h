/*
 Image: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
 */

#import <Foundation/NSObject.h>

@class BrightnessSystemInternal, NSString, NSXPCConnection;

__attribute__((visibility("hidden")))
@interface BacklightdExportedObj : NSObject

{
    unsigned long long _clientID;
    _Bool _clientIDSet;
    BrightnessSystemInternal *_server;
    NSXPCConnection *_connection;
}

@property (nonatomic) BrightnessSystemInternal *server;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)reconnect;
- (void)clientSetPropertyWithKey:(id)arg1 property:(id)arg2;
- (void)clientCopyPropertyWithKey:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)registerNotificationForProperties:(id)arg1;
- (id)copyClientID;

@end
