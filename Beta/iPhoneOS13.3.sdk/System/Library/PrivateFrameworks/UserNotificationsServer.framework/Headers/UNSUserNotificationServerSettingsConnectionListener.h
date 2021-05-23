/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
 */

#import <NSObject.h>

@class NSMutableArray, NSString, NSXPCListener, UNSNotificationSettingsService;

@interface UNSUserNotificationServerSettingsConnectionListener : NSObject

{
    NSMutableArray *_connections;
    NSXPCListener *_listener;
    UNSNotificationSettingsService *_settingsService;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)resume;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)_currentConnection;
- (id)initWithNotificationSettingsService:(id)arg1;
- (void)settingsService:(id)arg1 didUpdateNotificationSourcesForBundleIdentifiers:(id)arg2;
- (void)settingsService:(id)arg1 didUpdateNotificationSystemSettings:(id)arg2;
- (void)replaceNotificationSettings:(id)arg1 forNotificationSourceIdentifier:(id)arg2;
- (void)replaceNotificationTopicSettings:(id)arg1 forNotificationSourceIdentifier:(id)arg2 topicIdentifier:(id)arg3;
- (void)setNotificationSystemSettings:(id)arg1;
- (void)getNotificationSource:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)getNotificationSources:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)getAllNotificationSourcesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getNotificationSystemSettingsWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
