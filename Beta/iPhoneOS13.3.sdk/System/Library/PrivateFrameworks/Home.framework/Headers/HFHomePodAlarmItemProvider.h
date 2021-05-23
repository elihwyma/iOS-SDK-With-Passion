/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItemProvider.h>

@class HFAccessorySettingMobileTimerAdapter, NSMutableDictionary, NSMutableSet;

@protocol HFHomePodAlarmItemProviderDelegate, HFMediaProfileContainer;

@interface HFHomePodAlarmItemProvider : HFItemProvider

{
    HFAccessorySettingMobileTimerAdapter *_mobileTimerAdapter;
    id <HFHomePodAlarmItemProviderDelegate> _delegate;
    id <HFMediaProfileContainer> _mediaProfileContainer;
    NSMutableDictionary *_alarmIDToItemMap;
    NSMutableSet *_alarmItems;
}

@property (nonatomic, readonly) id <HFMediaProfileContainer> mediaProfileContainer;
@property (nonatomic, readonly) NSMutableDictionary *alarmIDToItemMap;
@property (nonatomic, readonly) NSMutableSet *alarmItems;
@property (nonatomic, readonly) HFAccessorySettingMobileTimerAdapter *mobileTimerAdapter;
@property (weak, nonatomic) id <HFHomePodAlarmItemProviderDelegate> delegate;

- (id)items;
- (id)reloadItems;
- (id)initWithMediaProfileContainer:(id)arg1;

@end
