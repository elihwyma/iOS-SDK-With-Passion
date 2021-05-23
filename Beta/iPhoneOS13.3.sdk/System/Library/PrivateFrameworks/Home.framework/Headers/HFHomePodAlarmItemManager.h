/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItemManager.h>

@class HFAccessorySettingMobileTimerAdapter, HFHomePodAlarmItemModule;

@protocol HFMediaProfileContainer;

@interface HFHomePodAlarmItemManager : HFItemManager

{
    id <HFMediaProfileContainer> _mediaProfileContainer;
    HFHomePodAlarmItemModule *_alarmItemModule;
}

@property (nonatomic, readonly) id <HFMediaProfileContainer> mediaProfileContainer;
@property (nonatomic, readonly) HFAccessorySettingMobileTimerAdapter *mobileTimerAdapter;
@property (nonatomic, readonly) HFHomePodAlarmItemModule *alarmItemModule;

- (void)_registerForExternalUpdates;
- (void)_unregisterForExternalUpdates;
- (id)initWithDelegate:(id)arg1 mediaProfileContainer:(id)arg2;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;

@end
