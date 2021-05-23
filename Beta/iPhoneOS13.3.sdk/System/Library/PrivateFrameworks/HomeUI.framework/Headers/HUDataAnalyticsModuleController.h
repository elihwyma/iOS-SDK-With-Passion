/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUItemTableModuleController.h>

@protocol HUDataAnalyticsModuleControllerDelegate;

@interface HUDataAnalyticsModuleController : HUItemTableModuleController

{
    id <HUDataAnalyticsModuleControllerDelegate> _dataAnalyticsModuleControllerDelegate;
}

@property (weak, nonatomic) id <HUDataAnalyticsModuleControllerDelegate> dataAnalyticsModuleControllerDelegate;

- (id)module;
- (id)initWithModule:(id)arg1;
- (_Bool)canSelectItem:(id)arg1;
- (unsigned long long)didSelectItem:(id)arg1;
- (Class)cellClassForItem:(id)arg1;
- (void)setupCell:(id)arg1 forItem:(id)arg2;

@end
