//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccount;

@interface AMSDeviceMessengerFilter : NSObject
{
    ACAccount *_account;
    long long _deviceType;
    long long _messageType;
}

@property(nonatomic) long long messageType; // @synthesize messageType=_messageType;
@property(nonatomic) long long deviceType; // @synthesize deviceType=_deviceType;
@property(retain, nonatomic) ACAccount *account; // @synthesize account=_account;
// - (void).cxx_destruct;
- (BOOL)matchesMessage:(id)arg1;

@end

