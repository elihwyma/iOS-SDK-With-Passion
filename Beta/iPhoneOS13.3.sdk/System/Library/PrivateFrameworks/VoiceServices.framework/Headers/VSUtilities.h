/*
 Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

#import <Foundation/NSObject.h>

@interface VSUtilities : NSObject

+ (_Bool)isInternalBuild;
+ (_Bool)isWatch;
+ (_Bool)isAudioAccessory;
+ (id)hardwarePlatform;
+ (_Bool)isSeedBuild;
+ (_Bool)hasANE;
+ (_Bool)isNeuralTTSPlatform;
+ (_Bool)hasAMX;
+ (id)legacyPlatforms;

@end
