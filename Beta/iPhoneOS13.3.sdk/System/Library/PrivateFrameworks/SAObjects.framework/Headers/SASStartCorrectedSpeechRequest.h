/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAStartRequest.h>

@class NSString;

@interface SASStartCorrectedSpeechRequest : SAStartRequest

@property (nonatomic) long long combinedRank;
@property (nonatomic) double combinedScore;
@property (copy, nonatomic) NSString *interactionId;
@property (nonatomic) _Bool onDeviceUtterancesPresent;
@property (nonatomic) long long originalRank;
@property (nonatomic) double originalScore;
@property (copy, nonatomic) NSString *previousUtterance;
@property (copy, nonatomic) NSString *sessionId;
@property (copy, nonatomic) NSString *utteranceSource;

+ (id)startCorrectedSpeechRequest;
+ (id)startCorrectedSpeechRequestWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
