/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItemModule.h>

@class HFAccessorySettingMobileTimerAdapter, HFHomePodAlarmItemProvider, NSSet, NSString;

@protocol HFMediaProfileContainer;

@interface HFHomePodAlarmItemModule : HFItemModule

{
    NSSet *_itemProviders;
    id <HFMediaProfileContainer> _mediaProfileContainer;
    HFHomePodAlarmItemProvider *_alarmItemProvider;
}

@property (nonatomic, readonly) NSSet *itemProviders;
@property (nonatomic, readonly) HFHomePodAlarmItemProvider *alarmItemProvider;
@property (nonatomic, readonly) id <HFMediaProfileContainer> mediaProfileContainer;
@property (nonatomic, readonly) HFAccessorySettingMobileTimerAdapter *mobileTimerAdapter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithItemUpdater:(id)arg1 mediaProfileContainer:(id)arg2;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (void)registerForExternalUpdates;
- (void)unregisterForExternalUpdates;
- (void)mobileTimerAdapter:(id)arg1 didUpdateAlarms:(id)arg2;

@end
