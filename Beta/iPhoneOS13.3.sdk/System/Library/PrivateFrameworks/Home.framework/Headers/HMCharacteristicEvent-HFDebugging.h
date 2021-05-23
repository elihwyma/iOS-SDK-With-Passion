/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <HomeKit/HMCharacteristicEvent.h>

@class HMCharacteristic, NSString;

@interface HMCharacteristicEvent (HFDebugging)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) HMCharacteristic *characteristic;
@property (nonatomic, readonly) id hf_representativeTriggerValue;

- (id)hf_stateDumpBuilderWithContext:(id)arg1;

@end
