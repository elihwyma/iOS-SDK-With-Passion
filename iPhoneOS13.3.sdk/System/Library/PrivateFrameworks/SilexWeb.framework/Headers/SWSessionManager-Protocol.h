//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@protocol SWSession;

@protocol SWSessionManager <NSObject>
@property(readonly, nonatomic) id <SWSession> session;
- (void)refresh;
@end

