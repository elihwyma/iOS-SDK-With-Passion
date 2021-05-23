/*
 Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

#import <Intents/INIntent.h>

@class TVRDevice;

@interface WakeAppleTVIntent : INIntent

@property (copy, nonatomic) TVRDevice *device;

@end
