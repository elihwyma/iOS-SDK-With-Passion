/*
 Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

#import <Foundation/NSObject.h>

@class AKAdaptiveService, NSXPCListenerEndpoint;

@interface AKAuthorizationNotificationService : NSObject

{
    AKAdaptiveService *_service;
    NSXPCListenerEndpoint *_daemonEndpoint;
}

+ (id)_sharedService;
+ (void)startServiceWithNotificationHandler:(id)arg1;

- (id)init;
- (id)initWithDaemonXPCEndpoint:(id)arg1;
- (void)startWithNotificationHandler:(id)arg1;
- (void)_configureNotificationService;

@end
