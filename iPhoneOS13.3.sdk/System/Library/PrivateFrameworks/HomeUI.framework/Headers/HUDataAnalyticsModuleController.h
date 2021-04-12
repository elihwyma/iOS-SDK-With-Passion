//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUItemTableModuleController.h>

@protocol HUDataAnalyticsModuleControllerDelegate;

@interface HUDataAnalyticsModuleController : HUItemTableModuleController
{
    id <HUDataAnalyticsModuleControllerDelegate> _dataAnalyticsModuleControllerDelegate;
}

@property(nonatomic) __weak id <HUDataAnalyticsModuleControllerDelegate> dataAnalyticsModuleControllerDelegate; // @synthesize dataAnalyticsModuleControllerDelegate=_dataAnalyticsModuleControllerDelegate;
// - (void).cxx_destruct;
- (NSUInteger)didSelectItem:(id)arg1;
- (BOOL)canSelectItem:(id)arg1;
- (void)setupCell:(id)arg1 forItem:(id)arg2;
- (Class)cellClassForItem:(id)arg1;
- (id)module;
- (id)initWithModule:(id)arg1;

@end

