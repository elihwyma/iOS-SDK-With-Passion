//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class HFAccessorySettingsEntity, NAFuture;

@protocol HFAccessorySettingAdapterButtonHandling <NSObject>
- (NAFuture *)inProgressButtonPressFutureForEntity:(HFAccessorySettingsEntity *)arg1;
- (BOOL)supportButtonPressForEntity:(HFAccessorySettingsEntity *)arg1;
- (NAFuture *)handleButtonPressForEntity:(HFAccessorySettingsEntity *)arg1;
@end

