//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@protocol AMSDeviceMessengerClientInterface, AMSSecurityClientInterface;

@protocol AMSDaemonConnectionProtocol <NSObject>
- (void)getSecurityServiceProxyWithDelegate:(id <AMSSecurityClientInterface>)arg1 replyHandler:(void (^)(id <AMSSecurityServiceInterface>, NSError *))arg2;
- (void)getPushNotificationServiceProxyWithReplyHandler:(void (^)(id <AMSPushNotificationServiceInterface>, NSError *))arg1;
- (void)getDeviceMessengerServiceProxyWithDelegate:(id <AMSDeviceMessengerClientInterface>)arg1 replyHandler:(void (^)(id <AMSDeviceMessengerServiceInterface>, NSError *))arg2;
@end

