/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <AvatarUI/Swift-Protocol.h>

@protocol AVTDeviceResourceConsumerDelegate;

@protocol AVTDeviceResourceConsumer <Swift>

@property (weak, nonatomic) id <AVTDeviceResourceConsumerDelegate> consumerDelegate;

- (unsigned short)releaseRenderingResourceForEstimatedDuration: /* Error: Ran out of types for this method. */;

@end
