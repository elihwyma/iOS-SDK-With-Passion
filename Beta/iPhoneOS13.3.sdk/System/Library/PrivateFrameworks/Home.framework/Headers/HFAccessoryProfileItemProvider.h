/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItemProvider.h>

@class HFAccessoryProfileFilterOptions, HMHome, NSMutableSet, NSString;

@interface HFAccessoryProfileItemProvider : HFItemProvider

{
    HFAccessoryProfileFilterOptions *_filterOptions;
    HMHome *_home;
    NSMutableSet *_profileItems;
}

@property (retain, nonatomic) NSMutableSet *profileItems;
@property (nonatomic, readonly) HMHome *home;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) HFAccessoryProfileFilterOptions *filterOptions;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)items;
- (id)initWithHome:(id)arg1;
- (id)reloadItems;
- (id)invalidationReasons;
- (id)_supportedProfileClasses;
- (id)_profileItemForProfile:(id)arg1;

@end
