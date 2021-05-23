/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseCommand.h>

#import <SAObjects/Swift-Protocol.h>

@class NSNumber, NSString, SASStartSpeech;

@interface SAStartRequest : SABaseCommand <Swift>

@property (copy, nonatomic) NSString *origin;
@property (copy, nonatomic) NSString *applicationName;
@property (nonatomic) _Bool clearContext;
@property (nonatomic) _Bool eyesFree;
@property (nonatomic) _Bool handsFree;
@property (copy, nonatomic) NSString *hardwareBuild;
@property (copy, nonatomic) NSString *inputOrigin;
@property (copy, nonatomic) NSNumber *isCarryDevice;
@property (copy, nonatomic) NSString *motionActivity;
@property (copy, nonatomic) NSNumber *motionConfidence;
@property (retain, nonatomic) SASStartSpeech *sourceSpeechRequest;
@property (nonatomic) _Bool talkOnly;
@property (nonatomic) _Bool textToSpeechIsMuted;
@property (copy, nonatomic) NSString *turnId;
@property (copy, nonatomic) NSString *utterance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;

+ (id)startRequest;
+ (id)startRequestWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
