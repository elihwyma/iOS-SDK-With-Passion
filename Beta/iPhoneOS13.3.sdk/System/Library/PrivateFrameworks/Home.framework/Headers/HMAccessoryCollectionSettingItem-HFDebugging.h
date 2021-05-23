/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <HomeKit/HMAccessoryCollectionSettingItem.h>

#import <Home/Swift-Protocol.h>

@class NSString;

@interface HMAccessoryCollectionSettingItem (HFDebugging) <Swift>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)hf_collectionSettingItemForAlarm:(id)arg1;
+ (id)hf_alarmItemsMatchingAlarmId:(id)arg1 withinItemArray:(id)arg2;

- (id)hf_stateDumpBuilderWithContext:(id)arg1;

@end
