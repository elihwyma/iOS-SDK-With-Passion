/*
 Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <Foundation/NSObject.h>

@interface AXAudioHardwareManager : NSObject

+ (id)sharedManager;
+ (id)defaultPort;
+ (void)setDefaultPort:(id)arg1;
+ (void)updateTestingChannels;
+ (void)enableMultiroute;
+ (void)disableMultiroute;
+ (id)channelsForPort:(id)arg1;
+ (_Bool)channelsAreAirplay:(id)arg1 route:(id)arg2;
+ (_Bool)channelsAreWiredHeadphones:(id)arg1;
+ (void)setDefaultPortChannels:(id)arg1;
+ (id)defaultPortChannels;

- (id)init;
- (id)_savedIdForRouteDescription:(id)arg1;
- (void)_handleSurroundSoundDefaults:(id)arg1 returnedChannels:(id)arg2 port:(id)arg3 source:(long long)arg4;
- (id)savedChannelsForOutput:(id)arg1 forSource:(long long)arg2;
- (void)setSavedChannels:(id)arg1 forOutput:(id)arg2 forSource:(long long)arg3;

@end
