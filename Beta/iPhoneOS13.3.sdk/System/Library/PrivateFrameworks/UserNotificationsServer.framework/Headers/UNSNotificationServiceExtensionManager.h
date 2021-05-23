/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
 */

#import <NSObject.h>

@class NSDictionary;

@interface UNSNotificationServiceExtensionManager : NSObject

{
    id _matchingContext;
    NSDictionary *_extensionIdentifierByContainingAppIdentifier;
}

@property (copy) NSDictionary *extensionIdentifierByContainingAppIdentifier;

- (id)init;
- (void)dealloc;
- (void)_startMonitoringExtensions;
- (void)_stopMonitoringExtensions;
- (id)extensionForBundleIdentifier:(id)arg1 error:(id *)arg2;

@end
