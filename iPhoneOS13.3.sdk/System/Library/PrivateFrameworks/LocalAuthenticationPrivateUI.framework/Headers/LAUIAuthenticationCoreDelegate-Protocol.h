//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LocalAuthenticationPrivateUI/LAUIAuthenticationDelegate-Protocol.h>

@class NSNotification;

@protocol LAUIAuthenticationCoreDelegate <LAUIAuthenticationDelegate>
- (void)biometryState:(long long)arg1 completionHandler:(void (^)(void))arg2;
- (void)notification:(long long)arg1 original:(NSNotification *)arg2 mechanism:(NSUInteger)arg3;
@end

