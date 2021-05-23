/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <HealthUI/HKDisplayType.h>

__attribute__((visibility("hidden")))
@interface WDHeartbeatSequenceDisplayType : HKDisplayType

+ (id)sharedDisplayType;

- (long long)categoryIdentifier;
- (id)sampleType;
- (id)wd_listViewControllerDataProviderWithProfile:(id)arg1 unitController:(id)arg2 isHierarchical:(_Bool)arg3;

@end
