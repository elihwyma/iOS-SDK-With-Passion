//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@protocol SWMessage, SWMessageSecurityOrigin;

@protocol SWMessageHandler <NSObject>
- (void)didReceiveMessage:(id <SWMessage>)arg1 securityOrigin:(id <SWMessageSecurityOrigin>)arg2;
@end

