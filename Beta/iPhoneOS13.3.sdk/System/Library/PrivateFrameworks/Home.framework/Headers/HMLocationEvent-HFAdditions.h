/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <HomeKit/HMLocationEvent.h>

@class NSString;

@interface HMLocationEvent (HFAdditions)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long hf_eventType;

+ (unsigned long long)hf_locationEventTypeForRegion:(id)arg1;
+ (_Bool)hf_isRegion:(id)arg1 atHome:(id)arg2;

- (id)hf_stateDumpBuilderWithContext:(id)arg1;
- (_Bool)hf_isRegionAtHome:(id)arg1;

@end
