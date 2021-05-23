/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@interface SADeviceConfiguration : SABaseClientBoundCommand

@property (nonatomic) double initialInterstitialDelay;
@property (nonatomic) double initialInterstitialDelayForCarPlay;
@property (nonatomic) double initialInterstitialDelayForVoiceTriggerOneShotWithoutAudioDucking;

+ (id)deviceConfiguration;
+ (id)deviceConfigurationWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
