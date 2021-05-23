/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseCommand.h>

#import <SAObjects/Swift-Protocol.h>

@class NSArray, NSDictionary, NSString;

@interface SASFinishSpeech : SABaseCommand <Swift>

@property (copy, nonatomic) NSString *endpoint;
@property (copy, nonatomic) NSArray *featuresAtEndpoint;
@property (copy, nonatomic) NSArray *orderedContext;
@property (nonatomic) long long packetCount;
@property (copy, nonatomic) NSDictionary *serverFeatureLatencyDistribution;
@property (nonatomic) double totalAudioRecorded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;

+ (id)finishSpeech;
+ (id)finishSpeechWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
