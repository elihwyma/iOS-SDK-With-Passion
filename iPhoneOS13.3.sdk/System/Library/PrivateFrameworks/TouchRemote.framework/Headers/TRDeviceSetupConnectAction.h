//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TouchRemote/TRDeviceSetupAction.h>

@class NSString;

@interface TRDeviceSetupConnectAction : TRDeviceSetupAction
{
}

@property(readonly, copy, nonatomic) NSString *networkPassword;
@property(readonly, copy, nonatomic) NSString *networkSSID;
@property(readonly, copy, nonatomic) NSString *deviceName;
- (id)initWithDeviceName:(id)arg1 networkSSID:(id)arg2 networkPassword:(id)arg3;
- (id)init;

@end
