/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUFeatureOnboarder.h>

@class HMHome;

@interface HUHomeFeatureOnboarder : HUFeatureOnboarder

{
    HMHome *_home;
}

@property (retain, nonatomic) HMHome *home;

- (id)_subclass_buildAllFlowGroupsFromFeatureGroups:(id)arg1 usageOptions:(id)arg2;
- (id)getPostProcessingFlowsForResults:(id)arg1;
- (id)initWithFeatures:(id)arg1 home:(id)arg2 usageOptions:(id)arg3;
- (id)initWithGroupedFeatures:(id)arg1 home:(id)arg2 usageOptions:(id)arg3;

@end
