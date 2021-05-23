/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class APSConnection, AVTCoreEnvironment, AVTPushNotificationsConnectionFactory, NSString;

@protocol AVTPushNotificationsSupportDelegate, AVTUILogger, OS_dispatch_queue;

@interface AVTPushNotificationsSupport : NSObject

{
    id <AVTPushNotificationsSupportDelegate> _delegate;
    APSConnection *_pushConnection;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    AVTCoreEnvironment *_environment;
    AVTPushNotificationsConnectionFactory *_connectionFactory;
    id <AVTUILogger> _logger;
}

@property (retain, nonatomic) APSConnection *pushConnection;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *connectionQueue;
@property (nonatomic, readonly) AVTCoreEnvironment *environment;
@property (nonatomic, readonly) AVTPushNotificationsConnectionFactory *connectionFactory;
@property (nonatomic, readonly) id <AVTUILogger> logger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <AVTPushNotificationsSupportDelegate> delegate;

+ (id)topic;

- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;
- (void)getAPSEnvironmentString:(CDUnknownBlockType)arg1;
- (void)setupConnectionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)startListeningToPushNotifications;
- (void)stopListeningToPushNotifications;
- (id)initWithEnvironment:(id)arg1 connectionFactory:(id)arg2;

@end
