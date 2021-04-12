//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class GKMatch, GKPlayer, NSData, NSError, NSString;

@protocol GKMatchDelegate <NSObject>

@optional
- (BOOL)match:(GKMatch *)arg1 shouldReinvitePlayer:(NSString *)arg2;
- (BOOL)match:(GKMatch *)arg1 shouldReinviteDisconnectedPlayer:(GKPlayer *)arg2;
- (void)match:(GKMatch *)arg1 didFailWithError:(NSError *)arg2;
- (void)match:(GKMatch *)arg1 player:(NSString *)arg2 didChangeState:(long long)arg3;
- (void)match:(GKMatch *)arg1 player:(GKPlayer *)arg2 didChangeConnectionState:(long long)arg3;
- (void)match:(GKMatch *)arg1 didReceiveData:(NSData *)arg2 fromPlayer:(NSString *)arg3;
- (void)match:(GKMatch *)arg1 didReceiveData:(NSData *)arg2 forRecipient:(GKPlayer *)arg3 fromRemotePlayer:(GKPlayer *)arg4;
- (void)match:(GKMatch *)arg1 didReceiveData:(NSData *)arg2 fromRemotePlayer:(GKPlayer *)arg3;
@end

