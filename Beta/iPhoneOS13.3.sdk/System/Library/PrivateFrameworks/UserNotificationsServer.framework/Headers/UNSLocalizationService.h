/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
 */

#import <NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface UNSLocalizationService : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_bundleIdentifierToBundle;
    NSMutableDictionary *_bundleIdentifierToBundleURL;
}

- (id)init;
- (id)bundleWithIdentifier:(id)arg1;
- (void)_queue_notificationSourcesDidUninstall:(id)arg1;
- (void)notificationSourcesDidUninstall:(id)arg1;
- (void)notificationSourcesDidInstall:(id)arg1;
- (id)_queue_bundleWithIdentifier:(id)arg1;
- (void)_queue_notificationSourcesDidInstall:(id)arg1;

@end
