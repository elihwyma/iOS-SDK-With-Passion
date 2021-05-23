/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SASVoiceIdentificationSignal : SABaseClientBoundCommand

@property (nonatomic) _Bool recordUserAudio;
@property (copy, nonatomic) NSString *resultCandidateId;
@property (copy, nonatomic) NSString *selectedSharedUserId;

+ (id)voiceIdentificationSignal;
+ (id)voiceIdentificationSignalWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
