/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString, NSXPCListener;

@interface _UIViewServiceSessionManager : NSObject

{
    struct os_unfair_lock_s _lock;
    NSXPCListener *_listener;
    NSMutableArray *_sessions;
    int _connectionNotificationToken;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)startViewServiceSessionManagerAsPlugin:(_Bool)arg1;
+ (_Bool)hasActiveSessions;
+ (id)__serviceSessionManager;

- (id)init;
- (void)dealloc;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)_initAsPlugIn:(_Bool)arg1;
- (_Bool)_hasActiveSessions;
- (void)_startListener;
- (void)_startListenerWithName:(id)arg1;
- (void)_registerSessionForDefaultDeputies:(id)arg1;
- (void)_startOrStopSystemsForBackgroundRunning;
- (void)_configureSessionForConnection:(id)arg1;

@end
