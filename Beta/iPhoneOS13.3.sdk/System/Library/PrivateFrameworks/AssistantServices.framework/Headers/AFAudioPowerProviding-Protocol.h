/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <AssistantServices/Swift-Protocol.h>

@protocol AFAudioPowerProviding <Swift>

- (unsigned short)willBeginAccessPower;
- (unsigned short)getAveragePower:andPeakPower: /* Error: Ran out of types for this method. */;
- (unsigned short)didEndAccessPower;

@end
