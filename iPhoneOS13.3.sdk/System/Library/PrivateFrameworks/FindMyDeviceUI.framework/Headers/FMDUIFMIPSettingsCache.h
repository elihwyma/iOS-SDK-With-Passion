//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface FMDUIFMIPSettingsCache : NSObject
{
    BOOL _fmipStateAvailable;
    BOOL _lowBatteryLocateStateAvailable;
    BOOL _lowBatteryLocateEnabled;
    NSUInteger _fmipState;
}

+ (id)sharedInstance;
@property(nonatomic) BOOL lowBatteryLocateEnabled; // @synthesize lowBatteryLocateEnabled=_lowBatteryLocateEnabled;
@property(nonatomic) BOOL lowBatteryLocateStateAvailable; // @synthesize lowBatteryLocateStateAvailable=_lowBatteryLocateStateAvailable;
@property(nonatomic) NSUInteger fmipState; // @synthesize fmipState=_fmipState;
@property(nonatomic) BOOL fmipStateAvailable; // @synthesize fmipStateAvailable=_fmipStateAvailable;
- (void)_loadFMIPState;
- (void)_loadLowBatteryState;
@property(readonly, nonatomic) BOOL fmipStateChangeInProgress;
@property(readonly, nonatomic) BOOL fmipEnabled;
- (id)init;

@end

