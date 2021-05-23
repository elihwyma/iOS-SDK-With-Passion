/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItemProvider.h>

@class HFAccessoryProfileFilterOptions, HFAccessoryProfileGroupOptions, HMHome, NSMutableSet, NSString;

@interface HFAccessoryProfileGroupItemProvider : HFItemProvider

{
    HFAccessoryProfileFilterOptions *_filterOptions;
    HFAccessoryProfileGroupOptions *_groupOptions;
    HMHome *_home;
    NSMutableSet *_profileGroupItems;
}

@property (retain, nonatomic) NSMutableSet *profileGroupItems;
@property (nonatomic, readonly) HMHome *home;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) HFAccessoryProfileFilterOptions *filterOptions;
@property (retain, nonatomic) HFAccessoryProfileGroupOptions *groupOptions;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)items;
- (id)initWithHome:(id)arg1;
- (id)reloadItems;
- (id)invalidationReasons;
- (id)_supportedProfileClasses;
- (id)_profileGroupItemForProfiles:(id)arg1 groupIdentifier:(id)arg2;

@end
