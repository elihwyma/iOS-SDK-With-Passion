/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseCommand.h>

#import <SAObjects/Swift-Protocol.h>

@class NSDictionary, NSNumber, NSString;

@interface SASStartSpeech : SABaseCommand <Swift>

@property (copy, nonatomic) NSString *origin;
@property (copy, nonatomic) NSString *audioDestination;
@property (copy, nonatomic) NSString *audioSource;
@property (nonatomic) _Bool clearContext;
@property (nonatomic) int codec;
@property (copy, nonatomic) NSString *deviceIdentifier;
@property (copy, nonatomic) NSString *deviceModel;
@property (nonatomic) _Bool disableAutoEndpointing;
@property (copy, nonatomic) NSString *dspStatus;
@property (nonatomic) _Bool enablePartialResults;
@property (copy, nonatomic) NSString *headsetAddress;
@property (copy, nonatomic) NSString *headsetId;
@property (copy, nonatomic) NSString *headsetName;
@property (copy, nonatomic) NSNumber *isCarryDevice;
@property (copy, nonatomic) NSString *motionActivity;
@property (copy, nonatomic) NSNumber *motionConfidence;
@property (copy, nonatomic) NSNumber *noiseReductionLevel;
@property (copy, nonatomic) NSString *turnId;
@property (copy, nonatomic) NSDictionary *voiceTriggerEventInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;

+ (id)startSpeech;
+ (id)startSpeechWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
