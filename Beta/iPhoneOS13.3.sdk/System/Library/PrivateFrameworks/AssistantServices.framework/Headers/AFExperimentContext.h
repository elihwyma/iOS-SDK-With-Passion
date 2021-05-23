/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

#import <AssistantServices/Swift-Protocol.h>

@class AFExperiment, NSDictionary;

@protocol AFExperimentForSiriVOXSounds, AFExperimentForSiriVOXTapToSiriBehavior, AFInvocationFeedbackExperiment;

@interface AFExperimentContext : NSObject <Swift>

{
    NSDictionary *_experimentsByConfigurationIdentifier;
}

@property (nonatomic, readonly) AFExperiment<AFExperimentForSiriVOXSounds> *experimentForSiriVOXSounds;
@property (nonatomic, readonly) AFExperiment<AFExperimentForSiriVOXTapToSiriBehavior> *experimentForSiriVOXTapToSiriBehavior;
@property (nonatomic, readonly) AFExperiment<AFInvocationFeedbackExperiment> *invocationFeedbackExperiment;
@property (copy, nonatomic, readonly) NSDictionary *experimentsByConfigurationIdentifier;

+ (_Bool)supportsSecureCoding;
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;
- (id)initWithExperimentsByConfigurationIdentifier:(id)arg1;

@end
