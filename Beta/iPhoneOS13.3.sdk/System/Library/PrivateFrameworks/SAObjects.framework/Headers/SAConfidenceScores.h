/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseCommand.h>

#import <SAObjects/Swift-Protocol.h>

@class NSArray, NSNumber, NSString;

@interface SAConfidenceScores : SABaseCommand <Swift>

@property (copy, nonatomic) NSString *assetVersion;
@property (nonatomic) long long processedAudioDurationMilliseconds;
@property (copy, nonatomic) NSArray *scores;
@property (copy, nonatomic) NSNumber *scoringSchemeVersion;
@property (copy, nonatomic) NSString *thresholdType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;

+ (id)confidenceScores;
+ (id)confidenceScoresWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
