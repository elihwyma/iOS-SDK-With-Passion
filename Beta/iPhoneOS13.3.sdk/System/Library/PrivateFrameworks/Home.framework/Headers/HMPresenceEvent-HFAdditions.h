/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <HomeKit/HMPresenceEvent.h>

@class NSString;

@interface HMPresenceEvent (HFAdditions)

@property (nonatomic, readonly) unsigned long long hf_activationGranularity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long hf_eventType;

+ (unsigned long long)hf_locationEventTypeForPresenceEventType:(unsigned long long)arg1;
+ (unsigned long long)hf_presenceDisableReasonsForHome:(id)arg1;

- (id)hf_stateDumpBuilderWithContext:(id)arg1;

@end
