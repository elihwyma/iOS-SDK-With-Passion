/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

#import <AssistantServices/Swift-Protocol.h>

@class NSDictionary, NSString;

@interface AFExperiment : NSObject <Swift>

{
    NSString *_configurationIdentifier;
    NSString *_configurationVersion;
    NSString *_deploymentGroupIdentifier;
    NSDictionary *_deploymentGroupProperties;
    long long _deploymentReason;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool playsTwoShotSoundForSiriVOXSounds;
@property (nonatomic, readonly) _Bool playsSessionInactiveSoundForSiriVOXSounds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool playsSound;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long featureGroups;
@property (copy, nonatomic, readonly) NSString *configurationIdentifier;
@property (copy, nonatomic, readonly) NSString *configurationVersion;
@property (copy, nonatomic, readonly) NSString *deploymentGroupIdentifier;
@property (copy, nonatomic, readonly) NSDictionary *deploymentGroupProperties;
@property (nonatomic, readonly) long long deploymentReason;

+ (_Bool)supportsSecureCoding;
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;
- (void)logExperimentExposureForSiriVOXSounds;
- (id)initWithConfigurationIdentifier:(id)arg1 configurationVersion:(id)arg2 deploymentGroupIdentifier:(id)arg3 deploymentGroupProperties:(id)arg4 deploymentReason:(long long)arg5;
- (void)logExperimentExposureForTapToSiriBehavior;
- (void)logExperimentExposureForInvocationFeedbacks;
- (_Bool)isFeatureGroupOneEnabled;
- (_Bool)isFeatureGroupTwoEnabled;
- (_Bool)isFeatureGroupThreeEnabled;
- (_Bool)isFeatureGroupFourEnabled;

@end
