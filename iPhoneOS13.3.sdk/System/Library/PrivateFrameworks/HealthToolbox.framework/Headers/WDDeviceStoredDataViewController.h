//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthToolbox/WDStoredDataByCategoryViewController.h>

@class HKDevice, NSString;

__attribute__((visibility("hidden")))
@interface WDDeviceStoredDataViewController : WDStoredDataByCategoryViewController
{
    HKDevice *_device;
    NSString *_displayName;
}

@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) HKDevice *device; // @synthesize device=_device;
// - (void).cxx_destruct;
- (void)deleteAllStoredData;
- (BOOL)shouldShowDeleteAllDataButton;
- (id)storedDataDisplayName;
- (id)storedDataPredicate;

@end

