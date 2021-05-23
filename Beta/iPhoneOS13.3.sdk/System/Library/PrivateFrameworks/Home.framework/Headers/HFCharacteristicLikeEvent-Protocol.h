/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/Swift-Protocol.h>

@class HMCharacteristic;

@protocol HFCharacteristicLikeEvent <Swift>

@property (nonatomic, readonly) HMCharacteristic *characteristic;
@property (nonatomic, readonly) id hf_representativeTriggerValue;

@end
