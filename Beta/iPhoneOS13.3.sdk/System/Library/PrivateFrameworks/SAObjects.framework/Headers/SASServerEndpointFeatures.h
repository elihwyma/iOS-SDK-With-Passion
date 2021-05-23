/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, NSString;

@interface SASServerEndpointFeatures : SABaseClientBoundCommand

@property (nonatomic) double eosLikelihood;
@property (nonatomic) long long numOfWords;
@property (copy, nonatomic) NSArray *pauseCounts;
@property (nonatomic) long long processedAudioDurationMs;
@property (nonatomic) double silenceProbability;
@property (copy, nonatomic) NSString *taskName;
@property (nonatomic) long long trailingSilenceDuration;

+ (id)serverEndpointFeatures;
+ (id)serverEndpointFeaturesWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
