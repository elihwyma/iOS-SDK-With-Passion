/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SASStartSpeech.h>

@class NSArray, NSNumber, NSString;

@interface SASStartSpeechRequest : SASStartSpeech

@property (copy, nonatomic) NSArray *bargeInModes;
@property (copy, nonatomic) NSString *clientModelVersion;
@property (copy, nonatomic) NSNumber *durationSincePreviousTTSFinish;
@property (copy, nonatomic) NSNumber *durationSincePreviousTTSStart;
@property (nonatomic) _Bool eyesFree;
@property (nonatomic) _Bool handsFree;
@property (nonatomic) _Bool talkOnly;
@property (nonatomic) _Bool textToSpeechIsMuted;
@property (copy, nonatomic) NSArray *voiceTriggerPhrases;
@property (nonatomic) _Bool wasLaunchedForRequest;

+ (id)startSpeechRequest;
+ (id)startSpeechRequestWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
