//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class HMDCloudShareMessenger, NSData;

@protocol HMDCloudShareMessengerDelegate <NSObject>
- (void)messengerDidReceiveInvitationRequest:(HMDCloudShareMessenger *)arg1;
- (void)messenger:(HMDCloudShareMessenger *)arg1 didReceiveInvitationData:(NSData *)arg2 completion:(void (^)(BOOL, NSError *))arg3;
@end

