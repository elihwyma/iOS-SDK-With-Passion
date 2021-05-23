/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSNumber, NSString, SASRecognition;

@interface SASResultCandidate : SABaseClientBoundCommand

@property (copy, nonatomic) NSNumber *processedAudioDuration;
@property (retain, nonatomic) SASRecognition *recognition;
@property (copy, nonatomic) NSString *resultId;

+ (id)resultCandidate;
+ (id)resultCandidateWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;
- (_Bool)mutatingCommand;

@end
