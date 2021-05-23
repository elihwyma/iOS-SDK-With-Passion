/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
 */

#import <NSObject.h>

@class LSPlugInKitProxy, NSExtension;

@protocol OS_dispatch_queue;

@interface UNSNotificationServiceExtension : NSObject

{
    NSExtension *_extension;
    double _serviceTime;
    double _graceTime;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (nonatomic, readonly) LSPlugInKitProxy *proxy;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

+ (id)_extensionIdentifiersCurrentlyAllowedAccessToNotificationCenter;
+ (void)_allowAccessToNotificationCenterForServiceExtensionWithIdentifier:(id)arg1;
+ (void)_disallowAccessToNotificationCenterForServiceExtensionWithIdentifier:(id)arg1;
+ (_Bool)isAccessToNotificationCenterAllowedForServiceExtensionWithIdentifier:(id)arg1;

- (id)_initWithExtension:(id)arg1 serviceTime:(double)arg2 graceTime:(double)arg3;
- (id)mutateContentForNotificationRequest:(id)arg1 error:(id *)arg2;

@end
