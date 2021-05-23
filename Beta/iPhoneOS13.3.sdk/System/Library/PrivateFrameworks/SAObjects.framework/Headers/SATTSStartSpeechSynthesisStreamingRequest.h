/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAStartRequest.h>

@class NSDictionary, NSString;

@interface SATTSStartSpeechSynthesisStreamingRequest : SAStartRequest

@property (copy, nonatomic) NSString *audioType;
@property (copy, nonatomic) NSString *gender;
@property (copy, nonatomic) NSString *languageCode;
@property (copy, nonatomic) NSString *quality;
@property (nonatomic) _Bool requiresWordTimingInfo;
@property (copy, nonatomic) NSDictionary *speakableContextInfo;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *voiceName;

+ (id)startSpeechSynthesisStreamingRequest;
+ (id)startSpeechSynthesisStreamingRequestWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
